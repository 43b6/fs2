#include "/open/open.h"
inherit NPC;
void create()
{
	set_name("初级练习生", ({ "trainee" }) );
	set("title", "黑牙联");
	set("gender", "男性");
	set("long", "这是杀手最下级的练习生。\n");
	set("age",12);
	set("attitude", "heroism");
	set("kee",400);
	set("max_kee",400);
	set("combat_exp",1000);
	setup();
}