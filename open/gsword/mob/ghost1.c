inherit NPC;
#include <ansi.h>
void create()
{
	set_name("��ëС��", ({ "Green ghost" , "ghost" }) );
	set("race", "Ұ��");
	set("age", 7);
	set("long", "һֻ������ë��С��,��������צ��Ѱ����������.\n");                                                                                                                                                                                                          
	set("str", 35);
	set("cor", 35);
        set("limbs", ({ "ͷ��", "����", "˫��", "˫��" }) );
        set("verbs", ({ "bite", "claw", "dunt" }));
	set("combat_exp", 1500);
	set("attitude","aggressive");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({  
          HIB" С���ŭ�ؽ�:    ֨�� ֨��\n"NOR      }) );
	set_skill("dodge",35);
	setup();               
}
void die()
{
  object me;
  me= this_object()->query_temp("last_damage_from");
  if( me&& userp(me) ) {
      me->add("bounds",10);
    tell_room(environment(),sprintf("%s ��С�����ϳ���10����ë�Ž��ڴ�\n",me->name()));
       }
      ::die() ;
   }