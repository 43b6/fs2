#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("��ǹ��",({"tuna"}));
set("long","�������㣬����һ�ֶ�孵����ϳ��������࣬ζ����Ϊ����\n");
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
set("max_kee",300);
set("kee",300);
set("combat_exp", 7000);
set_skill("dodge",10);
setup();
}