//three_eye lion.c

#include <ansi.h>
inherit NPC;
void create()
{
      set_name("[36m������ʨ[0m",({"three_eyes lion","lion"}));
        set("long","��ʨ�ӵ�����,�յ���,ͬʱ��ӵ�г���Զ���񻰹��\n"    );
        set("race", "Ұ��");
        set("age", 140);
        set("attitude","aggressive");    
        set("max_kee",6000);
        set("max_force",6000);
        set("force",6000);
        set("force_factor",5);
        set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
        set("verbs", ({ "bite"}));
	set("combat_exp",700000);
	set_temp("apply/armor", 100);
        set_temp("apply/attack", 80);
        set("attitude","aggressive");
	set_skill("dodge",90);
	setup(); 
//        carry_object("/open/gsword/obj/ff_item");
        set_heart_beat(1);
}
void heart_beat()
{
  object *enemy,me;
  int i;
  me = this_object();
  if( me->is_fighting() )
  {
    if( 50 > random(200) )
    {
      enemy = me->query_enemy();
      i=random(sizeof(enemy));
      if(environment(me) == environment(enemy[i]))
      if( random(10) > 7)
      {
       message_vision(HIG"��ʨչ����������˾޴��ɰ�籩����$N!!!\n"+NOR,enemy[i]);
       enemy[i]->receive_damage("kee",300,me);
       COMBAT_D->report_status(enemy[i], 0);
      }else{
      message_vision(HIM+"���ѵ�������$N�������,$N�����ͷ���ۻ�!!!\n"+NOR,enemy[i]);
      enemy[i]->receive_damage("kee",150,me);
      COMBAT_D->report_status(enemy[i], 0);
      }
     }
   }
   if( me->query("kee") < 0 )
      me->die();
   ::heart_beat();
}                             
