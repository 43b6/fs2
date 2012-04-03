#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

string magic1();
string magic2();
string magic3();
string magic4();

void create()
{
        set_name("������",({"funchin sen","funchin","sen"}));
        set("long",@LONG
����˽�֮һ���貽�����Ƕ������£����˸���������������
���ޱȣ��������������ģ����������ǵ����˾����ޱȵĵ�
����
LONG);
	set("gender","Ů��");
	set("class","dancer");
	set("nickname",NOR+MAG"��"HIM"��"NOR+MAG"��"HIM"��"NOR);
	set("title",HIC"����˽�"NOR);
	set("family/family_name","ҹ��С��");
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

	set("max_kee",50000);
	set("max_gin",50000);
	set("max_sen",50000);

	set_skill("unarmed",120);
	set_skill("dreamforce",250);
	set_skill("dreamdance",120);
	set_skill("paull-steps",120);
	set_skill("dremagic",100);
	set_skill("move",120);
	set_skill("dodge",120);
	set_skill("magic",120);
	set_skill("parry",120);
	set_skill("force",250);
	map_skill("magic","dremagic");
	map_skill("dodge","paull-steps");
	map_skill("force","dreamforce");
	map_skill("move","paull-steps");
	map_skill("unarmed","dreamdance");

	set("/spells/reflection/level",100);
	set("/spells/confuse/level",100);
	set("/spells/fireball/level",100);
	set("/spells/thunder/level",100);
	set("/spells/fdragon/level",100);
	set("/spells/firedance/level",100);
	set("/spells/dreamwings/level",100);
	set("/spells/hellfire/level",70);
	set("spells/dreamcure/level",100);
	set("functions/rainbow-steps/level",100);

	set("chat_chance_combat",50);
	set("chat_msg_combat", ({
	(: magic1 :),
	(: magic2 :),
	(: magic3 :),
	(: magic4 :),
	}));

	set("allow_hellfire",1);
	set("allow_fdragon",1);
	set("get_dan_sp",1);
	set("adv_dancer",1);
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
	carry_object("/open/magic-manor/obj/fire-color-ribbon");

}

int accept_kill(object ob)
{
	kill_ob(ob);
	command("wield all");
	command("conjure fdragon");
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
/*
	if( me->is_fighting() )
	{
	int i=me->query_busy();
	message_vision(HIC"$NĿǰbusyָ����"HIM+i+HIC"��\n"NOR,me);
	}
*/
	if( !me->is_busy() && who->is_busy() )
	{
	command("conjure thunder");
	command("conjure fireball");
	}
	if( !me->is_busy() && !who->is_busy() )
	{
	command("conjure thunder");
	command("conjure fireball");
	command("conjure confuse");
	}
	if( !me->is_fighting() && !me->query_temp("ref_shield") )
	{
	command("conjure reflection");
	}
	if( !me->is_fighting() && !me->query_temp("mana_shield") )
	{
	command("conjure dreamwings");
	}
	if( me->is_fighting() && !me->query_temp("ref_shield") )
	{
	command("conjure reflection");
	}
	if( !me->is_fighting() && !me->query_temp("ranbow-steps") )
	{
	command("perform dodge.rainbow-steps");
	}
	if( me->is_fighting() && !me->query_temp("ranbow-steps") && !me->is_busy() )
	{
	command("perform dodge.ranbow-steps");
	}
	if( me->is_fighting() && !me->query_temp("mana_shield") && me->query("atman") > 300 )
	{
	command("conjure dreamwings");
	}
	if( !is_fighting() ) 
	{
	  if( query("force") < 20000 )
	  command("ex 270");
	  if( query("atman") < 20000 )
	  command("res 300");
	  if( query("eff_kee") < query("max_kee") )
	  command("conjure dreamcure");
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
	obj=new("/open/magic-manor/obj/soil-ball");
	obj->move(environment(winner));
	message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	}else{
	  if( random(9) == 5 )
	  {
	  obj=new("/open/magic-manor/obj/golden-ball");
	  obj->move(environment(winner));
	  message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	  }else{
	    if( random(12) == 7 )
	    {
	    obj=new("/open/magic-manor/obj/wood-ball");
	    obj->move(environment(winner));
	    message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	    }else{
	      if( random(15) == 9 )
	      {
	      obj=new("/open/magic-manor/obj/water-ball");
	      obj->move(environment(winner));
	      message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	      }else{
	        if( random(18) == 11 )
	        {
	        obj=new("/open/magic-manor/obj/fire-ball");
	        message_vision(CYN"һ����ֵ����Ӵ�$N����������˳���!!\n"NOR,me);
	        obj->move(environment(winner));
			}
	      }
	    }
	  }
	}
	::die();
}

string magic1()
{
        command("conjure confuse");
        return "\n";
}

string magic2()
{
        command("conjure confuse");
        return "\n";
}

string magic3()
{
        command("conjure hellfire");
        return "\n";
}
string magic4()
{
        command("conjure fdragon");
        return "\n";
}
