#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set("title","������ǰ������ʹ");
set_name("���պ���",({"hou-la","hou","la"}));
set("long","�����ݺ������ѱ�ñ���С�ˣ����˲��ܣ����㻹�ǵ�С��һ�㡣\n");
set("gender","����");
        set("attitude","aggressive");
set("age",60);
set("int",30);
set("per",30);
set("str", 15);
set("con", 30);
set("force",400);
set("max_force",400);
set("combat_exp", 250000);
set_skill("force",50);
set_skill("dodge",50);
set_skill("parry",50);
setup();
add_money("gold",5);
}

int accept_kill(object who)
{
   say("С�һ��Ҳ��Ը��ң�̫�Դ��ˣ���\n"
        +"������Ҳ�Ǻ������ı���ʹѽ����!\n");
   setup();
   return 1;
}
void die()
{
   object head;
 
   say(HIG"�ɶ���ħ����󷨸���ɣ�\n"NOR);
   tell_object(this_player(),"��һ���̵���ʧ�ˣ�ֻ������һ����ħ�����....\n");
   head=new("/open/killer/obj/evilgod.c");
   head->move(this_player());
   destruct(this_object());
}