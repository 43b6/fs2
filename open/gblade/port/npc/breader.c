// /open/center/npc/vendor.c
#include "/open/open.h"
inherit F_VENDOR;
void create()
{
	set_name("面包师父",({"breader"}));
	set("gender", "男性" );
	set("age", 42);
	set("long", @LONG
一个矮矮胖胖的面包师父 , 看他这副德行做出来的面包
会好吃吗 ? 
LONG);
	set("attitude", "friendly");
	set("combat_exp",2000);
	set_skill("dodge",20);
	set_skill("unarmed",50);
	set_skill("parry",50);
	set("vendor_goods", ({
	"/open/gblade/port/obj/bread",
	}));
	set("greeting_msg", ({
 	    "面包师说道: 来喔 !来喔 ! 皇帝最喜欢吃的波萝面包喔 !\n",
	    	}) );
	setup();
	add_money("silver",1);
	
}
