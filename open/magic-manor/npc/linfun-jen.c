#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("�跽��",({"linfun jen","linfun","jen"}));
        set("long",@LONG
����˽�֮һ���ɽ�����ʹ�����������£������ױȣ�������
�ɽ�һ�����书֮�ߣ������������޼������������
LONG);
	set("gender","����");
	set("class","swordsman");
	set("nickname",NOR"[18m��"NOR"��"NOR"[18m��"NOR"��"NOR);
	set("title",HIC"����˽�"NOR);
	set("family/family_name","�ɽ���");
	set("combat_exp",10000000);
	set("attitude","friendly");
	set("score",1000000);
	set("bellicosity",3000);
	set("age",40);

	set("str", 35);
	set("cor", 35);
	set("cps", 35);
	set("int", 35);
	set("spi", 35);
	set("per", 35);
	set("kar", 35);
	set("con", 35);

	set("force",20000);
	set("max_force",20000);
	set("mana",20000);
	set("max_mana",20000);
	set("atman",20000);
	set("max_atman",20000);
	set("force_factor", 15);

	set("s_kee",1000);
	set("max_s_kee",1000);
	set("sec_kee","god");

	set("max_kee",50000);
	set("max_gin",50000);
	set("max_sen",50000);

	set_skill("sword",120);
	set_skill("shasword",120);
	set_skill("sun_fire_sword",120);
	set_skill("sha-steps",120);
	set_skill("move",120);
	set_skill("dodge",120);
	set_skill("parry",120);
	set_skill("force",250);
	set_skill("fireforce",250);
	set_skill("array",100);
	set_skill("sha-array",100);
	map_skill("array","sha-array");
	map_skill("dodge","sha-steps");
	map_skill("move","sha-steps");
	map_skill("parry","shasword");
	map_skill("sword","sun_fire_sword");
	map_skill("force","fireforce");

	set("functions/sha_kee/level",100);
	set("functions/swordkee/level",100);
	set("functions/gold-fire/level",100);
	set("functions/sunswordkee/level",100);

	set("chat_chance_combat",50);
	set("chat_msg_combat", ({
	(: perform_action, "sword.sha_kee" :),
	}));

	set("quests/sunfire",1);
	set("quest/gold-fire",1);
	set("quest/new_gold_fire",1);
	set("quest/sun_fire_sword",1);
	set("bounds", 40000);
	set("get_sha_sp", 1);
	set("clan_kill",1);
	set("no_hole",1);
	set("no_plan_follow",1);
	set("no_mount",1);
	set_temp("armor_vs_force",300);
	set_temp("no_die_soon",1);
	set_temp("rob",1); 
	set_temp("no-plan",1);
	set_temp("mount",1);
	set_temp("follow",1);
	set_temp("speed",1);
	set_temp("empty",1);
	set_temp("false",1);
	set_temp("lock-link",1);

	set_temp("apply/armor",150);
	set_temp("apply/attack",50);
	set_temp("apply/damage",50);

	setup();

	add_money("cash",300);
	carry_object("/open/magic-manor/obj/fon-sky-sword");
}

int accept_kill(object ob)
{
	object me=this_object();

	kill_ob(ob);
	me->delete_temp("usesunsword");
	me->delete_temp("is_busy");
	command("wield all");
	command("cmd god_kee");
	command("perform sun_fire_sword.sunswordkee");
	return 1;

}

void greeting(object ob)
{
	ob=this_player();
	if( ob->query_skill("coldpoison",1) && !wizardp(ob) )
	{
	command("say ѧ����֮�ˣ����ֽ̼��аɣ���");
	kill_ob(ob);
	ob->start_busy(1);
	}
	set_heart_beat(1);
	return;
}

void heart_beat()
{
	object me=this_object();
//	int i=me->query_busy(),j=i-1;

	if( !me->query_temp("weapon") )
	{
	command("wield all");
	command("wear all");
	}

	if( !me->is_fighting() && !me->query_temp("gold-fire") )
	{
	command("perform force.gold-fire");
	}
/*
	if( me->is_fighting() && me->is_busy() )
	{
	  if( random(5) == random(5) )
	  {
	  message_vision(HIW"ֻ��$N��������һ����죬��Ȼ�⿪�����ϲ��ݱ����Ѩ����\n"NOR,me);
	  me->delete_busy();
	  me->start_busy(j);
	  }
	}
*/
	if( me->is_fighting() && !me->is_busy() )
	{
	  if( !me->query_temp("usesunsword") )
	  {
	  map_skill("sword", "sun_fire_sword");
	  command("perform sun_fire_sword.sunswordkee");
	  }else{
	  map_skill("sword", "shasword");
	  }
	}

	if( !is_fighting() ) 
	{
	  if( query("force") < 20000 )
	  command( "ex 300" );
	  if( query("eff_kee") < query("max_kee") )
	  { 
	  command( "10 exert heal" );
	  }
	  if( query("gin") < query("eff_gin") )
	  {
	  me->receive_curing("gin",150);
	  me->receive_heal("gin",150);
	  }
	  if( query("kee") < query("eff_kee") )
	  command( "5 exert recover" );
	  if( query("sen") < query("eff_sen") )
	  {
	  me->receive_curing("sen",150);
	  me->receive_heal("sen",150);
	  }
	}
	set_heart_beat(1);
	::heart_beat();
}

void die()
{
	object me,obj,winner;
	me=this_object();
	winner=query_temp("last_damage_from");

	if(!winner)
	{
	::die();
	return ;
	}
	if( random(9) == 5 )
	{
	obj=new("/open/magic-manor/obj/wood-ball");
	obj->move(environment(winner));
	message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	}else{
	  if( random(12) == 7 )
	  {
	  obj=new("/open/magic-manor/obj/water-ball");
	  obj->move(environment(winner));
	  message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	  }else{
	    if( random(15) == 9 )
	    {
	    obj=new("/open/magic-manor/obj/fire-ball");
	    obj->move(environment(winner));
	    message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	    }else{
	      if( random(18) == 11 )
	      {
	      obj=new("/open/magic-manor/obj/golden-ball");
	      obj->move(environment(winner));
	      message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	      }else{
	        if( random(21) == 13 )
	        {
	        obj=new("/open/magic-manor/obj/soil-ball");
	        message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	        obj->move(environment(winner));
			}
	      }
	    }
	  }
	}
	::die();
}