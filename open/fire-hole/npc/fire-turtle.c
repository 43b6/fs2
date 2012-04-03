#include <ansi.h>
inherit NPC;
void create()
{
        set_name("���", ({ "fire turtle","fire","turtle" }) );
        set("long",
                "����һֻ��Ϣ�ڻ����ߵĻ�꣬����������һ�㼫Ϊ��̵������������\n");
        set("race", "Ұ��");
        set("age", 990);
        set("attitude", "friendly");
        set("max_gin", 20000);
        set("max_kee", 33000);
        set("max_sen", 20000);
        set("str", 90);
        set("cor", 50);
        set("spi", 50);
        set("int", 50);
        set("limbs", ({ "ͷ��", "����", "ǰצ", "��צ", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );
        set("bellicosity",10000);
        set("max_force",35000);
        set("force",50000);
        set_temp("apply/armor", 150);
        set_temp("apply/defense", 150);
        set_temp("apply/damage", 100);
        set_temp("apply/attack", 100);
        set("force_factor",40);
        set("combat_exp", 9500000);
        set_skill("move",150);
        set_skill("dodge",150);
        set_skill("parry",150);
        set_skill("force",500);
        set_temp("kang-power",1);
        set_temp("hardshell",1);
        setup();

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
	  message_vision(HIR"���ı��������Ϸ���һƬ��⣬��������˳��ȳ������!!\n"NOR,me);
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
	  message_vision(HIR"����Хһ��������ǿ��ķ���������Ҫ�����������ܵ�����!!\n"NOR,me);
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

void die()
{
	object winner = query_temp("last_damage_from");
	string name = winner->query("name");

	if(!winner)
	{
	::die();
	return ;
	}
	if( !present( "fire-turtle shield", winner ) )
	{
	  if( random(49) == 7 )
	  {
	  log_file("open-area/get_shield", sprintf("%s(%s) �õ����Ƕ��� %s\n",name,winner->query("id"), ctime(time()) ));
	  new("/data/autoload/open-area/turtle-shield.c")->move(winner);
	  message_vision(HIR"���������һ��������˦����һ��ܼ�������$N!!\n"NOR,winner);
	  }
	}
	:: die();
}