inherit NPC;

void create()
{
	set_name("老鹰", ({"eagle"}));
	set("race", "野兽");
	set("age",10);
set("long","双眼炯炯有神的大老鹰,高高的站在枝头上俯视四方.\n");
	set("str",25);
	set("limbs", ({ "头部", "身体","双脚" , "双眼"}));
	set("verbs", ({ "poke", "claw"}));
		
        set("attitude","friendly");
	set("kee",100);
	set("combat_exp",8000);
	set("max_kee",100);
	setup();
}

