#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set("title","С��");
set_name("ʱ��",({"chi-li","chi","li"}));
set("long","ΪĪ���������֮�㣬�ഫ��Ҷ�³����������㡣\n");
set("race","����");
set("gender","����");
set("attitude","aggressive");
set("limbs", ({ "ͷ��", "����",  "β��" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",40);
set("int",30);
set("per",30);
set("str", 30);
set("con", 30);
set("force",300);
set("max_force",300);
set("max_kee",800);
set("kee",800);
set("combat_exp", 80000);
set_skill("move",80);
set_skill("dodge",80);
set_skill("parry",60);
setup();
}
