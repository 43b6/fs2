#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("���������ɱ��",({"killer trainer","killer","trainer"}) );
  set("long","�������ɱ�ֱ�����Ǹ������ɱ�֣�������¹�����Ȼ���� \n");
  set("race", "����");
  set("gender","����");
  set("combat_exp",400000);
  set("age",20);
  set("title","�������ĳ�Ա");
  set("class","killer");
  set("cor",25);
  set("cps",25);
  set("str",25);
  set("kee",2500);
  set("max_kee",2500);
  set("force",250);
  set("max_force",250);
//  set("force_factor",5);
  set("bellicosity",150);
  set_skill("rain-throwing",35);
  set_skill("throwing",35);
  set_skill("blackforce",50);
  set_skill("force",50);  
  set_skill("dodge",40);
  set_skill("parry",40);
//  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing"); 
 setup();
    add_money("gold",7);
    ob=carry_object("/open/killer/obj/lustar");
    ob->add_amount(10);  
    ob->wield();
}
