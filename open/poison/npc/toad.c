#include <ansi.h>
#include "/open/open.h"
inherit NPC;


void create()
{
	set_name("�����", ({"poison toad","toad"}) );
	set("gender","����");
	set("age",10);
	set("race","Ұ��");
	set("limbs",({"ͷ��","ǰ��","����","����"}) );
	set("verbs",({"bite"}) );
	set("combat_exp",200);
	set_skill("dodge",5);
	set("long","һֻ�ж������.\n");
	set("attitude","peaceful");
	set_skill("unarmed",10);
	set("chat_chance", 6);
	set("chat_msg", ({
		"�����:������������\n",
}) );
	setup();
}
