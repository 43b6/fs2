#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("С��ȸ",({"auklet"}));
set("long","��ں�������ϣ��Գ���Ϊ�����������಻֪����������������\n");
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
set("force",620);
set("max_force",620);
set("max_kee",1100);
set("kee",1100);
set("combat_exp", 12000);
set_skill("dodge",40);
setup();
}