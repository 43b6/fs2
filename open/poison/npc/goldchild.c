#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
	set_name("��ͯ",({"gold child","child"}));
	set("gender","����");
	set("class","poisoner");
	set("combat_exp",1290);
	set("age",12);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("force",300);
	set("max_force",300);
	set_skill("dodge",10);
	set_skill("nine-steps",25);
	set_skill("unarmed",15);
	map_skill("dodge","nine-steps");
	setup();
	carry_object(POISON_OBJ"huwhip")->wield();
}
