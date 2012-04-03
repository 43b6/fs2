#include <ansi.h>

inherit PARTY_NPC;
void create()
{
	set_name("������",({"guard"}));
	set("gender","����");
	set("combat_exp",30000);
	set("attitude","heroism");
	set("is_soldier",1);
	set("age",30);
	set("str",38);
	set("con",30);
	set("cps",25);
	set("max_force",250);
	set("force",250);
	set("force_factor", 5);
	set_skill("sword",60);
	set_skill("shasword",40);
	set_skill("dodge",60);
        map_skill("sword","shasword");
	setup();
	carry_object("/obj/longsword")->wield();
}

