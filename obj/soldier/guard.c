#include <ansi.h>

inherit PARTY_NPC;
void create()
{
	set_name("����",({"guard"}));
	set("gender","����");
        set("combat_exp",15000);
	set("attitude","heroism");
	set("is_soldier",1);
	set("age",20);
	set("str",38);
	set("cor",30);
	set("cps",25);
	set("per",22);
	set_skill("sword",60);
	set_skill("dodge",60);
	set_temp("apply/attack",30);
	set_temp("apply/dodge",30);
	setup();
	carry_object("/obj/longsword")->wield();
}

