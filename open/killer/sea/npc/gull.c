#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("��Ÿ",({"gull"}));
set("long","�����ں�������ϣ��Գ���Ϊ����ѩ�׵ĳ��ɷ�Ǻÿ�\n");
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
set("force",420);
set("max_force",420);
set("max_kee",800);
set("kee",800);
set("combat_exp", 8000);
set_skill("dodge",30);
setup();
}