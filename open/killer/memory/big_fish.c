#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set("title","��������");
set_name("ǧ��",({"san-li","san","li"}));
set("long","ΪĪ���������֮�㣬�ഫ��Ҷ�³����������㡣\n");
set("race","����");
//set("race","��ħ");
set("gender","����");
set("attitude","aggressive");
set("limbs", ({ "ͷ��", "����",  "β��" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",99);
set("int",30);
set("per",30);
set("str", 55);
set("con", 30);
set("force",1000);
set("max_force",1000);
set("max_kee",3000);
set("kee",5678);
set("combat_exp", 550000);
set_skill("move",120);
set_skill("dodge",120);
set_skill("parry",80);
setup();
}

void die()
{
   object head,killer;
 
   killer=query_temp("last_damage_from");
   if(killer->query_temp("memory") == 6 )
   {
     head=new("/open/killer/memory/sp_can.c");
     head->move(this_object());
     killer->set_temp("memory",7);
   }
   ::die();
}
