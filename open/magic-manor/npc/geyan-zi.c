#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("��Ԫ��",({"geyan zi","geyan","zi"}));
        set("long",@LONG
����˽�֮һ���ó�ʥ��̵Ĺ��򣬹������Ǳȵ���������
�ֺ������ߣ��쾪�ض�����ʽ�����õ�¬���࣬�����ܵ���
LONG);
	set("gender","����");
	set("class","prayer");
	set("nickname",HIB"��"HIC"��"HIB"��"HIC"��"NOR);
	set("title",HIC"����˽�"NOR);
	set("family/family_name","ʥ���");
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

	set("env/�쾪�ض�",5);
	set("env/superforce","green");
	set("env/����","YES");

	set("force",20000);
	set("max_force",20000);
	set("mana",20000);
	set("max_mana",20000);
	set("atman",20000);
	set("max_atman",20000);
	set("force_factor", 15);

	set("max_kee",50000);
	set("max_gin",50000);
	set("max_sen",50000);

	set_skill("superforce", 250);
	set_skill("dodge", 120);
	set_skill("force",250);
	set_skill("move", 120);
	set_skill("literate",120);
	set_skill("parry", 120);
	set_skill("array",130);
	set_skill("fire-array",130);
	set_skill("unarmed",120);
	set_skill("canon",150);
	set_skill("shift-steps",150);
	set_skill("universe",150);
	map_skill("force","superforce");
	map_skill("dodge","shift-steps");
	map_skill("move","shift-steps");
	map_skill("parry","universe");
	map_skill("array","fire-array");
	map_skill("unarmed","universe");

	set("functions/blood/level",150);
	set("functions/tengin/level",100);
	set("functions/bluesea/level",150);
	set("functions/nine/level",150);
	set("functions/gen/level",150);
	set("functions/black/level",150);
	set("functions/goldsun/level",150);
	set("functions/ice/level",150);
	set("functions/white/level",150);
	set("functions/hwa_je/level",150);
	set("functions/purple/level",150);
	set("functions/gwe_jen/level",150);
	set("functions/green/level",150);

	set("chat_chance_combat",50);
	set("chat_msg_combat", ({
	(: perform_action, "unarmed.tengin" :),
	(: perform_action, "force.gwe_jen" :),
	(: perform_action, "force.blood3" :),
	}));

	set("marks/tengin",1);
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
	carry_object("/open/magic-manor/obj/hwa-je-icer");

}

int accept_kill(object ob)
{
	object me=this_object();
	kill_ob(ob);
	me->delete_temp("is_busy");
	command("wield all");
	command("perform force.bluesea3");
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
	object who=this_player(),me=this_object();

	if( !me->query_temp("weapon") )
	{
	command("wield all");
	command("wear all");
	}

	if( me->is_fighting() && !me->is_busy() && !who->is_busy() )
	{
	command("perform force.bluesea3");
	}

	if( !me->is_fighting() && !me->query_temp("hwa_je") )
	{
	command("exert hwa_je");
	}
	if( me->is_fighting() && !me->query_temp("hwa_je") )
	{
	me->delete_busy();
	command("exert hwa_je");
	}
	if( !is_fighting() ) 
	{
	  if( query("force") < 20000 )
	  command( "ex 270" );
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
	if( random(6) == 3 )
	{
	obj=new("/open/magic-manor/obj/wood-ball");
	obj->move(environment(winner));
	message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	}else{
	  if( random(9) == 5 )
	  {
	  obj=new("/open/magic-manor/obj/water-ball");
	  obj->move(environment(winner));
	  message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	  }else{
	    if( random(12) == 7 )
	    {
	    obj=new("/open/magic-manor/obj/fire-ball");
	    obj->move(environment(winner));
	    message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	    }else{
	      if( random(15) == 9 )
	      {
	      obj=new("/open/magic-manor/obj/soil-ball");
	      obj->move(environment(winner));
	      message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	      }else{
	        if( random(18) == 11 )
	        {
	        obj=new("/open/magic-manor/obj/golden-ball");
	        message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	        obj->move(environment(winner));
			}
	      }
	    }
	  }
	}
	::die();
}