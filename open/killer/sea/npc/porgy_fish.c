#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("������",({"porgy"}));
set("long","�����������治�У���Ȼ������ȫ���̵���Ҳ��\n");
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
set("force",150);
set("max_force",400);
set("max_kee",400);
set("kee",300);
set("combat_exp", 3000);
setup();
}