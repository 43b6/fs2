#include <ansi.h>
inherit NPC;

void create()
{
  set_name("����",({"white wolf","white","wolf",}));
  set("race", "Ұ��");
  set("age",13);
  set("gender","����");
  set("long","һֻȫ��ѩ�׵��� ,���ǰ׵�������Ƥë ,��������Ŀ��Ͼ�� ,��̾���� !\n");
  set("str", 30);
  set("con", 30);
  set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
  set("verbs", ({ "bite"}));
  set("combat_exp",450000);
  set("max_kee",2000);
  set("kee",2000);
  set("max_force",1250);
  set("force",1250);
  set("force_factor",30);
  set("attitude","peaceful");
  set_skill("dodge",450);
  set_skill("parry",300);
  set_temp("apply/armor",100);
  set_temp("apply/attack",300);
  setup();
  carry_object("/open/badman/obj/hand.c");

}
int accept_kill(object me)
{
  object ob,wolf;
  ob=this_object();
  wolf=present( "wolf master",environment(ob) );
  if( !present( "wolf master",environment(ob))||!living(wolf)) return 1;
  else {
  tell_room(environment(me),HIY"��...\n"NOR),
  message_vision(RED"\n�^�H�������Ǳ��� ,���϶�����˵ ,��$N�������� !\n"NOR,me
  );
  wolf->kill_ob(me);
  return 1;
  }
}
int accept_fight(object me){
  object ob,wolf;
  ob=this_object();
  wolf=present( "wolf master",environment(ob) );
  if( !present( "wolf master",environment(ob))||!living(wolf)) return 1;
  else {
  tell_room(environment(me),HIY"��...\n"NOR),
  message_vision(RED"\n�^�H�������Ǳ��� ,���϶�����˵ ,��$N�������� !\n"NOR,me
  );
  wolf->kill_ob(me);
  return 1;
  }
}
