#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("�����鳬��ɱ��",({"killer trainer","killer","trainer"}) );
  set("long","�������ɱ�ֱ�����Ǹ������ɱ�֣�������¹�����Ȼ���� \n");
  set("race", "����");
  set("gender","����");
  set("combat_exp",800000);
  set("age",45);
  set("title","�������ĳ�Ա");
  set("class","killer");
  set("cor",25);
  set("cps",25);
  set("str",25);
  set("kee",4000);
  set("max_kee",4000);
  set("force",300);
  set("max_force",300);
//  set("force_factor",5);
  set("bellicosity",200);
  set_skill("rain-throwing",35);
  set_skill("throwing",35);
  set_skill("blackforce",50);
  set_skill("force",60);  
  set_skill("dodge",70);
  set_skill("parry",60);
  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing"); 
 setup();
    add_money("gold",12);
    ob=carry_object("/open/killer/obj/lustar");
    ob->add_amount(10);  
    ob->wield();
}
