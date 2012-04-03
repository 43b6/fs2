inherit NPC;
inherit F_MASTER;
#include "/open/open.h"
#include <ansi.h>
void create()
{
        set_name("����ɽ����", ({ "black bear","black","bear" }) );
        set("race", "Ұ��");
        set("attitude", "aggressive");
        set("age", 50);
        set("max_gin", 25000);
        set("max_kee", 25000);
        set("max_sen", 25000);
	set("gin",25000);
	set("sen",25000);
	set("kee",25000);
        set("str", 90);
        set("cor", 90);
        set("spi", 20);
        set("int", 20);
        set("limbs", ({ "ͷ��", "����", "ǰצ", "��צ", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );
        set("bellicosity",10000);
        set("max_force",10000);
        set("force",10000);
        set_temp("apply/armor", 200);
        set_temp("apply/defense", 200);
        set_temp("apply/damage", 150);
        set_temp("apply/attack", 150);
        set("force_factor",26);
        set("combat_exp", 8300000);
        set_skill("move",100);
        set_skill("dodge",100);
        set_skill("parry",100);
        set_skill("unarmed",100);
        set_skill("force",100);
        set_skill("beast-combat",100);
        map_skill("unarmed","beast-combat");
        map_skill("parry","beast-combat");
        setup();
        carry_object("/open/mon/obj/bear-boots.c")->wear();
}

void heart_beat()
{
	object mob,*enemy;
	int i;
	string ff;

	mob = this_object();

	if( mob->is_fighting() )
	{
	enemy=mob->query_enemy();
	i=random(sizeof(enemy));
	  if( environment(mob) == environment(enemy[i]) )
	  {
	    if( enemy[i]->query("quests/read_snow") )
	    {
	    mob->set_temp("hardshell",1);
	      if( random(100) > 50 )
	      {
	        if( random(100) > 50 )
	        {
	          if( !mob->query_temp("hardshell") )
	          {
	          message_vision(HIR"ֻ��$N���һ�������ܵı���������ȫ����Ѫ��ӯ��������Ľ�ʵ�ޱȡ�\n"NOR,mob,enemy[i]);
	          mob->set_temp("hardshell",1);
	          }else{
	            if( random(100) < 5 )
	            {
	            message_vision(YEL"ֻ��$N�Ŀ񱩽�Ъ������������ɱ��!!\n"NOR,mob,enemy[i]);
	            mob->delete_temp("hardshell",1);
	            }
	          }
	        }
	      }
	    }
	  } 
	}

	set_heart_beat(1);
	:: heart_beat();
}   
