
inherit NPC;

void create()
{
        set_name("咕咕鸟", ({ "bird" }) );
        set("long", "他是此区域次低等的练功兽。\n");
	set("race","野兽");
        set("age", 5);
        set("str", 10);
	set("con", 9);	
	set("max_gin", 1000000);
        set("max_kee", 1000000);
	set("max_sen", 1000000);
        set("gin", 1000000);
        set("kee", 1000000);
        set("sen", 1000000);
        set("limbs", ({ "喙子", "头部", "脖子", "翅膀", "爪子" }) );
        set("verbs", ({ "claw", "poke" }) );		
        set("combat_exp", 10000);
	setup();
        
}
