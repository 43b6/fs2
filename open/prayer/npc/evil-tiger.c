//evil-tiger.c

#include <ansi.h>
inherit NPC;
void create()
{
      set_name("[36mа��[0m",({"evil-tiger"}));
        set("long","��а������а���Ұ�ޣ�ëӲ�������ж����١��������ұ�֮�У����Ż������������ˡ�\n"    );
        set("race", "Ұ��");
        set("age", 160);
        set("attitude","aggressive");    
        set("max_kee",7000);
        set("max_sen",7000);
        set("max_gin",7000);
        set("max_force", 10000);
        set("force",10000);
        set("force_factor",5);
        set("kee",7000);
        set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
        set("verbs", ({ "bite"}));
	set("combat_exp",900000);
	set_temp("apply/armor", 100);
        set_temp("apply/attack", 90);
        set("attitude","aggressive");
	set_skill("dodge",90);
	setup(); 
        carry_object("/open/gsword/obj/ff_item");
        add_money("gold",20);
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
       message_vision(HIY"а���ſ����,���������ҧס��$N!!!\n"+NOR,enemy[i]);
       enemy[i]->receive_damage("kee",300,me);
       COMBAT_D->report_status(enemy[i], 0);
      }else{
      message_vision(HIM+"а���Ը�����$N�������,$N��ײ�ķ���ʮ����!!!\n"+NOR,enemy[i]);
      enemy[i]->receive_damage("kee",160,me);
      COMBAT_D->report_status(enemy[i], 0);
      }
     }
   }
   if( me->query("kee") < 0 )
      me->die();
   ::heart_beat();
}                             
