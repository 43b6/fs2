#include <ansi.h>
inherit NPC;
void create()
{
	set_name("��ҩа��", ({ "grass tiger","tiger" }) );
        set("race", "Ұ��");
	set("age", 15);
	set("long", "һֻ���ų�ħа�����׶��ϻ�.\n");
	set("str", 65);
        set("max_kee", 2400);
        set("kee", 2400);
        set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp",150000);
        set("attitude","aggressive");
	set_temp("apply/armor", 70);
        set_temp("apply/attack", 30);
	set_skill("dodge",60);
	setup(); 
 carry_object("/open/doctor/item/ff_item");
 carry_object("/open/doctor/item/f_item");
        set_heart_beat(1);
}
void heart_beat()
{
  object *enemy,me;
  int i;
  me = this_player();
  if( me->is_fighting() )
  {
    if( 60 > random(200) )
    {
      enemy = me->query_enemy();
      i=random(sizeof(enemy));
      message_vision(HIR+"��ҩа���³��޴�Ļ���,������$N!!!\n"+NOR,enemy[i]);
      enemy[i]->receive_damage("kee", 80,me);
      COMBAT_D->report_status(enemy[i], 0);
     }
   }
   if( me->query("kee") < 0 )
      me->die();
   :: heart_beat();
}                             
