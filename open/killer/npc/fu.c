#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set("title","���ŵ���");
set_name("���",({"fu-kou","fu","kou"}));
set("long","����ǰ������ɱ�֣����Ǳ�����֯������ţ�Ŀǰ��������̽ɱ����̳��\n");
set("gender","Ů��");
        set("attitude","friendly");
set("age",35);
set("int",30);
set("per",30);
set("str", 40);
set("con", 30);
set("force",400);
set("max_force",400);
set("combat_exp", 350000);
set_skill("force",30);
set_skill("dodge",75);
set_skill("parry",75);
setup();
add_money("gold",2);
}

int accept_kill(object who)
{
   say(HIY"��⣡�������ˣ���\n"NOR);
   setup();
   return 1;
}

void die()
{
   object head,killer;
 
   killer=query_temp("last_damage_from");
   if(killer->query_temp("kill_fu") != 1 )
   {
     message_vision(HIY"�ɶ񣡾�Ȼ������������,�޷����������\n"NOR,this_object());
     message_vision("˵��֮�����͵����ˡ�������\n",this_object());
     head=new("/open/killer/obj/fu_head.c");
     head->move(this_object());
   }
   if (killer->query_temp("kill_fu") == 1)
   {
     message_vision(HIY"��ȻΪ��һ��������һ����ں���������������ѽ��\n"NOR,this_object());
     message_vision("˵��֮�����͵����ˡ�������\n",this_object());
     head=new("/open/killer/obj/fu_page.c");
     head->move(this_object());
   }
   ::die();
}