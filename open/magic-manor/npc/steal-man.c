#include <ansi.h>
#include <npc.h>
#include <combat.h>
#include "/open/open.h"

int do_steal();

inherit SSERVER;
inherit NPC;

void create()
{
        set_name("���ط���", ({ "mystery thief" ,"mystery" ,"thief" }));
        set("long","͵��һ����������͵��͵�޲��ɡ������ĳ���������ֿտ���\n"
	+"Ҳ�����𽭺��ľ�ѧ��\n");
	set("title",HIY"������͵"NOR);
	set("nickname",HIC"͵�޲���"NOR);
	set("family/family_name","���˹�");
	set("gender", "����");
	set("class", "bandit");
	set("combat_exp",3000000);
	set("bellicosity",3000);
	set("str", 35);
	set("cor", 35);
	set("int", 35);
	set("spi", 35);
	set("cps", 35);
	set("con", 35);
	set("per", 35);
	set("kar", 35);
	set("max_gin", 25000);
	set("max_kee", 25000);
	set("max_sen", 25000);
	set("gin", 25000);
	set("kee", 25000);
	set("sen", 25000);
	set("max_force",5000);
	set("force",5000);
	set("force_factor", 10);

	set_skill("change",100);
	set_skill("dodge",100);
	set_skill("sword",100);
	set_skill("ghost-steps",100);
	set_skill("force", 100);
	set_skill("badforce",100);
	set_skill("move", 100);
	set_skill("parry",100);
	set_skill("unarmed",100);
	set_skill("badstrike",100);

	map_skill("unarmed", "badstrike");
	map_skill("parry", "badstrike");
	map_skill("force", "badforce");
	map_skill("dodge", "ghost-steps");
	map_skill("move", "ghost-steps");

	set("no_clean_up",1);
	set("quests/badroar",1);
	set("marks/kar",1);
	set("no_return_home",1);
	set("functions/evil-blade/level",100);
	set("functions/badroar/level",90);
	set("random_move",500);

	set_temp("apply/armor", 150);
	set_temp("apply/defense", 150);
	set_temp("apply/damage", 80);
	set_temp("apply/attack", 80);
	set_temp("go","�ɿ����");
	set_temp("no-plan",1);
	set_temp("no_die_soon",1);
	set_temp("roared",1);


	set("chat_chance_combat", 45);
	set("chat_msg_combat", ({
	(: perform_action, "unarmed.evil-blade" :),
	(: perform_action, "unarmed.badroar" :),
	}) );

	set("chat_chance", 150);
	set("chat_msg",({
	(: random_move :),
	}));
        
	setup();
	carry_object(BAD_OBJ"evil_claw.c")->wield();
	carry_object("/open/magic-manor/obj/mystery-steal")->wear();

}
void init()
{
	object who,me;
        who=this_player();
	me=this_object();
	if( interactive(who) )
	{
	do_steal();
	}
	set_heart_beat(1);
}

void greeting(object who)
{
	if( !who || environment(who) != environment() ) return ;

	if( interactive(who) )
	{
	do_steal();
	}

}

int do_steal()
{
        object me,who,*ob;
	int i,j,k,exp;
	i = random(100);
        who = this_player();
        me = this_object();
	ob = all_inventory(who);
	exp=who->query("combat_exp");

	if( !sizeof(ob) ) return 1;
	if( exp < 1000000 ) return 1;

	switch(i)
	{
	case 0..1:
	for( k=0;k<=10;k++ )
	{
	j=random(sizeof(ob));
	  if( !ob[j]->query_autoload() && !ob[j]->query("no_give") && !ob[j]->query("no_steal") && ob[j]->query("id") != "diamond" )
	  {
	  command("steal "+ob[j]->query("id")+" from "+who->query("id"));
	  }
	}
	break;

	case 2..95:
	j=random(sizeof(ob));
	if( !ob[j]->query_autoload() && !ob[j]->query("no_give") && !ob[j]->query("no_steal") && ob[j]->query("id") != "diamond" )
        command("steal "+ob[j]->query("id")+" from "+who->query("id"));
	break;

	case 96:
        command("steal coin from "+who->query("id"));
	break;

	case 97:
        command("steal silver from "+who->query("id"));
	break;

	case 98:
        command("steal gold from "+who->query("id"));
	break;

	case 99:
        command("steal cash from "+who->query("id"));
	break;

	}
}

int accept_fight(object obj,object mob)
{
	obj = this_player();
	mob = this_object();
	command("say ���ҾͲ������������!!");
	message_vision(HIC"$N���Լ���ݵĶ�������$n����ʮ�����ɢ��$nֻ��ȫ������������\n"NOR,mob,obj);
        if(obj->query("class")=="fighter")
	{
        obj->set_temp("power-down",30);
	obj->apply_condition("power-down",obj->query_condition("power-down")+12);
	}else{
	obj->set_temp("power-down",18);
	obj->apply_condition("power-down",obj->query_condition("power-down")+6);
	}
	fight_ob(obj);
	command("perform unarmed.evil-blade "+obj->query("id"));
	return 1;
}

int accept_kill(object obj,object mob)
{
	obj = this_player();
	mob = this_object();
	command("say ��ô��������");
	message_vision(HIC"$N�Լ���ݵĶ�������$n����ʮ�����ɢ��$nֻ��ȫ������������\n"NOR,mob,obj);
        if(obj->query("class")=="fighter")
	{
        obj->set_temp("power-down",25);
	obj->apply_condition("power-down",25);
	}else{
	obj->set_temp("power-down",18);
	obj->apply_condition("power-down",18);
	}
	kill_ob(obj);
	command("perform unarmed.badroar "+obj->query("id"));
	return 1;
}

void heart_beat()
{
	object env,mob,*enemy;
	int i,hurt,j;
	mapping exit;
	string *exit_name;

	mob = this_object();
	env = environment(mob);

//	if( mob->query("kee") < 0 )
//	{
//	mob->die();
//	}

	if( mob->is_fighting() )
	{
        enemy=mob->query_enemy();
	j=random(sizeof(enemy));
	if( !enemy ) return ;
	  if( random(100) > 50 )
	  {
	    if( env == environment(enemy[j]) )
	    {
	      if( enemy[j]->query_temp("fdragon") )
	      {
	      message_vision(HIR"ֻ����֮���Ļ���֮����������$N���˿ڵĻظ�!!\n"NOR,mob);
	      mob->receive_curing("kee",3000);
	      mob->receive_heal("kee",3000);
	      mob->receive_curing("sen",3000);
	      mob->receive_heal("sen",3000);
	      mob->receive_curing("gin",3000);
	      mob->receive_heal("gin",3000);
	      }
	    }
	  }

	  if( random(100) < 50 && random(10) < 5 && random(3) == 1 )
	  {
	    switch(random(100))
	    {
	    case 0..5:
	    if( env == environment(enemy[j]) )
	    {
	    hurt=enemy[j]->query("max_kee") * 0.3;
	    message_vision(HIW"\n$Nʩչ���ž���"HIC"�����ֿտ�ȭ����ʽ��"HIW"��ֻ��$n���㲻����������Ҫ��!!\n"NOR,mob,enemy[j]);
	    enemy[j]->receive_wound("kee",hurt);
	    COMBAT_D->report_status(enemy[j],0);
	    }
	    break;

	    case 6..15:
	    if( env == environment(enemy[j]) )
	    {
	    hurt=enemy[j]->query("max_kee") * 0.2;
	    message_vision(HIW"\n$Nʩչ���ž��С����ֿտ�ȭ����ʽ����ֻ��$n���㲻����������Ҫ��!!\n"NOR,mob,enemy[j]);
	    enemy[j]->receive_damage("kee",hurt);
	    COMBAT_D->report_status(enemy[j],0);
	    }
	    break;

	    case 16..35:
	    if( env == environment(enemy[j]) )
	    {
	    hurt=enemy[j]->query("max_kee") * 0.15;
	    message_vision(HIW"\n$Nʩչ���ž��С����ֿտ�ȭ�ڶ�ʽ����ֻ��$n���㲻����������Ҫ��!!\n"NOR,mob,enemy[j]);
	    enemy[j]->receive_wound("kee",hurt);
	    COMBAT_D->report_status(enemy[j],0);
	    }
	    break;

	    case 36..95:
	    if( env == environment(enemy[j]) )
	    {
	    hurt=enemy[j]->query("max_kee") * 0.1;
	    message_vision(HIW"\n$Nʩչ���ž��С����ֿտ�ȭ��һʽ����ֻ��$n���㲻����������Ҫ��!!\n"NOR,mob,enemy[j]);
	    enemy[j]->receive_damage("kee",hurt);
	    COMBAT_D->report_status(enemy[j],0);
	    }
	    break;

	    case 96..100:
	    {
	    message_vision(HIY"$N���Ŷ��ž�ѧ���������������з�Ѩ��\n"NOR,mob,enemy[j]);
	    mob->delete_busy();
	    mob->clear_condition();
	    }
	    break;
	    }
	  }
	  if( mob->query("kee") < mob->query("max_kee")*0.35 )
	  {
	    if( random(100) < 50 && random(10) < 5 && random(3) == 1 )
	    {
	    tell_room(environment(), HIM+name()+HIM"�ӻ����ͳ�һ��ҩ��������һ�̡�"NOR"\n");
	    mob->receive_curing("kee",1000);
	    mob->receive_heal("kee",1000);
	    mob->receive_curing("sen",1000);
	    mob->receive_heal("sen",1000);
	    mob->receive_curing("gin",1000);
	    mob->receive_heal("gin",1000);
	    }
	  }

	  if( mob->query("kee") < mob->query("max_kee")*0.5 )
	  {
	    if( random(100) < 30 && random(10) < 3 && random(3) == 1 )
	    {
	      if( !env->query("exits") )
	      {
	      }else{
	      mob->delete_busy();
	      exit = env->query("exits");
	      exit_name = keys(exit);
	      i = random(sizeof(exit_name));
	      command("say ������ɽ�ڣ�����û���ա�    ���");
	      command(exit_name[i]);
//	      i = random(sizeof(exit_name));
//	      command(exit_name[i]);
	      }
	    }
	  }
	}

	if( !is_fighting() ) 
	{
	  if( query("force") < 5000 )
	  command( "ex 270" );
	  if( query("eff_kee") < query("max_kee") )
	  { 
	  command("10 exert heal");
	  }
	  if( query("gin") < query("eff_gin") )
	  {
	  mob->receive_curing("gin",150);
	  mob->receive_heal("gin",150);
	  }
	  if( query("kee") < query("eff_kee") )
	  command( "5 exert recover" );
	  if( query("sen") < query("eff_sen") )
	  {
	  mob->receive_curing("sen",150);
	  mob->receive_heal("sen",150);
	  }
	}

	set_heart_beat(1);
	::heart_beat();

}

void die()
{
	object me,obj;
	me = query_temp("last_damage_from");

	if( present("mystery steal",this_object()) )
	destruct( present("mystery steal",this_object()) );

	if(me->query_temp("quests/magic-manor-01") == 2)
	{
	message_vision(YEL"$N����֮�ʣ�������һ��������$n����һ������Ҫ�����Ǵ��\n"NOR,this_object(),me);
	obj=new("/open/magic-manor/obj/enn");
	obj->move(environment(me));
	me->set_temp("quests/magic-manor-01",3);
	}

	:: die();
}


