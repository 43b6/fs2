#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("����",({"hake"}));
set("long","һ�ֿ�ʳ�õ����࣬��˵��ɱ����������������˿������������˿\n");
set("race","����");
set("gender","����");
set("attitude","heroism");
set("limbs", ({ "ͷ��", "����",  "β��" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",20);
set("int",30);
set("per",30);
set("str", 25);
set("con", 30);
set("force",250);
set("max_force",50);
set("max_kee",200);
set("kee",200);
set("combat_exp", 800);
setup();
}