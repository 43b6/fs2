//edit by neverend   2000/11/09
#include <ansi.h>
inherit NPC;
void do_special();

void create()
{
        seteuid(getuid());
        set("long","
舞风扬，躲在这盘天巨木中修练，历经千年的修行，已然化身成人形，发丝随风
飘逸，虽然历经千年却也藏不住他娇柔百媚的身段，平常不轻易离开巨木，所以
也鲜少与凡人接触，一个人独自在这洞中过着她单调而无聊的修行。
");
        set("gender","女性");
        set("class","fighter");
        set("nickname",HIC"千风起舞"HIW"－"HIG"万风云扬"NOR);
        set("title","千年树妖");
        set_name("舞风扬",({"dance wind","wind"}));
        set("combat_exp",16500000);
        set("attitude","aggressive");
        set("score",1000000);
        set("bellicosity",10000);
        set("age",1000);
        set("max_force",15000);
        set("force",15000);
        set("max_kee",100000);
        set("kee",100000);
        set("max_mana",15000);
        set("mana",15000);
        set("max_atman",15000);
        set("atman",15000);
        set("max_gin",100000);
	set("gin",100000);
        set("max_sen",100000);
	set("sen",100000);
        set("str", 35);
        set("cor", 35);
        set("cps", 30);
        set("per", 99);
        set("int", 35);
        set("force_factor",15);
        set_skill("dodge",200);
        set_skill("force",250);
        set("clan_kill",1);
        set("no_mount",1);
        set("no_plan_follow",1);
        set_skill("move",100);
        set_skill("parry",100);
        set_skill("mogi-steps",100);
        set_skill("unarmed",100);
        set_skill("literate",100);
        set_skill("fiendforce",150);
	set_skill("dance-wind",100);
        set_temp("armor_vs_force",1000);
        map_skill("force","fiendforce");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("parry","dance-wind");
        map_skill("unarmed","dance-wind");
        set("functions/fight/level",100);
        set("quest/gold-fire",1);
        set("quest/new_gold_fire",1);
        set_temp("mount",1);
        set_temp("follow",1);
        set_temp("speed",1);
        set_temp("empty",1);
        set_temp("false",1);
        set_temp("lock-link",1);
        set_temp("ghost",1);
        set_temp("rob",1);  
        set_temp("no-plan",1);
        set_temp("no_die_soon",1);
        set_temp("apply/armor",120);
        set_temp("apply/attack",50);
        set_temp("apply/damage",50);
        set_temp("apply/defense", 200);
        set("chat_chance_combat",35);
        set("chat_msg_combat",({
        (: do_special :)
        }));

        setup();
        carry_object("/open/mon/obj/ghost-helmet")->wear();
        carry_object("/open/mon/obj/ghost-cloak")->wear();
        carry_object("/open/mon/obj/ghost-legging")->wear();
        carry_object("/open/mon/obj/ghost-claw");
        carry_object("/data/autoload/open-area/ghost-heart")->wear();
        add_money("cash",500);
}

void init()
{
	::init();
	this_object()->set_temp("ok_wield",1);
	add_action( "block_cmd", "" );
	add_action( "do_cmd","cmd" );
}

//修正来自Acky的fire king挡do的功能

int block_cmd( string arg )
{
 if( (string)query_verb() == "do" ) {
 write( HIY"舞风扬轻笑说：「想要投机吗？我最恨投机的人了，纳命来吧!!”\n"NOR );
   if( is_fighting() )
   this_player()->start_busy(1);
 return 1;
        }
}

int do_cmd(string str)
{
 object who=this_player();
 object ob,wind;
 ob=this_object();
 wind=present( "wind",environment(ob) );

 if(str=="throw wind" || str=="throw dance wind"){
 write(HIY"舞风扬轻笑说：「用这种下三烂的方法就想杀我!去死吧!!”\n"NOR);
 command("perform fireforce.gold-fire");
 wind->kill_ob(who);
 who->start_busy(1);
 return 1;                                                 
                  }
 if(str=="askgod wind" || str=="askgod dance wind"){
 write(HIY"舞风扬轻笑说：「等你的道行比我高时再来替我算命吧。”呵呵呵!!\n"NOR);
 command("perform fireforce.gold-fire");
 wind->kill_ob(who);
 who->start_busy(1);
 return 1;                                                 
                  }
 if(str=="bak wind" || str=="bak dance wind"){
 write(HIY"舞风扬轻笑说：「你们这些凡人，想暗杀我，实在是太可笑了!!\n"NOR);
 command("perform fireforce.gold-fire");
 wind->kill_ob(who);
 who->start_busy(1);
 return 1;
                  }
}

void greeting(object me)
{
 write(HIC"
舞风扬说：「是谁这么大胆，竟然闯入我了练功
修行的地方，扰我修行的人真是太可恶了！！”
"NOR); 
// call_out("do_special",3);
}

int accept_fight(object who)
{
 write(HIY"舞风扬冷冷的说：「先打量你是否能活着离开吧！哼哼！！”\n"NOR);
 return 0;
}

int accept_kill(object who)
{
 who = this_player();
 write(HIY"舞风扬腾空跃起，身形悬浮在平空中。\n"NOR);
 command("say 无知的平凡人类呀！休怪我了，纳命来吧！");
 command("wield all");
 command("perform force.fight");
 kill_ob(who);
 return 1;
}

void heart_beat()
{
	object me,*enemy;
	int i,j,count;

	count = random(20);
	me = this_object();
	enemy = me->query_enemy();
	i = sizeof(enemy);

 if( !me->query_temp("weapon") && me->query_temp("ok_wield") )
 {
 command( "wield all" );
 command( "wear all" );
 }

 if(count == 17 && me->is_fighting())
 {
  message_vision(HIW"
    舞风扬轻手一扬，"HIM"‘"HIB"电光游走－雷电奔腾"HIM"’"HIW"只见无数道闪电由天
    而降，刹时间天色大变，触及闪电者非死即伤！！\n"NOR,me);
  for( j=0 ; j < i ; j++ )
   {
   if( !enemy[j] ) continue;
    if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j]) && enemy[j] != me && !wizardp(enemy[j]) )
     {
      message_vision(HIR"$N被这威力无比的狂雷所电伤，几乎快撑不住而晕眩！！\n"NOR,enemy[j]);
      enemy[j]->add("kee",-300);
      enemy[j]->apply_condition("burn",enemy[j]->query_condition("burn")+5);
      COMBAT_D->report_status(enemy[j]);
     }
   }
 }

 if(count == 5 && me->is_fighting())
 {
  message_vision(HIW"
    上空突然飘下阵阵落叶，无数的落叶化为片片杀人的"HIM"「"HIG"叶"HIM"”"HIW"若有
    似无，隐隐若现，眨眼之间，无数的落叶急速聚集，瞬间转化为
    一式"HIM"‘"HIG"叶落秋舞－叶杀片片"HIM"’"HIW"，急速的飞奔狂杀！！\n"NOR,me);
  for( j=0 ; j < i ; j++ )
   {
   if( !enemy[j] ) continue;
    if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j]) && enemy[j] != me && !wizardp(enemy[j]) )
     {
      message_vision(HIR"为了躲避漫天的叶杀，耗损了$N不少的内力！！\n"NOR,enemy[j]);
      enemy[j]->add("force",-((enemy[j]->query("force")/150))*8);
      enemy[j]->apply_condition("star-stial",enemy[j]->query_condition("star-stial")+5);
      COMBAT_D->report_status(enemy[j]);
     }
   }
 }

 if(count == 7 && me->is_fighting())
  {
  message_vision(HIW"
    舞风扬一阵怒意横生，将其化为一式"HIM"‘"HIR"怒意横生－烈火无限"HIM"’"HIW"，
    无限的烈火恣意横生，誓将一切烧尽的烈火讯速的蔓沿着！！\n"NOR,me);
  for( j=0 ; j < i ; j++)
   {
   if( !enemy[j] ) continue;
    if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j]) && enemy[j] != me && !wizardp(enemy[j]) )
     {
      message_vision(HIR"$N被无情的烈火浑身沿烧着，正痛苦的嘶吼着！！\n"NOR,enemy[j]);
      enemy[j]->receive_wound("kee",300);
      enemy[j]->apply_condition("hellfire",enemy[j]->query_condition("hellfire")+5);
      COMBAT_D->report_status(enemy[j]);
     }
   }
  }


 if(count == 10 && me->is_fighting())
  {
  message_vision(HIW"
    舞风扬轻柔百转的身形，游走于你身旁寻找最佳的攻击时机，就
    在你分神的那一瞬间，使出"HIM"‘"HIY"分身百转－劲随身吐"HIM"’"HIW"，无数道猛
    烈的气劲任意的飞奔游窜！！\n"NOR,me);
  for( j=0 ; j < i ; j++)
   {
   if( !enemy[j] ) continue;
    if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j]) && enemy[j] != me && !wizardp(enemy[j]) )
     {
      message_vision(HIR"$N被猛烈的气劲所伤，痛苦的不能自己而跪地呻吟！！\n"NOR,enemy[j]);
      enemy[j]->receive_wound("kee",300);
      enemy[j]->apply_condition("hart",enemy[j]->query_condition("hart")+2);
      COMBAT_D->report_status(enemy[j]);
     }
   }
  }

 if(count == 15 && me->is_fighting())
  {
  message_vision(HIW"
    舞风扬一个妖身幻化，转化成绝世惊艳的美女子，集娇柔妩媚于
    一身，并藉由灵力散发"HIM"‘"NOR+MAG"媚艳四射－无限迷惑"HIM"’"HIW"，有如炫目的剑
    光让人无法逼视！！\n"NOR,me);
  for( j=0 ; j < i ; j++)
   {
   if( !enemy[j] ) continue;
    if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j]) && enemy[j] != me && !wizardp(enemy[j]) )
     {
      message_vision(HIR"$N与舞风扬四目交接之下，显得春心荡漾全无反击能力！！\n"NOR,enemy[j]);
      enemy[j]->receive_wound("kee",300);
      enemy[j]->apply_condition("no_power",enemy[j]->query_condition("no_power")+2);
      COMBAT_D->report_status(enemy[j]);
     }
   }
  }

 if(count == 3 && me->is_fighting())
  {
  message_vision(HIW"
    舞风扬身形幻化，无数分身回荡在四周，急速回旋的气流在四周
    激荡不已，产生的无比气流令人无法呼吸，而瞬时间随着一声轻
    喝"HIM"‘"HIC"千风起舞－万风云扬"HIM"’"HIW"，刀风化冷气疯狂的侵袭着一切！！\n"NOR,me);
  for( j=0 ; j < i ; j++)
   {
   if( !enemy[j] ) continue;
    if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j]) && enemy[j] != me && !wizardp(enemy[j]) )
     {
      message_vision(HIR"$N被片片的刀风所刮伤，哀嚎惨叫不已！！\n"NOR,enemy[j]);
      enemy[j]->receive_wound("kee",300);
      enemy[j]->apply_condition("cold",enemy[j]->query_condition("cold")+5);
      COMBAT_D->report_status(enemy[j]);
     }
   }
  }

 if( random(10) == 5 )
 {
  if( is_fighting() )
  {

   if( query("kee") < query("eff_kee") )
    message_vision(HIW"\n舞风扬的身上旋绕着"HIR"‘"HIM"七"HIY"色"HIC"光"HIG"茫"HIB"’"HIW"，光茫过后，舞风扬精神为之振奋！\n"NOR,me);
    me->delete_busy();
    me->clear_condition();
    command("perform force.fight");
  }
 }

 if( !is_fighting() ) 
 {
    if( query("force") < 15000 ) 
    command( "ex 270" );
    if( query("eff_kee") < query("max_kee") )
    {
    command( "10 exert heal" );
    }
    if( query("gin") < query("eff_gin") )
    command( "exert regenerate" );
    if( query("kee") < query("eff_kee") ) 
    command( "5 exert recover" );
    if( query("sen") < query("eff_gin") ) 
    command( "exert refresh" );
 }
	 if( !is_fighting() && !me->query_temp("fight") && me->query_temp("ok_wield") )
	 {
	 command( "perform force.fight" );
	 }
  set_heart_beat(1);
  ::heart_beat();
}

void do_special()
{
 object me,*enemy;
 int kee,i,j;

 me = this_object();
 enemy = me->query_enemy();
 i = sizeof(enemy);

 if(me->is_fighting())
 {
  message_vision(HIY"
    舞风扬一声轻喝，一个金黄色光球将舞风扬紧紧的包围，金黄色
    光球慢慢的向外扩大，一瞬间，黄金光球散发出一阵耀眼光茫，
    同一时间，舞风扬发出他最强的一招绝学"HBRED"‘金˙光˙万˙丈’"NOR+HIY"！\n"NOR,me);
  for( j=0 ; j < i ; j++)
   {
   if( !enemy[j] ) continue;
    if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j]) && enemy[j] != me && !wizardp(enemy[j]) )
     {
      message_vision(HIR"黄金光球暴发无限威力，$N被震飞老远，内息翻滚不定！！\n"NOR,enemy[j]);
      enemy[j]->receive_wound("kee",200);
      enemy[j]->apply_condition("power-down",enemy[j]->query_condition("power-down")+5);
        if(enemy[j]->query("class")=="fighter")
	{
        enemy[j]->set_temp("power-down",20);
	}else{
	enemy[j]->set_temp("power-down",10);
	}
      enemy[j]->start_busy(1);
      COMBAT_D->report_status(enemy[j]);
     }
   }
 }
}

void die()
{

	int i,j;
	object *enemy;
  
	object winner = query_temp("last_damage_from");
	string class1 = winner->query("family/family_name");
	string name = winner->query("name");

	log_file("kill_dance", sprintf("%s(%s) 打死舞风扬 on %s\n"
	,name,winner->query("id"), ctime(time()) ));
	enemy = query_enemy();
	i=sizeof(enemy);

	if( class1 == 0 ) class1="无门无派";

        tell_object(users(),HIY"
舞风扬轻声叹道：

"HIM"‘"HIC" 世 间 繁 华 ～ 如 梦 似 幻

     爱 恨 情 仇 ～ 烟 消 云 散

       回 首 陌 路 ～ 凌 乱 不 堪

         遥 望 青 峰 ～ 红 尘 纠 缠"HIM"’"HIY"


没想到我千年的道行竟然毁在"+HIC+class1+HIY"的"+HIC+name+HIY"手上！！

天意啊！！      可叹啊！！

        算了吧！！      罢了吧！！\n"NOR);

	if( !present( "ghost heart", winner ) ) 
	{
	  if ( random(9) == 7 ) 
	  {
	    if( winner->query_temp("quests/magic-manor-02") == 4 )
	    {
	    new("/open/magic-manor/obj/leaf")->move(winner);
	    tell_room(environment(),sprintf(HIY"\n一片叶子慢慢飘落，慢慢的落在%s的手上。\n"NOR,winner->name()));
	    winner->set_temp("quests/kill-dance",1);
	    log_file("open-area/get_heart", sprintf("%s(%s) 得到妖幻之心于 %s\n",name,winner->query("id"), ctime(time()) ));
	    new("/data/autoload/open-area/ghost-heart")->move(winner);
	    tell_room(environment(),sprintf(HIY"\n舞风扬临死前发出阵阵的强光，光茫过后，妖幻之心飞向%s便深深的印络在心中。\n"NOR,winner->name()));
	    }else{
	    log_file("open-area/get_heart", sprintf("%s(%s) 得到妖幻之心于 %s\n",name,winner->query("id"), ctime(time()) ));
	    new("/data/autoload/open-area/ghost-heart")->move(winner);
	    tell_room(environment(),sprintf(HIY"\n舞风扬临死前发出阵阵的强光，光茫过后，妖幻之心飞向%s便深深的印络在心中。\n"NOR,winner->name()));
	    }
	  }else{
	    if( winner->query_temp("quests/magic-manor-02") == 4 )
	    {
	    new("/open/magic-manor/obj/leaf")->move(winner);
	    tell_room(environment(),sprintf(HIY"\n一片叶子慢慢飘落，慢慢的落在%s的手上。\n"NOR,winner->name()));
	    winner->set_temp("quests/kill-dance",1);
	    destruct( present("ghost heart",this_object()) );
	    tell_room(environment(),sprintf(HIY"\n舞风扬因为承受过多的重击，身上的妖幻之心被击的粉碎了。\n"NOR));
	    }else{
	    destruct( present("ghost heart",this_object()) );
	    tell_room(environment(),sprintf(HIY"\n舞风扬因为承受过多的重击，身上的妖幻之心被击的粉碎了。\n"NOR));
	    }
	  }
	}else{
	  if( winner->query_temp("quests/magic-manor-02") == 4 )
	  {
	  new("/open/magic-manor/obj/leaf")->move(winner);
	  tell_room(environment(),sprintf(HIY"\n一片叶子慢慢飘落，慢慢的落在%s的手上。\n"NOR,winner->name()));
	  winner->set_temp("quests/kill-dance",1);
	  destruct( present("ghost heart",this_object()) );
	  tell_object(winner,HIY"\n妖幻之心再度印入心中，一股力量激发了你的最大经验和潜能!!\n"NOR);
	  winner->add("combat_exp",1000);
	  winner->add("potential",200);
	  }else{
	  destruct( present("ghost heart",this_object()) );
	  tell_object(winner,HIY"\n妖幻之心再度印入心中，一股力量激发了你的最大经验和潜能!!\n"NOR);
	  winner->add("combat_exp",1000);
	  winner->add("potential",200);
	  }
	}

        if( winner->query("clan/id") )
        CLAN_D->add_clanset( winner->query("clan/id"), "develop" , 20 );

	:: die();
}                    
