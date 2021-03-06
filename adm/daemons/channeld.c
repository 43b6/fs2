// channeld.c wade (6/6/1996)
// music 频道, 需配合 /cmds/std/song.c 跟 /obj/example/song.c wade (7/7/1996)
// ut, mt, war, ot by ACKY
// ct by swy
// ht, cb, exp5000以下不能用各种频道 by chan

#include <ansi.h>
#include <net/dns.h>

inherit F_DBASE;

void create()
{
	seteuid(getuid()); // This is required to pass intermud access check.
	set_temp("channel_id", "频道精灵");
}
void reset()
{
CHANNEL_D->do_channel(this_object(),"sys",HIG"物件重生了!!"NOR);
}


string myclass, myclan;
string record;

mapping channels = ([
	"sys"     : (["msg_speak" : "【系统】%s"NOR": %s\n",
                      "arch_only" : 1 ]),

        "wiz"     : (["msg_speak" : HIW"【"HIY"众神会议"HIW"】"HIY"%s说道: %s\n"NOR,
                      "wiz_only" : 1 ]),

        "gwiz"    : (["msg_speak" : "【"HIG"网际巫师"NOR"】"HIG"%s说道: %s\n"NOR,
                      "wiz_only": 1,
                      "intermud": GWIZ,
                      "channel" : "CREATOR",
                      "filter" : 1 ]),

        "es"      : (["msg_speak":  "【"HIR"狂想空间"NOR"】"HIR"%s说道: %s\n"NOR,
                      "intermud": GCHANNEL,
                      "channel": "es",
                      "filter": (: $1["MUDLIB"]=="Eastern Stories" :) ]),

	// 增加IP by ACKY
	"twiz"    : (["msg_speak": "【"HIW"台湾巫师"NOR"】"HIW"%s说道: %s\n"NOR,
                      "wiz_only":1,
                      "intermud": GCHANNEL,
                      "channel": "twiz",
                      "filter": (: $1["HOSTADDRESS"][0..2]=="140" ||
				   $1["HOSTADDRESS"][0..2]=="163" ||
				   $1["HOSTADDRESS"][0..2]=="168" ||
				   $1["HOSTADDRESS"][0..2]=="192" ||
				   $1["HOSTADDRESS"][0..2]=="203" ||
				   $1["HOSTADDRESS"][0..2]=="210" ||
				   $1["HOSTADDRESS"][0..2]=="211"
			:)]),

        "chat"    : (["msg_speak": "【"HIC"闲聊"NOR"】"HIC"%s说道: %s\n"NOR]),

	"sex"	  : (["msg_speak": HIY"【"HIR"十八禁频道"HIY"】%s说道: %s\n"NOR]),

        "music"   : (["msg_speak": GRN"【"HIG"天籁"GRN"】"HIG"%s唱道: %s\n"NOR]),

        "cb"      : (["msg_speak": HIC"【"HIW"帮会协商"HIC"】"HIW"%s谈道: %s\n"NOR]),

        "dead"    : (["msg_speak": HIM"%s%s\n"NOR]),

        "war"     : (["msg_speak": "【"HIR"战争"NOR"】"HIR"%s喝道: %s\n"NOR]),

        "ct"     : (["msg_speak": "【"HIY"帮会"NOR"】"HIY"%s说道: %s\n"NOR]),

        "gt"     : (["msg_speak": GRN"【"HIG"公会"GRN"】"HIG"%s说道: %s\n"NOR]),

        "ut"      : (["msg_speak": HIM"【"HIW"至尊"HIM"】"HIW"%s冥想: %s\n"NOR]),

        "ht"      : (["msg_speak": HIY"【"HIM"英雄论谈"HIY"】"HIM"%s谈道: %s\n"NOR]),

        "mt"      : (["msg_speak": HIY"【"HIG"肉脚对话"HIY"】"HIG"%s说道: %s\n"NOR]),

        "ot"     : (["msg_speak": HIB"【夜总会】"HIG"%s冥想: %s\n"NOR]),

        "shout"   : (["msg_speak": HIR"%s纵声大叫: %s\n"NOR]),

        "gamble"  : (["msg_speak": "%s\n",
                      "mud_only": 1, ]),

        "mud"     : (["msg_speak": HIG"%s\n"NOR,
                      "mud_only": 1, ]),

        "rumor"   : (["msg_speak": BLU"【"HIB"谣言"BLU"】"HIB"%s: %s\n"NOR,
                      "anonymous": "某人", ]),

        "ct*"     : (["msg_speak": "【"HIY"帮会"NOR"】"HIY""]),

        "wiz*"    : (["msg_speak": HIW"【"HIY"众神会议"HIW"】"HIY"",
                      "wiz_only": 1 ]),

	"sex*"	  : (["msg_speak": HIY"【"HIR"十八禁频道"HIY"】"]),

        "chat*"   : (["msg_speak": "【"HIC"闲聊"NOR"】"HIC""]),

        "gt*"     : (["msg_speak": GRN"【"HIG"公会"NOR"】"GRN""]),

        "ut*"     : (["msg_speak": HIM"【"HIW"至尊"HIM"】"HIW]),

        "ht*"     : (["msg_speak": HIY"【"HIM"英雄论谈"HIY"】"HIM]),

        "mt*"     : (["msg_speak": HIY"【"HIG"肉脚对话"HIY"】"HIG]),

        "cb*"     : (["msg_speak": HIC"【"HIW"帮会协商"HIC"】"HIW]),

        "ot*"     : (["msg_speak": HIB"【夜总会】"HIG]),
]);

varargs int do_channel( object me, string verb, string arg, int emote )
{
	string *tuned_ch, who, emote_verb, emote_arg, cls;
	object *usr;
	int exp, clanrank, age;


	if( wizardp(me) && verb == "record" ) {
		if (!arg)
			tell_object( me, "现在录音况状是: "+record+"\n");
		else if( arg == "stop" )
			record = 0;
		else if( arg == "wiz" || arg == "chat" ) {
			if( write_file("/log/RECORD/"+arg,
				me->query("id")+" 启动录音："+ctime(time()), 1)) {
				record = arg;
				tell_object( me, "现在录音开始录 " + arg + " 频道。\n");
			}
		}
		return 1;
	}

	if( undefinedp(channels[verb]) && !mapp(channels) )
		return notify_fail("无任何频道存在。\n");
	if(!channels[verb])
 		return 0;

	if( userp(me) ) { //玩家使用频道的限制
		exp=me->query("combat_exp");
      		clanrank = me->query("clan/rank");
      		myclass  = me->query("class");
      		myclan   = me->query("clan/name");
      		tuned_ch = me->query_temp("channels");
      		age      = me->query("age");

		if( arg == me->query_temp("last_channel_msg") )
		        return notify_fail("说话请不要重复相同的讯息。\n");

   		me->set_temp("last_channel_msg", arg);

      		// 非巫师不能打开巫师频道
 if( channels[verb]["arch_only"] && wiz_level(me) <= 3 )
			return notify_fail("这是巫师专用频道。\n");

if( channels[verb]["wiz_only"] && wiz_level(me) < 1 )
return notify_fail("这是巫师专用频道。\n");
      		// 没帮会不能用 ct By Swy
      		if( verb == "ct" && !myclan )
		        return notify_fail("你尚未加入任何帮会。\n");

		// 没加入帮会, 无法使用帮会战争频道 by ACKY
		if( verb == "war" && !myclan )
        		return notify_fail("您尚未加入任何帮会。\n");

		if( verb == "gt" && !myclass )
			return notify_fail("你尚未加入任何公会。\n");

		//帮会协商
		if( verb == "cb" && clanrank>3 )
        		return notify_fail("只有位阶在[三级]以上者才能使用此频道。\n");

		if( verb == "mt" && exp>=3000000 )
		        return notify_fail("只有肉脚才能使用此频道。\n");

		if( verb == "ht" && (exp<3000000) )
     			return notify_fail("您的实战经验未满三百万, 不算是英雄。\n");

		if( verb == "ut" && (exp<10000000) )
     			return notify_fail("您的实战经验未满一千万, 无法使用此频道。\n");

		if( verb == "ot" && ( age < 100 ) )
			return notify_fail( "您未满一百岁, 别急着加入夜总会。\n" );

     		// 如果未满15岁不能开"es"频道
		if( verb == "es" && (int)me->query("age")<15 )
		        return notify_fail("要满15岁才有使用es频道的权力。\n");

	        // shoutup 闭嘴指令
 		if( me->query("shutup") )
          		return notify_fail("你已被取消使用公用频道的权利了。\n");

		// exp在5000以下不能用任何频道, 防止别人来扰乱!
		if( verb != "chat" &&(exp<5000) )
			return notify_fail("您的实战经验未满5000, 无法使用所有的频道。\n");

      		//设定听众
      		usr = filter_array(users(), "listen_me", this_object(), me, verb);
	}
	else {
	//mob使用频道,听众是所有user
		if( me->query("master") )
			return 0;
		usr = users();
	}

//以下change by bss,试试看另一种写法
/*
	// 使用后自动打开该频道
  	if( pointerp(tuned_ch) )
		if( member_array(verb, tuned_ch)==-1 )
        		me->set_temp("channels", tuned_ch + ({ verb }) );
  	else
     		me->set_temp( "channels", ({ verb }) );
*/
     tuned_ch=me->query_temp("channels");
     if(!pointerp(tuned_ch))
       me->set_temp("channels",({verb}));
     else if(member_array(verb,tuned_ch)==-1)
       me->set_temp("channels",tuned_ch+({verb}));

  	// 玩家可以打开 mud 频道收听, 但是不能使用 mud 频道
  	if ( channels[verb]["mud_only"] && !wizardp(me) && userp(me) )
     		return 1;

  	//  处理who 变数
  	if( channels[verb]["anonymous"] )
    		who = channels[verb]["anonymous"];
  	else
    		if( !(who = me->query_temp("channel_id") ) )
      			if( !(who = me->query("channel_id") ) )
        			who = me->query("name") + "(" + (me->query("id")) + ")";
	arg = ( stringp(arg) ) ? trans_color(arg) : "...";


	// 动作讯息
	if( verb == "ht*" || verb == "cb*" || verb == "wiz*" || verb == "ut*" || verb == "chat*" ||
	verb=="sex*"||verb == "ct*" || verb == "gt*" || verb == "war*" || verb == "mt*" || verb == "ot*" ) {
		if( !arg )
			return notify_fail("用法: <动作> <对象> \n");
		if( sscanf( arg, "%s %s", emote_verb, emote_arg ) != 2 )
			emote_verb = arg;
		return( EMOTE_D->do_emote(me,emote_verb,emote_arg,usr,channels[verb]["msg_speak"]) ) ? 1:0;
	}

	// 公会频道
	if( verb == "gt" ) {
		cls = (me->query("gender") == "女性") ?
			to_chinese("f_"+myclass) : to_chinese(myclass);
		message( "class_channel",
			sprintf(HIG"%s"NOR"%s说道: %s\n"NOR, cls, who, arg ),
			usr );
		return 1;
	}

	// 帮会频道
	if( verb == "ct" ) {
		message( "clan_channel",
			sprintf("【"HIC"%s"NOR"】"HIY"%s说道: %s\n"NOR, myclan, who, arg ),
			usr );
		return 1;
	}

	// 帮会战争频道
	if( verb == "war" ) {
		message( "clan_channel",
			sprintf("【"HIR"%s"NOR"】"HIR"%s喝道: %s\n"NOR, myclan, who, arg ),
			usr );
		return 1;
	}

	// mud_only 频道(mud_only频道没列出说话者)
	if( channels[verb]["mud_only"] ) {
		message( "channel:" + verb,
			sprintf( channels[verb]["msg_speak"], arg ),
                	usr );
      		return 1;
	}

	// 一般频道
	message( "channel:" + verb,
		sprintf( channels[verb]["msg_speak"], who, arg ),
		usr );

	if( verb == record )
		write_file( "/log/RECORD/"+record,
			sprintf( channels[verb]["msg_speak"], who, arg ) );

	if( verb == "rumor" && wiz_level(me) <=1 ) {
		write( "由于你到处散布谣言, 感觉全身虚脱无力……\n");
	        me->receive_damage("gin", 10);
        	me->receive_damage("kee", 10);
        	me->receive_damage("sen", 10);
		do_channel(this_object(), "sys",
        		me->name()+"("+me->query("id")+")"+ "散布谣言道: "+arg, 0);
	}

	if( !undefinedp(channels[verb]["intermud"]) && base_name(me) != channels[verb]["intermud"] )
		channels[verb]["intermud"]->send_msg(channels[verb]["channel"],
            		me->query("id"),me->name(1),arg,0,channels[verb]["filter"] );
	return 1;
	return 0;
/*
  if( channels[verb]
   && !undefinedp(channels[verb]["intermud"])
   &&  base_name(me) != channels[verb]["intermud"] )
    channels[verb]["intermud"]->send_msg(channels[verb]["channel"],
           me->query("id"),me->name(1),arg,0,channels[verb]["filter"] );
    return 1; */
}

// 处理玩家是否接收讯息
int listen_me( object who, object me, string verb )
{
	if( !environment(who) ) // 分辨已上线完毕没
      		return 0;

	// 分辨是否tune on
	if( !who->query_temp("channels") || member_array(verb, who->query_temp("channels")) == -1)
		return 0;

	if( channels[verb]["wiz_only"] )
		return wizardp(who);

	// 公会频道 guild talk
	if( verb == "gt" || verb == "gt*" )
		return( myclass == who->query("class") ) ? 1 : 0;

	// 帮会频道 clan talk
	if( verb == "ct" || verb == "ct*" )
		return( myclan == who->query("clan/name") ) ? 1 : 0;

	// 帮会战争频道 war
	if( verb == "war" || verb == "war*" )
		return( myclan == who->query("clan/name") ) ? 1 : 0;

	// 帮会协商 clan business
	if( verb == "cb" || verb == "cb*" )
		return( who->query("clan/rank")<4 && who->query("clan/rank")>0 ) ? 1 : 0;

	// 至尊 ultimate talk
	if( verb == "ut" || verb == "ut*" )
		return( who->query("combat_exp") >= 10000000 ) ? 1 : 0;

	// 英雄论谈 hero talk
	if( verb == "ht" || verb == "ht*" )
		return( who->query("combat_exp") >= 3000000 ) ? 1 : 0;

	// 老人 old men's talk
	if( verb == "ot" || verb == "ot*" )
		return( who->query("age") >= 100 ) ? 1 : 0;

	// 肉脚对话 meat foot talk
	if( verb == "mt" || verb == "mt*" )
		return( who->query("combat_exp") < 3000000) ? 1 : 0;

	return 1;
}
