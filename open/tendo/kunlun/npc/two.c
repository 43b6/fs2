//vendor.c
#include "/open/open.h"
inherit F_VENDOR;

void create()
{
	set_name("店小二",({"vendor"}));
	set("gender", "男性" );
	set("age", 27);
	set("long", @LONG
	肩上披着毛巾，正忙得不可开交。
LONG
	);
	set("combat_exp",7000);
        set("attitude", "friendly");
        set_skill("dodge", 40);
        set_skill("unarmed", 20);
	set("vendor_goods", ({
	"/open/tendo/kunlun/obj/leg",
	"/open/tendo/kunlun/obj/bread",
	"/open/tendo/kunlun/obj/tea",
	"/open/tendo/kunlun/obj/wine",
	}) );
	setup();
	carry_object("/open/tendo/kunlun/eq/towel")->wield();
	add_money("coin",35);
}

void init() {
        object obj;

        ::init();
        if(interactive(obj=this_player()) && !is_fighting())

        {
        remove_call_out("greeting");
        call_out("greeting",1,obj);
        }
}
void greeting(object ob)
{
        command("say 欢迎！！  客倌要点什么吗？");
}
