//vendor.c
#include "/open/open.h"
inherit F_VENDOR;

void create()
{
	set_name("小贩",({"vendor"}));
	set("gender", "男性" );
	set("age", 27);
set("long", @LONG

  四处设摊卖些小东西的人, 你可以列出(list)他卖些什么...
  
LONG
	);
	set("combat_exp",576);
        set("attitude", "friendly");
        set_skill("dodge", 40);
        set_skill("hammer", 20);
        set_skill("parry", 30);
	set("vendor_goods", ({
		"/obj/example/besttea",
		"/obj/example/dumpling",
		"/obj/example/chicken_leg",
	}) );
	setup();
	add_money("coin",35);
}

void init()
{	
	::init();
	add_action("do_vendor_list", "list");
}

void greeting(object ob)
{
	if( !ob || environment(ob) != environment() ) return;
        switch( random(4) ) {
		case 0:
		say("小贩靠近你小声的说: 这位"+RANK_D->query_respect(ob)
			+"来买些东西吧!\n");
			break;
		case 1:
                say("小贩嘶声么喝道: "+RANK_D->query_respect(ob)
                        +"过来看看吗!?\n");
			break;
                case 2:
                say("小贩大声招呼道: 端阳节已经过完了, "
                     + RANK_D -> query_respect( ob )
                     + "来看点别的吧?\n");
                        break;
                case 3:
                say("小贩在你耳边悄悄地说: 嘿, "
                     + RANK_D -> query_respect( ob )
                     + ", 这儿可是有卖以我祖传秘方特制的\n"
                     + "　　　　　　　　　　　冻顶乌龙茶, 别的地方绝对买不到喔!\n");
                        break;
              	}
}
