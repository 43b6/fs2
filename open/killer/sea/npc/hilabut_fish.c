#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("���Ŀ��",({"hilabut"}));
set("long","�ۡ�������ֻ�۾�������ͬһ��Ү����������ֵ�����\n");
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
set("max_force",450);
set("max_kee",450);
set("kee",450);
set("combat_exp", 4000);
setup();
}