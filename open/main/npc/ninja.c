#include "/open/open.h"
inherit NPC;
void create()
{
        set_name("��ɣ����", ({ "ninja" }) );
	set("gender", "����" );
	set("age", 27);
	set("long", @LONG
���Ƿ�ɣ�����õ�����.
���������ŷ�ɣ�İ�ȫ!
LONG);
      set("attitude","aggressive");
        set("combat_exp",10000);
        set_skill("dodge",30);
	set_skill("blade",30);
	set_skill("parry",30);
	set_skill("unarmed",30);
        set("chat_chance",40);
        set("chat_msg",({
        (: this_object(),"random_move" :),
        }));
	setup();
        carry_object("/open/ping/obj/guard_blade")->wield();
	
}
void die()
{
  object me;
  me= this_object()->query_temp("last_damage_from");
  if( me&& userp(me) ) {
      me->add("head",1);
tell_room(environment(),sprintf("%sɱ���˷�ɣ����,�õ�һ��ս����\n",me->name()));
}
      ::die() ;
}
