inherit NPC;

void create()
{
	set_name("副总管 哈常", ({ "master ha","master","ha" }) );
	set("race", "人类");
	set("age", 40);
	set("gender", "男性");
	set("long",
"哈常是干通天在年少结交的伙伴, 这么多年来, 在干通天的身旁不知做了多少大大"+
"小小的事, 因此当干通天发达后, 便派给他这么一个凉差, 以感谢其辛劳。\n"
            );
        set( "inquiry", ([
             "name" : "在下哈常, 不知阁下有何指教。",
             "干通天" : "他是我一生中最佩服的人了。",
             		]));
	set("str",22);             

	set("attitude", "friendly");
        set_temp("apply/attack", 50);
        set("combat_exp",10484);
	setup();
        add_money("silver",10);
        
}

