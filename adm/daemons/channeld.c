// channeld.c wade (6/6/1996)
// music Ƶ��, ����� /cmds/std/song.c �� /obj/example/song.c wade (7/7/1996)
// ut, mt, war, ot by ACKY
// ct by swy
// ht, cb, exp5000���²����ø���Ƶ�� by chan

#include <ansi.h>
#include <net/dns.h>

inherit F_DBASE;

void create()
{
	seteuid(getuid()); // This is required to pass intermud access check.
	set_temp("channel_id", "Ƶ������");
}
void reset()
{
CHANNEL_D->do_channel(this_object(),"sys",HIG"���������!!"NOR);
}


string myclass, myclan;
string record;

mapping channels = ([
	"sys"     : (["msg_speak" : "��ϵͳ��%s"NOR": %s\n",
                      "arch_only" : 1 ]),

        "wiz"     : (["msg_speak" : HIW"��"HIY"�������"HIW"��"HIY"%s˵��: %s\n"NOR,
                      "wiz_only" : 1 ]),

        "gwiz"    : (["msg_speak" : "��"HIG"������ʦ"NOR"��"HIG"%s˵��: %s\n"NOR,
                      "wiz_only": 1,
                      "intermud": GWIZ,
                      "channel" : "CREATOR",
                      "filter" : 1 ]),

        "es"      : (["msg_speak":  "��"HIR"����ռ�"NOR"��"HIR"%s˵��: %s\n"NOR,
                      "intermud": GCHANNEL,
                      "channel": "es",
                      "filter": (: $1["MUDLIB"]=="Eastern Stories" :) ]),

	// ����IP by ACKY
	"twiz"    : (["msg_speak": "��"HIW"̨����ʦ"NOR"��"HIW"%s˵��: %s\n"NOR,
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

        "chat"    : (["msg_speak": "��"HIC"����"NOR"��"HIC"%s˵��: %s\n"NOR]),

	"sex"	  : (["msg_speak": HIY"��"HIR"ʮ�˽�Ƶ��"HIY"��%s˵��: %s\n"NOR]),

        "music"   : (["msg_speak": GRN"��"HIG"����"GRN"��"HIG"%s����: %s\n"NOR]),

        "cb"      : (["msg_speak": HIC"��"HIW"���Э��"HIC"��"HIW"%s̸��: %s\n"NOR]),

        "dead"    : (["msg_speak": HIM"%s%s\n"NOR]),

        "war"     : (["msg_speak": "��"HIR"ս��"NOR"��"HIR"%s�ȵ�: %s\n"NOR]),

        "ct"     : (["msg_speak": "��"HIY"���"NOR"��"HIY"%s˵��: %s\n"NOR]),

        "gt"     : (["msg_speak": GRN"��"HIG"����"GRN"��"HIG"%s˵��: %s\n"NOR]),

        "ut"      : (["msg_speak": HIM"��"HIW"����"HIM"��"HIW"%sڤ��: %s\n"NOR]),

        "ht"      : (["msg_speak": HIY"��"HIM"Ӣ����̸"HIY"��"HIM"%s̸��: %s\n"NOR]),

        "mt"      : (["msg_speak": HIY"��"HIG"��ŶԻ�"HIY"��"HIG"%s˵��: %s\n"NOR]),

        "ot"     : (["msg_speak": HIB"��ҹ�ܻ᡿"HIG"%sڤ��: %s\n"NOR]),

        "shout"   : (["msg_speak": HIR"%s�������: %s\n"NOR]),

        "gamble"  : (["msg_speak": "%s\n",
                      "mud_only": 1, ]),

        "mud"     : (["msg_speak": HIG"%s\n"NOR,
                      "mud_only": 1, ]),

        "rumor"   : (["msg_speak": BLU"��"HIB"ҥ��"BLU"��"HIB"%s: %s\n"NOR,
                      "anonymous": "ĳ��", ]),

        "ct*"     : (["msg_speak": "��"HIY"���"NOR"��"HIY""]),

        "wiz*"    : (["msg_speak": HIW"��"HIY"�������"HIW"��"HIY"",
                      "wiz_only": 1 ]),

	"sex*"	  : (["msg_speak": HIY"��"HIR"ʮ�˽�Ƶ��"HIY"��"]),

        "chat*"   : (["msg_speak": "��"HIC"����"NOR"��"HIC""]),

        "gt*"     : (["msg_speak": GRN"��"HIG"����"NOR"��"GRN""]),

        "ut*"     : (["msg_speak": HIM"��"HIW"����"HIM"��"HIW]),

        "ht*"     : (["msg_speak": HIY"��"HIM"Ӣ����̸"HIY"��"HIM]),

        "mt*"     : (["msg_speak": HIY"��"HIG"��ŶԻ�"HIY"��"HIG]),

        "cb*"     : (["msg_speak": HIC"��"HIW"���Э��"HIC"��"HIW]),

        "ot*"     : (["msg_speak": HIB"��ҹ�ܻ᡿"HIG]),
]);

varargs int do_channel( object me, string verb, string arg, int emote )
{
	string *tuned_ch, who, emote_verb, emote_arg, cls;
	object *usr;
	int exp, clanrank, age;


	if( wizardp(me) && verb == "record" ) {
		if (!arg)
			tell_object( me, "����¼����״��: "+record+"\n");
		else if( arg == "stop" )
			record = 0;
		else if( arg == "wiz" || arg == "chat" ) {
			if( write_file("/log/RECORD/"+arg,
				me->query("id")+" ����¼����"+ctime(time()), 1)) {
				record = arg;
				tell_object( me, "����¼����ʼ¼ " + arg + " Ƶ����\n");
			}
		}
		return 1;
	}

	if( undefinedp(channels[verb]) && !mapp(channels) )
		return notify_fail("���κ�Ƶ�����ڡ�\n");
	if(!channels[verb])
 		return 0;

	if( userp(me) ) { //���ʹ��Ƶ��������
		exp=me->query("combat_exp");
      		clanrank = me->query("clan/rank");
      		myclass  = me->query("class");
      		myclan   = me->query("clan/name");
      		tuned_ch = me->query_temp("channels");
      		age      = me->query("age");

		if( arg == me->query_temp("last_channel_msg") )
		        return notify_fail("˵���벻Ҫ�ظ���ͬ��ѶϢ��\n");

   		me->set_temp("last_channel_msg", arg);

      		// ����ʦ���ܴ���ʦƵ��
 if( channels[verb]["arch_only"] && wiz_level(me) <= 3 )
			return notify_fail("������ʦר��Ƶ����\n");

if( channels[verb]["wiz_only"] && wiz_level(me) < 1 )
return notify_fail("������ʦר��Ƶ����\n");
      		// û��᲻���� ct By Swy
      		if( verb == "ct" && !myclan )
		        return notify_fail("����δ�����κΰ�ᡣ\n");

		// û������, �޷�ʹ�ð��ս��Ƶ�� by ACKY
		if( verb == "war" && !myclan )
        		return notify_fail("����δ�����κΰ�ᡣ\n");

		if( verb == "gt" && !myclass )
			return notify_fail("����δ�����κι��ᡣ\n");

		//���Э��
		if( verb == "cb" && clanrank>3 )
        		return notify_fail("ֻ��λ����[����]�����߲���ʹ�ô�Ƶ����\n");

		if( verb == "mt" && exp>=3000000 )
		        return notify_fail("ֻ����Ų���ʹ�ô�Ƶ����\n");

		if( verb == "ht" && (exp<3000000) )
     			return notify_fail("����ʵս����δ��������, ������Ӣ�ۡ�\n");

		if( verb == "ut" && (exp<10000000) )
     			return notify_fail("����ʵս����δ��һǧ��, �޷�ʹ�ô�Ƶ����\n");

		if( verb == "ot" && ( age < 100 ) )
			return notify_fail( "��δ��һ����, ���ż���ҹ�ܻᡣ\n" );

     		// ���δ��15�겻�ܿ�"es"Ƶ��
		if( verb == "es" && (int)me->query("age")<15 )
		        return notify_fail("Ҫ��15�����ʹ��esƵ����Ȩ����\n");

	        // shoutup ����ָ��
 		if( me->query("shutup") )
          		return notify_fail("���ѱ�ȡ��ʹ�ù���Ƶ����Ȩ���ˡ�\n");

		// exp��5000���²������κ�Ƶ��, ��ֹ����������!
		if( verb != "chat" &&(exp<5000) )
			return notify_fail("����ʵս����δ��5000, �޷�ʹ�����е�Ƶ����\n");

      		//�趨����
      		usr = filter_array(users(), "listen_me", this_object(), me, verb);
	}
	else {
	//mobʹ��Ƶ��,����������user
		if( me->query("master") )
			return 0;
		usr = users();
	}

//����change by bss,���Կ���һ��д��
/*
	// ʹ�ú��Զ��򿪸�Ƶ��
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

  	// ��ҿ��Դ� mud Ƶ������, ���ǲ���ʹ�� mud Ƶ��
  	if ( channels[verb]["mud_only"] && !wizardp(me) && userp(me) )
     		return 1;

  	//  ����who ����
  	if( channels[verb]["anonymous"] )
    		who = channels[verb]["anonymous"];
  	else
    		if( !(who = me->query_temp("channel_id") ) )
      			if( !(who = me->query("channel_id") ) )
        			who = me->query("name") + "(" + (me->query("id")) + ")";
	arg = ( stringp(arg) ) ? trans_color(arg) : "...";


	// ����ѶϢ
	if( verb == "ht*" || verb == "cb*" || verb == "wiz*" || verb == "ut*" || verb == "chat*" ||
	verb=="sex*"||verb == "ct*" || verb == "gt*" || verb == "war*" || verb == "mt*" || verb == "ot*" ) {
		if( !arg )
			return notify_fail("�÷�: <����> <����> \n");
		if( sscanf( arg, "%s %s", emote_verb, emote_arg ) != 2 )
			emote_verb = arg;
		return( EMOTE_D->do_emote(me,emote_verb,emote_arg,usr,channels[verb]["msg_speak"]) ) ? 1:0;
	}

	// ����Ƶ��
	if( verb == "gt" ) {
		cls = (me->query("gender") == "Ů��") ?
			to_chinese("f_"+myclass) : to_chinese(myclass);
		message( "class_channel",
			sprintf(HIG"%s"NOR"%s˵��: %s\n"NOR, cls, who, arg ),
			usr );
		return 1;
	}

	// ���Ƶ��
	if( verb == "ct" ) {
		message( "clan_channel",
			sprintf("��"HIC"%s"NOR"��"HIY"%s˵��: %s\n"NOR, myclan, who, arg ),
			usr );
		return 1;
	}

	// ���ս��Ƶ��
	if( verb == "war" ) {
		message( "clan_channel",
			sprintf("��"HIR"%s"NOR"��"HIR"%s�ȵ�: %s\n"NOR, myclan, who, arg ),
			usr );
		return 1;
	}

	// mud_only Ƶ��(mud_onlyƵ��û�г�˵����)
	if( channels[verb]["mud_only"] ) {
		message( "channel:" + verb,
			sprintf( channels[verb]["msg_speak"], arg ),
                	usr );
      		return 1;
	}

	// һ��Ƶ��
	message( "channel:" + verb,
		sprintf( channels[verb]["msg_speak"], who, arg ),
		usr );

	if( verb == record )
		write_file( "/log/RECORD/"+record,
			sprintf( channels[verb]["msg_speak"], who, arg ) );

	if( verb == "rumor" && wiz_level(me) <=1 ) {
		write( "�����㵽��ɢ��ҥ��, �о�ȫ��������������\n");
	        me->receive_damage("gin", 10);
        	me->receive_damage("kee", 10);
        	me->receive_damage("sen", 10);
		do_channel(this_object(), "sys",
        		me->name()+"("+me->query("id")+")"+ "ɢ��ҥ�Ե�: "+arg, 0);
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

// ��������Ƿ����ѶϢ
int listen_me( object who, object me, string verb )
{
	if( !environment(who) ) // �ֱ����������û
      		return 0;

	// �ֱ��Ƿ�tune on
	if( !who->query_temp("channels") || member_array(verb, who->query_temp("channels")) == -1)
		return 0;

	if( channels[verb]["wiz_only"] )
		return wizardp(who);

	// ����Ƶ�� guild talk
	if( verb == "gt" || verb == "gt*" )
		return( myclass == who->query("class") ) ? 1 : 0;

	// ���Ƶ�� clan talk
	if( verb == "ct" || verb == "ct*" )
		return( myclan == who->query("clan/name") ) ? 1 : 0;

	// ���ս��Ƶ�� war
	if( verb == "war" || verb == "war*" )
		return( myclan == who->query("clan/name") ) ? 1 : 0;

	// ���Э�� clan business
	if( verb == "cb" || verb == "cb*" )
		return( who->query("clan/rank")<4 && who->query("clan/rank")>0 ) ? 1 : 0;

	// ���� ultimate talk
	if( verb == "ut" || verb == "ut*" )
		return( who->query("combat_exp") >= 10000000 ) ? 1 : 0;

	// Ӣ����̸ hero talk
	if( verb == "ht" || verb == "ht*" )
		return( who->query("combat_exp") >= 3000000 ) ? 1 : 0;

	// ���� old men's talk
	if( verb == "ot" || verb == "ot*" )
		return( who->query("age") >= 100 ) ? 1 : 0;

	// ��ŶԻ� meat foot talk
	if( verb == "mt" || verb == "mt*" )
		return( who->query("combat_exp") < 3000000) ? 1 : 0;

	return 1;
}
