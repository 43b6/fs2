#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("��ȸ",({"auk"}));
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
set("force",650);
set("max_force",650);
set("max_kee",1350);
set("kee",1350);
set("combat_exp", 15000);
set_skill("dodge",50);
setup();
}