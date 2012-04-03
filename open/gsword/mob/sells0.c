// /open/center/npc/vendor.c
#include "/open/open.h"

inherit F_VENDOR;

void create()
{
	set_name("王铁匠", ({ "wang" }) );
	set("gender", "男性" );
	set("age", 42);
	set("long", @LONG
他是蜀中铁铺的老板,你可以问问他有在卖甚么(list).
LONG);
	set("attitude", "friendly");
	set("combat_exp",163);
	set_skill("dodge",20);
	set("vendor_goods", ({
            GS_OBJ"woodsword",
	    GS_OBJ"sword",
            GS_OBJ"woodblade",
	    "/obj/example/dagger",
	    "/open/gblade/obj/blade",
            "/open/ping/obj/fan-2",
	    "/open/poison/obj/longwhip",
	    "/open/gblade/obj/pen",
	}) );

	set("greeting_msg", ({
 	    "王铁匠说: 来ㄡ!! 来ㄡ!! 快来快买,晚来晚买!!\n",
	    "王铁匠喊道: 王铁匠武器超值大拍卖!! \n",
        "王铁匠叫道: 先生小姐,买把武器防身吧!! 当色狼,打色狼,都很实用喔!!\n",
	}) );
	setup();
        carry_object("/open/gsword/obj/dirty_cloth")->wear();
	carry_object("/obj/example/dagger")->wield();
}
