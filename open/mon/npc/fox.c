inherit NPC;
inherit F_MASTER;
#include "/open/open.h"
#include <ansi.h>
void create()
{
        set_name("����", ({ "fox" }) );
        set("long","����һֻ�����ڳ���ɽ�ϵ�����꣬������Ϊ��\n");
        set("race", "Ұ��");
        set("age", 20);
        set("attitude", "friendly");
        set("max_gin", 10000);
        set("max_kee", 20000);
        set("max_sen", 10000);
	set("gin",10000);
	set("sen",10000);
	set("kee",20000);
        set("str", 20);
        set("cor", 20);
        set("spi", 20);
        set("int", 20);
        set("limbs", ({ "ͷ��", "����", "ǰצ", "��צ", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );
        set("bellicosity",10000);
        set("max_force",10000);
        set("force",10000);
        set_temp("apply/armor", 100);
        set_temp("apply/defense", 100);
        set_temp("apply/damage", 275);
        set_temp("apply/attack", 275);
        set("force_factor",15);
        set("combat_exp", 5200000);
        set_skill("move",100);
        set_skill("dodge",100);
        set_skill("parry",100);
        set_skill("unarmed",100);
        set_skill("force",100);
        set_skill("rabbit-combat",100);
        map_skill("unarmed","rabbit-combat");
        setup();
}

void heart_beat()
{
	object mob;
	int j,kee,eke;

	mob = this_object();
	if(!mob) return ;
	kee = mob->query("kee");
	eke = mob->query("eff_kee");
	sen = mob->query("sen");
	gin = mob->query("gin");
	j=random(24);

	if( mob->query_temp("heal") == 5 )
	mob->set("title",HIR"(��������)"NOR);	
	if( mob->query_temp("heal") == 4 )
	mob->set("title",HIR"(�˺�����)"NOR);
	if( mob->query_temp("heal") == 3 )
	mob->set("title",HIR"(��Ϣ����)"NOR);
	if( mob->query_temp("heal") == 2 )
	mob->set("title",HIR"(�ദ����)"NOR);
	if( mob->query_temp("heal") == 1 )
	mob->set("title",HIR"(��΢��Ѫ)"NOR);
	
	if( mob->is_fighting() && (random(100) < 45) && (query_temp("heal") < 5) )
	{
	if( (eke < 5000 && eke > 0) || (kee < 5000 && kee > 0) || (sen < 5000 ) || (gin < 5000 ) )
	{
	  switch(j)
	  {
	  case 0:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon09");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 1:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon15");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 2:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon32");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 3:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon37");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 4:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon36");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 5:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon35");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 6:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon34");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 7:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon33");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 8:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon03");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 9:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon02");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 10:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon54");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 11:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon07");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 12:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon08");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 13:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon04");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 14:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon05");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 15:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon06");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 16:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon10");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 17:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon11");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 18:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon12");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 19:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon13");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 20:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon14");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 21:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon38");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 22:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon39");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);
	  }
	  break;

	  case 23:
	  if( eke < 0 || kee < 0 )
	  {
	  mob->die();
	  }else{
	  message_vision(HIB"$N"HIB"������һ�����ԣ�һ���̵ľͲ�����!!\n"NOR,mob);
	  mob->move("/open/mon/mon43");
	  mob->remove_all_enemy();
	  mob->add_temp("heal", 1);

	  }
	  break;
	  }
	    if( query_temp("heal") < 5 ) 
            {
          if(!mob) return ;
	      mob->receive_curing("kee",3000);
	      mob->receive_heal("kee",3000);
	      mob->receive_curing("gin",3000);
	      mob->receive_heal("gin",3000);
	      mob->receive_curing("sen",3000);
	      mob->receive_heal("sen",3000);
	      tell_room(environment(), HIR+name()+"��������һ����⣬Ϊ�Լ�����!!\n"+NOR);
            }
	}
	}

   set_heart_beat(1);
   :: heart_beat();
}            
