#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("������",({"shion yin","shion","yin"}));
        set("long",@LONG
����˽�֮һ�����Խ�Ϊ������۹���ȴ�ǲ���һ�����ԣ�
������ȴ�ǲ�����������ü��ɱ�������޵��֣�ȴֻ������
�ѹ�������һ�ء�
LONG);
	set("gender","Ů��");
	set("class","blademan");
	set("nickname",NOR+GRN"��"HIG"��"NOR+GRN"��"HIG"��"NOR);
	set("title",HIC"����˽�"NOR);
	set("family/family_name","����");
	set("combat_exp",10000000);
	set("attitude","friendly");
	set("score",1000000);
	set("bellicosity",10000);
	set("potential",50000);
	set("age",40);

	set("str", 35);
	set("cor", 35);
	set("cps", 35);
	set("int", 35);
	set("spi", 35);
	set("per", 35);
	set("kar", 35);
	set("con", 35);

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

	set_skill("blade",150);
	set_skill("fast-blade",150);
	set_skill("gold-blade",150);
	set_skill("move",150);
	set_skill("dodge",150);
	set_skill("parry",150);
	set_skill("force",250);
	set_skill("fireforce",250);
	map_skill("parry","gold-blade");
	map_skill("blade","fast-blade");
	map_skill("force","fireforce");

	set("functions/gold-dest/level",100);
	set("functions/fast-dest/level",100);
	set("functions/mk-blade/level",100);
	set("functions/busy/level",100);
	set("functions/powerup/level",100);
	set("functions/enforceup/level",100);
	set("functions/addbasic/level",100);
	set("functions/addblade/level",100);
	set("functions/badup/level",50);
	set("functions/hurtkee/level",100);
	set("functions/losehurt/level",100);
	set("functions/healup/level",100);
	set("functions/gold-fire/level",90);

	set("chat_chance_combat",50);
	set("chat_msg_combat", ({
	}));

	set("quest/gold-fire",1);
	set("quest/new_gold_fire",1);
	set("mk-blade",1);
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
	carry_object("/open/magic-manor/obj/maun-shadow-blade")->wield();

}

int accept_kill(object ob)
{
	object me=this_object();
	kill_ob(ob);
	me->delete_temp("is_busy");
	command("wield all");
	command("perform blade.fast-dest");
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

	if( !me->query_temp("weapon") )
	{
	command("wield all");
	command("wear all");
	}

/*
	if( me->is_fighting() )
	{
	int i=me->query_busy();
	message_vision(HIC"$NĿǰbusyָ����"HIM+i+HIC"��\n"NOR,me);
	}
*/
	if( !me->is_fighting() && !me->query_temp("del") )
	{
	command("perform blade.mk-blade");
	  if( me->query("bellicosity") < 5000 )
	  {
	  me->add("bellicosity",5000);
	  }
	}

	if( !me->query_temp("secondary_weapon") )
	{
	command("wield all");
	}

	if( !me->is_fighting() && !me->query_temp("addblade") )
	{
	command("addblade");
	}

	if( !me->is_fighting() && !me->query_temp("powerup") )
	{
	command("powerup");
	}

	if( !me->is_fighting() && !me->query_temp("addbasic") )
	{
	command("addbasic");
	}

	if( !me->is_fighting() && !me->query_temp("losehurt") )
	{
	command("losehurt");
	}

	if( !me->is_fighting() && !me->query_temp("addenforce") )
	{
	command("enfup");
	}

	if( !me->is_fighting() && !me->query_temp("focuskee") )
	{
	command("exert focuskee");
	}

	if( me->is_fighting() && !me->query_temp("badup") && !me->is_busy() )
	{
	command("badup");
	}

	if( me->is_fighting() && !me->query_temp("hurtkee") && !me->is_busy() )
	{
	command("hurtkee");
	}

	if( me->is_fighting() && !me->query_temp("addbusy") && !me->is_busy() )
	{
	command("busy");
	}


	if( me->is_fighting() && !me->is_busy() )
	{
	if( !me->query_temp("fast-dest") )
	  {
	  map_skill("blade", "fast-blade");
	  command("perform blade.fast-dest");
	  }else{
	  map_skill("blade", "gold-blade");
	  command("perform blade.gold-dest");
	  }
	}

	if( me->query("title") != "����˽�" )
	{
	me->set("title",HIC"����˽�"NOR);
	}

	if( !is_fighting() ) 
	{
	  if( query("force") < 20000 )
	  command( "ex 300" );
	  if( query("eff_kee") < query("max_kee") )
	  { 
	  command( "10 exert heal" );
	    if( !me->query_temp("heal") )
	    {
	    command("healup");
	    }
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
	obj=new("/open/magic-manor/obj/golden-ball");
	obj->move(environment(winner));
	message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	}else{
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