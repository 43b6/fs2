inherit NPC;
#include "/open/open.h"
#include <ansi.h>

string magic1();
string magic2();
string magic3();
string magic4();
string magic5();
string magic6();
string magic7();
string magic8();
string magic9();

void create()
{
        set_name("ˮԨ��", ({ "water king","water","king" }) );
        set("long","ˮ����������֮����������Сˮ����ˮ���޲�֪ǿ�ϼ�����\n");
        set("title",HIC"(ˮɫ����)"NOR"ˮ������"NOR);
        set("family/family_name","ҹ��С��");
	set("gender","Ů��");
        set("age", 60);
        set("max_gin", 30000);
        set("max_kee", 30000);
        set("max_sen", 30000);
        set("max_force", 10000);
        set("force",10000);
        set("max_atman",20000);
        set("max_mana",10000);
        set("atman",20000);
        set("mana",10000);
        set("force_factor",15);
        set("attitude","aggressive");
        set("str", 35);
        set("cor", 35);
        set("spi", 35);
        set("int", 35);
        set_temp("apply/armor", 150);
        set_temp("apply/defense", 250);
        set("class","dancer");
        set("bellicosity",10000);

        set_skill("unarmed",150);
        set_skill("dreamforce",150);
        set_skill("dreamdance",150);
        set_skill("paull-steps",150);
	set_skill("dremagic",100);
        set_skill("move",150);
        set_skill("dodge",150);
        set_skill("magic",150);
        set_skill("parry",150);
        set_skill("force",150);
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

        set("combat_exp", 8000000);
	set("water-monster",1);
	set("allow_hellfire",1);
	set("allow_fdragon",1);
	set("get_dan_sp",1);
	set("adv_dancer",1);
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
	(: magic1 :),
	(: magic2 :),
	(: magic3 :),
	(: magic4 :),
	(: magic5 :),
	(: magic6 :),
	(: magic7 :),
	(: magic8 :),
	(: magic9 :),
	}) );
	setup();
	add_money("cash",500);
	carry_object("/open/magic-manor/water/obj/water-ribbon")->wield();
}

void heart_beat()
{
    object mob,me,obj;
	mixed enemy;
	int i,j=0,k=random(2);
    mob = this_object();
    me = this_player();
	enemy = all_inventory( environment(mob) );
    i = sizeof(enemy);

	if( !mob->is_fighting() || mob->is_fighting() )
	{
	  for (j=0 ; j < i ; j++)
	  {
	    if(!enemy[j]) continue;
 	    {
 	    if (!enemy[j]->is_fighting() && enemy[j]->is_character() && !enemy[j]->is_corpse() 
	    && living(enemy[j]) && !enemy[j]->query("water-monster") ) 
	    mob->kill_ob(enemy[j]);
	    }
	  }
	}

	if( random(10) > 6 && mob->is_fighting() )
	{
	message_vision(HIM"ˮ�����ᣬ���ν��֣���Х�������ĺ���$N��ͬ���ܿ��⽥��ĽȻʹ��

            "HIW"----===�ԡ� ˮϮ����ʽ ���===----
                 "NOR+CYN"  ��"HIC"ˮ��������Ժ�Х"NOR+CYN"��\n"NOR,mob);
	  for( j=0 ; j < i ; j++ )
	  {
            if( !enemy[j] ) continue;
            {
              if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j])
              && !enemy[j]->query("water-monster") )
              {
		if( !enemy[j]->query_temp("magic-manor/fire-shield") )
		{
		message_vision(HIC"$N"HIC"ֻ��ȫ������ľ����ʹ������������������Ĺ�����!!\n"NOR,(enemy[j]));
		enemy[j]->receive_wound("kee",600);
		enemy[j]->start_busy(1);
		COMBAT_D->report_status(enemy[j]);
		}else{
		message_vision(YEL"$N"YEL"���ϵ�����֮�������˲��ݵĶ�������ʹ��$N"YEL"�ܴ���Ϊ��С!!\n"NOR,(enemy[j]));
		enemy[j]->receive_wound("kee",300);
		enemy[j]->start_busy(k);
		COMBAT_D->report_status(enemy[j]);
		}
              }
	    }
	  }
	}   
	set_heart_beat(1);
	::heart_beat();
   
}

void die()
{
	object me=query_temp("last_damage_from");

	if( !me->query_temp("magic-manor/watermagic") )
	{
	message_vision(HIC"ˮԨ�����������Ȼ��Ϊһ��ˮɫ��⣬������$N"HIC"������֮��!!\n"NOR,me);
	me->set_temp("magic-manor/watermagic",1);
	}
	me->delete_temp("magic-manor/breakwater",1);
    message_vision("\n\n������Ϊˮ�����������������ĳ�����һЩ�Ѻ�.....\n",me);

	:: die();
}

string magic1()
{
        command("conjure confuse");
        return "\n";
}

string magic2()
{
        command("conjure dreamwings");
        return "\n";
}

string magic3()
{
        command("conjure reflection");
        return "\n";
}

string magic4()
{
        command("conjure thunder");
        command("conjure fireball");
        return "\n";
}

string magic5()
{
        command("conjure fdragon");
        return "\n";
}

string magic6()
{
        command("conjure thunder");
        command("conjure fireball");
        return "\n";
}

string magic7()
{
        command("conjure firedance");
        return "\n";
}

string magic8()
{
        command("conjure hellfire");
        return "\n";
}

string magic9()
{
        command("conjure thunder");
        command("conjure fireball");
        return "\n";
}