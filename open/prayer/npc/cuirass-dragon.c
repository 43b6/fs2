//cuirass-dragon.c

#include <ansi.h>
inherit NPC;
void create()
{
	set_name("[33m�Ƽ׽���[0m", ({ "cuirass-dragon","dragon" }) );
        set("race", "Ұ��");
	set("age", 180);
	set("long", "��ɫ�ۼ�,��ɫƤ������צ����.\n");
	set("str", 75);
        set("max_kee", 9000);
        set("max_sen",7000);
        set("max_gin",7000);
        set("kee", 9000);
        set("max_force", 7000);
        set("force",7000);
        set("force_factor",150);
        set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
        set("verbs", ({ "bite"}));
	set("combat_exp",1300000);
	set_temp("apply/armor", 100);
        set_temp("apply/attack", 100);
        set("attitude","aggressive");
	set_skill("dodge",120);
	setup(); 
        carry_object("/open/gsword/obj/ff_item");
        carry_object("/open/prayer/obj/dragon-eye");
        carry_object("/open/prayer/obj/dragon-skin");
        carry_object("/open/prayer/obj/dragon-fur");
        carry_object("/open/prayer/obj/dragon-tooth");
        carry_object("/open/prayer/obj/dragon-bone");
        add_money("gold",5);
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
       message_vision(HIY+"�Ƽ׽���������ϵ���Ƭ,������$N!!!\n"+NOR,enemy[i]);
       enemy[i]->receive_damage("kee",400,me);
       COMBAT_D->report_status(enemy[i], 0);
      }else{
      message_vision(HIM+"�Ƽ׽���һ��ҧס$N,��ȡ$N�ľ����ظ��Լ�!!!\n"+NOR,enemy[i]);
      enemy[i]->receive_damage("kee",180,me);
      COMBAT_D->report_status(enemy[i], 0);
      me->receive_curing("kee",400);
      me->receive_heal("kee",400);
      }
     }
   }
   if( me->query("kee") < 0 )
      me->die();
   ::heart_beat();
}                             
