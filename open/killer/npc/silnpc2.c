#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("�������ϼ�ɱ��",({"silver killer","killer","silver"}) );
  set("long","����������ר���ɳ�ȥִ�������ɱ�֣�һ�����Բ��ڻ��¡� \n");
  set("race", "����");
  set("gender","����");
  set("combat_exp",400000);
  set("age",24);
  set("title","�������ĳ�Ա");
  set("class","killer");
  set("cor",30);
  set("cps",30);
  set("str",50);
  set("kee",1500);
  set("max_kee",1500);
  set("force",1000);
  set("max_force",1000);
  set("force_factor",8);
  set("chat_chance",10);
  set("bellicosity",300);
  set_skill("rain-throwing",73);
  set_skill("throwing",72);
  set_skill("blackforce",60);
  set_skill("force",60);
  set_skill("dodge",75);
  set_skill("shade-steps",60);
  set_skill("parry",75);
  set_skill("move",75);
  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
 setup();
    add_money("gold",5);
    ob=carry_object("/open/killer/obj/lustar");
    ob->add_amount(80);
    ob->wield();
    ob=carry_object("/open/killer/weapon/k_cloth2.c")->wear();
}
int accept_kill(object ob)
{
message_vision( this_object()->name()+"˵:�Ƚ������������аɣ�\n",ob);
  add("bellicosity",700);
  command("cmd bellup");
   return 1;

}
int accept_fight(object me)
{
    object ob,guard;
    ob=this_object();

    guard=present( "guard 2",environment(ob) );
     if( !present( "guard 2",environment(ob))||!living(guard)) return 1;
    else {
    tell_room(environment(me),"һ���ϣ������Ҳ�!�������� \n"),
    message_vision(HIB"\n�������ϼ�ɱ�ֿ����������ѣ�������$N��������\n"NOR,me);
     guard->fight_ob(me);
    return 1;
   }
}
