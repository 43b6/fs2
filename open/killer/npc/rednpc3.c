#include <ansi.h>
#include </open/open.h>
inherit NPC;

int change;
void create()
{
set_name("��Ҷ��һ��ɱ��",({"red killer","red","killer"}));
set("long","���Ǻ�Ҷ���ɱ�֣����ƺ����Ҹ����\n");
set("gender","����");
set("attitude","friendly");
set("age",35);
set("int",30);
set("per",30);
set("str", 40);
set("con", 30);
set("force",400);
set("max_force",400);
set("combat_exp", 180000);
set_skill("force",30);
set_skill("dodge",100);
set_skill("parry",75);
setup();
add_money("gold",2);
}

int accept_kill(object who)
{
   if(who->query_temp("mission1")==1)
   {
     say(HIY"�ɶ񣬾�Ȼ���㷢���ˣ������ռ���--��Ѫ����\n"NOR);
     set("combat_exp", 650000);
     change=1;
     setup();
     return 1;
   }
   setup();
   return 1;
}

void die()
{
   object head;
 
   if (change ==1)
   {
     message_vision(HIY"�ɶ񣡾�Ȼ������������,�޷����������\n"NOR,this_object());
     message_vision("˵��֮�����͵����ˡ�������\n",this_object());
     head=new("/open/killer/obj/npc_head.c");
     head->move(this_object());
   }
   ::die();
}