#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("����",({"sailfish","fish"}));
set("long","����ĺ��а������޴�������������������������һ��ʱ��Ե���\n");
set("race","����");
set("gender","����");
set("attitude","heroism");
set("limbs", ({ "ͷ��", "����",  "β��" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",40);
set("int",30);
set("per",30);
set("str", 30);
set("con", 30);
set("force",300);
set("max_force",300);
set("max_kee",700);
set("kee",700);
set("combat_exp", 70000);
set_skill("dodge",80);
setup();
}