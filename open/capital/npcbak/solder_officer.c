#include <ansi.h>

inherit NPC;
inherit F_SOLDIER;
void create()
{
	set_name("�������� �����",({"officer li"}));
	set("gender","����");
          set("attitude","heroism");
	set("combat_exp",1000000);
          set("age",47);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("soldier_list",([
	"soldier":"��ʿ(soldier)",
	"fighter":"��ʿ(fighter)",
	"guard":"����(guard)"
	]));
	set("soldier_lv",([
	"soldier":2,
	"fighter":5,
	"guard":8,
	]));
	setup();
}

