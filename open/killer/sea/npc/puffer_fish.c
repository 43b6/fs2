#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("����",({"puffer fish","puffer","fish"}));
set("long","һ����ֵ��㣬�����ж�������ʱ�Ὣ��������������ֵĺܿɰ�\n");
set("race","����");
set("gender","����");
set("attitude","heroism");
set("limbs", ({ "ͷ��", "����",  "β��" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",20);
set("int",30);
set("per",30);
set("str", 20);
set("con", 30);
set("force",100);
set("max_force",200);
set("max_kee",200);
set("kee",300);
set("combat_exp", 1000);
setup();
}