#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
	set_name("ڤ����ʿ",({"guard"}));
	set("gender","����");
	set("class","poisoner");
	set("combat_exp",30000);
	set("age",26);
	set("force_factor",5);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("force",350);
	set("max_force",350);
	set_skill("unarmed",60);
	set_skill("dodge",60);
	set_skill("move",60);
	set_skill("nine-steps",20);
	map_skill("dodge","nine-steps");
	map_skill("move","nine-steps");
	set_skill("poison",60);
	set_skill("coldpoison",60);
	map_skill("poison","coldpoison");
	set_skill("parry",50);
	set_skill("force",60);
	set_skill("poisonforce",60);
	map_skill("force","poisonforce");
	setup();
}
