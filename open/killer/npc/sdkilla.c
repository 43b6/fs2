#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("����������ɱ��",({"killer trainer","killer","trainer"}) );
  set("long","�������ɱ�ֱ�����Ǹ������ɱ�֣�������¹�����Ȼ���� \n");
  set("race", "����");
  set("gender","����");
  set("combat_exp",200000);
  set("age",20);
  set("title","�������ĳ�Ա");
  set("class","killer");
  set("cor",15);
  set("cps",15);
  set("str",20);
  set("kee",1500);
  set("max_kee",1500);
  set("force",200);
  set("max_force",200);
//  set("force_factor",5);
  set("bellicosity",100);
  set_skill("rain-throwing",30);
  set_skill("throwing",35);
//  set_skill("blackforce",50);
//  set_skill("force",50);  
  set_skill("dodge",30);
  set_skill("parry",30);
//  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing"); 
 setup();
    add_money("gold",5);
    ob=carry_object("/open/killer/obj/lustar");
    ob->add_amount(10);  
    ob->wield();
}
