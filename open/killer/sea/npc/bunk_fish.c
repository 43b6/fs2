#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("��ͷ��",({"Bombay duck","duck"}));
set("long","�ټ������࣬�������Ѿ�������ֵĵط�����Ȼ��ô�������㶼���ĵ�\n");
set("race","����");
set("gender","����");
set("attitude","heroism");
set("limbs", ({ "ͷ��", "����",  "β��" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",50);
set("int",30);
set("per",30);
set("str", 50);
set("con", 30);
set("force",1800);
set("max_force",1800);
set("max_kee",2000);
set("kee",2000);
set("combat_exp", 35000);
set_skill("dodge",60);
setup();
}