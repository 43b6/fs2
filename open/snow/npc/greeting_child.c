#include <ansi.h>

inherit NPC;
  inherit F_MASTER;
void create()
{
	set_name("С��",({"greeting child","child"}));
		set("gender","����");
	set("combat_exp",1098);
	set("attitude","peaceful");
	set("age",15);
		set("str",29);
		set("cor",20);
		set("int",25);
		set("cps",15);
		set("per",20);
	set("max_force",150);
	set("force",150);
	set_skill("literate",11);
	set_skill("blade",12);
	set_skill("dagger",11);
	set_skill("move",12);
	set_skill("force",15);
	set_skill("dodge",12);
	set_skill("parry",13);
	set_skill("sword",11);
	set_skill("unarmed",15);
	set_skill("snow-martial",16);
	set_skill("snowforce",15);
	map_skill("force","snowforce");
	set_skill("black-steps",15);
	map_skill("dodge","black-steps");
	map_skill("unarmed","snow-martial");
	setup();
}

