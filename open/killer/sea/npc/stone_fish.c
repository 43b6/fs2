#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("ʯ����",({"stone fish","stone","fish"}));
set("long","���ա����ⲻ���������ô�������������أ���\n");
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
set("max_kee",500);
set("kee",500);
set("combat_exp", 20000);
set_skill("dodge",30);
set_skill("parry",30);
setup();
}