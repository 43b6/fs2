#include <ansi.h>

inherit NPC;
  inherit F_MASTER;
void create()
{
	set_name("ѩ������",({"snow guard","guard"}));
		set("gender","����");
	set("combat_exp",22948);

          set("attitude","heroism");
	set("age",20);
	set("str",38);
	set("cor",30);
	set("cps",25);
	set("per",22);
	set_skill("blade",25);
	set_skill("dodge",30);
	set_skill("force",32);
	set_skill("move",32);
	set_skill("parry",34);
	set_skill("sword",30);
	set_skill("snowforce",36);
	set("force",400);
	set("max_force",400);
	set_skill("unarmed",35);
	set_skill("snow-martial",40);
	set_skill("black-steps",40);
	map_skill("dodge","black-steps");
	map_skill("unarmed","snow-martial);[D[D");
	map_skill("force","snowforce");
	setup();
}

