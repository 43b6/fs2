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
   object killer=query_temp("last_damage_from");
   
 if ( !present("menu",killer) )  //�������Ƿ���ɱ������
{
   say(HIG"�ɶ���ħ����󷨸���ɣ�\n"NOR);
   message_vision(HIG"��һ���̵���ʧ�ˣ�ֻ������һ����ħ�����....\n",this_object());
   message_vision("�������⣬ȡ����ħ�����ʱ����Ȼһ��������Ϯ��\n������Ѫ���ڣ���赹�ˣ��ڻ赹ǰ����\n"NOR,this_object());
   message_vision(HIY"����(ħ��ɱ֮��)���Ǳ���ס�ģ��ɶ��Ҷ������\n"NOR,this_object());
   killer->set_temp("hurt",1);
   killer->move("/open/killer/room/outr4.c");
   destruct(this_object());
}
 else
 {
  say(HIG"Ϊ��ɱ��������ɱ�ң�..........�ɺ�ѽ....��Ȼ�������������....����ѽ....\n"NOR);
   head=new("/open/killer/obj/hou_head.c");
   head->move(this_object());
 }
::die();
}
