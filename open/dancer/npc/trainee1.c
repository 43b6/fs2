// For the new hand of dancer ...//purple
#include "/open/open.h"
inherit NPC;
void create()
{
	set_name("稚龄少女", ({ "yanggirl" }) );
	set("title", "夜梦小筑见习生");
	set("gender", "女性");
	set("long", "慕名而来，欲拜月牙儿为师，而成为舞者的见习生。\n");
	set("age",12);
	set("attitude", "heroism");
         set("kee",1000);
        set("max_kee",1000);
	set("combat_exp",2300);
	setup();
}
