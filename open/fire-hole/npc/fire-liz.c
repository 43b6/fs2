inherit NPC;
inherit F_MASTER;
#include "/open/open.h"
#include <ansi.h>
void create()
{
        set_name("������", ({ "fire lizard","fire","lizard" }) );
        set("long",
                "����һֻ��Ϣ�ڻ����ߵ����棬����Ӵ��Ƕ�����Ϊ��\n");

        set("race", "Ұ��");
        set("age", 110);
        set("attitude", "friendly");
        set("max_gin", 40000);
        set("max_kee", 75000);
        set("max_sen", 40000);
        set("str", 80);
        set("cor", 50);
        set("spi", 70);
        set("int", 40);
        set("limbs", ({ "ͷ��", "����", "ǰצ", "��צ", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );
        set("bellicosity",10000);
        set("max_force",30000);
        set("force",50000);
        set_temp("apply/armor", 180);
        set_temp("apply/defense", 180);
        set_temp("apply/damage", 180);
        set_temp("apply/attack", 180);
        set("force_factor",20);
        set("combat_exp", 9500000);
        set_skill("move",150);
        set_skill("dodge",150);
        set_skill("parry",150);
        set_temp("kang-power",1);
        setup();
        carry_object("/open/common/obj/liz_meat.c");
}

void heart_beat()
{
	object me,mob,*enemy;
	int bu,i,j;
	me=this_player();
	mob=this_object();
	bu=(int)mob->query_busy();
	enemy=mob->query_enemy();
	i=sizeof(enemy);

	if( bu <= 0 ) bu=1;
	if( bu > 10 ) bu=9;

	if( mob->is_fighting() && mob->is_busy() && random(100) > 50 )
	{
	  switch(random(100))
	  {
	  case 0..30:
      message_vision(HIR"������ı���ӲƤ�Ϸ���һƬ��⣬��������˳��ȳ������!!\n"NOR,me);
		for( j=0 ; j<i ; j++ )
	    {
	      if( !enemy[j] ) continue;
	      {
			if( random(10) > 2 )
	        {
		    message_vision(HIR"�������ֱ��$N"HIR"��ȥ��$N"HIR"һʱ�޷���Ӧ��������ס��!!\n"NOR,enemy[j]);
		    enemy[j]->start_busy(1);
	        COMBAT_D->report_status(enemy[j]);
			}else{
	        message_vision(HIW"$N��������䣬�����ڻ�������֮�⣬����ֻ���޹�������\n"NOR,enemy[j]);
	        COMBAT_D->report_status(enemy[j]);
			}
		  }
	    }
	  break;

	  case 31..100:
	  message_vision(HIR"�������Хһ��������ǿ��ķ���������Ҫ�����������ܵ�����!!\n"NOR,me);
		for( j=0 ; j<i ; j++ )
	    {
	      if( !enemy[j] ) continue;
	      {
			if( random(35000) > enemy[j]->query("max_force")  )
	        {
		    message_vision(HIR"$N"HIR"һ����ܲ������������Ѫ���ڣ�һʱ����Ѫ���Ե���!!\n"NOR,enemy[j]);
		    enemy[j]->receive_wound("kee",bu*150);
		    enemy[j]->receive_wound("gin",150);
		    enemy[j]->receive_wound("sen",150);
	        COMBAT_D->report_status(enemy[j]);
			}else{
	        message_vision(HIW"$N���������ڹ����������������ȫж�˿�ȥ��\n"NOR,enemy[j]);
	        COMBAT_D->report_status(enemy[j]);
			}
		  }
	    }
	  break;
	  }
	}

	if( mob->query("kee") <= 0 )
	{
	mob->die();
	}
    set_heart_beat(1);
	::heart_beat();
}