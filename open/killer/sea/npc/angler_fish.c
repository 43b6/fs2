#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("��\����",({"angler"}));
set("long","����С�������̣��̱���\�ð���������������㡣��\n�Ǻǡ�����������������һ�ֺ�������\n");
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
set("max_kee",180);
set("kee",180);
set("combat_exp", 700);
setup();
}
