#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("����������",({"barracuda"}));
set("long","����ʲô��ѽ�����������������໹�����Ү........n");
set("race","����");
set("gender","����");
set("attitude","heroism");
set("limbs", ({ "ͷ��", "����",  "β��" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",20);
set("int",30);
set("per",30);
set("str", 35);
set("con", 30);
set("force",500);
set("max_force",500);
set("max_kee",1500);
set("kee",1500);
set("combat_exp", 5000);
setup();
}