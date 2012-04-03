// peacock.c by roger

inherit NPC;

void create()
{
	set_name("白羽鳞", ({ "white-fish","fish" }) );
	set("long",@LONG
         这是前七代楼主从塞北带回
         的稀有鱼种, 正悠游地在水
         中嬉戏着.
LONG);
	set("race","野兽");
	set("age", 2);
	set("str", 6);
	set("con", 6);
	set("max_gin", 60);
	set("max_kee", 200);
	set("max_sen", 60);

	set("limbs", ({ "嘴", "鳃", "左鳍", "右鳍", "尾鳍" }) );
        set("verbs", ({"bite"}) );
	set("chat_chance", 4);
	set("chat_msg", ({
	"\n       鱼儿～～鱼儿～～水中游～～\n",
	}) );
		
	set("combat_exp",6000);
	setup();
	add_money("coin", 1);
}
