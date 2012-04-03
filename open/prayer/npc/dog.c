#include <ansi.h>
inherit NPC;
void create()
{
	set_name("��Ȯ", ({ "flame dog","dog" }) );
        set("race", "Ұ��");
	set("age", 20);
	set("long", "ʥ��̾��ĵ��̵�����Ȯ,ȫ������װ�ͨ��.\n");
	set("str", 55);
        set("max_kee", 3000);
        set("kee", 3000);
        set("limbs", ({ "ͷ��", "����","����", "ǰ��" , "���" , "β��" }) );
        set("verbs", ({ "bite"}));
	set("combat_exp",250000);
	set_temp("apply/armor", 80);
        set_temp("apply/attack", 40);
        set("attitude","peaceful");
	set_skill("dodge",70);
	setup(); 
        carry_object("/open/gsword/obj/f_item");
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
       message_vision(HIG+"��Ȯ¶�������ļ���,һ��ҧס��$N!!!\n"+NOR,enemy[i]);
       enemy[i]->receive_damage("kee",120,me);
       COMBAT_D->report_status(enemy[i], 0);
      }else{
      message_vision(HIC+"��Ȯ�à���β�;�ס��$N�ĺ���,��ͼҪ��$N��Ϣ����!!!\n"+NOR,enemy[i]);
      enemy[i]->receive_damage("kee",60,me);
      COMBAT_D->report_status(enemy[i], 0);
      me->receive_curing("kee",60);
      me->receive_heal("kee",60);
      }
     }
   }
   if( me->query("kee") < 0 )
      me->die();
   ::heart_beat();
}                             
