#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("����",({"cockle"}));
set("long","�����һ�֣������ں�����Ȼ�Ǿ����˺�����\n");
set("race","����");
set("gender","����");
set("attitude","heroism");
set("limbs", ({ "ͷ��", "����" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",40);
set("int",30);
set("per",30);
set("str", 40);
set("con", 30);
set("force",600);
set("max_force",600);
set("max_kee",1300);
set("kee",1300);
set("combat_exp", 10000);
set_skill("dodge",50);
setup();
}