#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set("title","���а���");
set_name("����",({"fish"}));
set("long","�ֲ��ĺ���������ļ�������˺���������\n");
set("race","����");
set("gender","����");
set("attitude","aggressive");
set("limbs", ({ "ͷ��", "����",  "β��" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",99);
set("int",20);
set("per",20);
set("str", 99);
set("con",20);
set("force",500);
set("max_force",500);
set("max_kee",900);
set("kee",900);
set("combat_exp",80000);
set_skill("dodge",50);
setup();
}