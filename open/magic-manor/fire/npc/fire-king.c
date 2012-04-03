inherit NPC;
inherit F_MASTER;
#include "/open/open.h"
#include <ansi.h>


string do_special_fight();

void create()
{
	set_name("�����", ({ "fire king","fire","king" }) );
	set("long","������������֮����������С�����ͻ����޲�֪ǿ�ϼ�����\n");
	set("title",HIR"(��ɫ����)"NOR"��������"NOR);
	set("class","scholar");
    set("family/family_name","�μ�");
	set("gender","Ů��");
	set("age", 60);
	set("max_gin", 50000);
	set("max_kee", 50000);
	set("max_sen", 50000);
	set("max_force", 20000);
	set("force",20000);
	set("max_atman",50000);
	set("max_mana",50000);
	set("atman",50000);
	set("mana",50000);
	set("force_factor",20);
	set("attitude","aggressive");
	set("str", 35);
	set("cor", 35);
	set("spi", 35);
	set("int", 35);
	set_temp("apply/armor", 150);
	set_temp("apply/defense", 250);
	set("bellicosity",10000);
    set("functions/handwriting/level",100);
        set_skill("dodge", 100);
        set_skill("force",100);
        set_skill("move", 100);
        set_skill("parry", 100);
        set_skill("stabber",120);
        set_skill("unarmed",100);
        set_skill("literate",120);
        set_skill("sunforce",100);
        set_skill("linpo-steps",100);
        set_skill("six-fingers",100);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("stabber","six-fingers");
        map_skill("unarmed","six-fingers");

	set("combat_exp", 8000000);
	set("fire-monster",1);
	set("marks/sun-finger",1);
	set("marks/six_sp",3);
	set("six_spsp",1);
	set("chat_chance_combat", 80);
	set("chat_msg_combat", ({ (: perform_action("stabber.handwriting") :), }) );
	setup();

	add_money("cash",500);
	carry_object("/open/magic-manor/fire/obj/fire-fan")->wield();
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
	    if( !enemy[j] ) continue;
	    {
	      if(!enemy[j]->is_fighting() && enemy[j]->is_character() && !enemy[j]->is_corpse() 
	      && living(enemy[j]) && !enemy[j]->query("fire-monster") ) 
	      mob->kill_ob(enemy[j]);
	    }
	  }
	}

	if(random(10) > 6 && mob->is_fighting() )
	{
	   message_vision(HIM"������죬�Ƶ����ᣬ������������ʣ�$N���ид���Ȼ����ƮȻ����

            "HIW"----===�ԡ� ������ʽ ���===----
                 "NOR+RED"  ��"HIR"���Ʒ��裮����"NOR+RED"��\n\n"NOR,mob);

      for (j=0 ; j < i ; j++)
      {
        if( !enemy[j] ) continue;
        {
          if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j])
          && !enemy[j]->query("fire-monster") )
          {
            if( !enemy[j]->query_temp("magic-manor/water-shield") )
            {
            message_vision(HIR"$N"HIR"ֻ�л������ȣ�����ʱ���������ս��ĳ�ζ!!\n"NOR,(enemy[j]));
            enemy[j]->receive_wound("kee",600);
            enemy[j]->start_busy(1);
            COMBAT_D->report_status(enemy[j]);
            }else{
            message_vision(HIC"$N"HIC"���ϵ�ˮ��֮�������˲��ݵĻ�����!!\n"NOR,(enemy[j]));
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

int accept_kill(object who)
{
        who=this_player();

        command("unwield all");
        command("wield fan");
        command("kill "+who->query("id"));
        command("exert sun-finger");
        command("perform unarmed.handwriting");
        command("wield finger");
        return 1;
}

int accept_fight(object who)
{
        who=this_player();

        command("unwield all");
        command("wield fan");
        command("exert sun-finger");
        fight_ob(who);
        command("perform unarmed.handwriting");
        command("wield finger");
        return 1;
}

void die()
{
	object me=query_temp("last_damage_from");

	if( !me->query_temp("magic-manor/firemagic") )
	{
	message_vision(HIR"��������������Ȼ��Ϊһ����ɫ��⣬������$N"HIR"������֮��!!\n"NOR,me);
	me->set_temp("magic-manor/firemagic",1);
	}
	me->delete_temp("magic-manor/breakfire",1);
    message_vision("\n\n������Ϊ�������������������ĳ�����һЩ�Ѻ�.....\n",me);

	:: die();
}
