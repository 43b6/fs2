// 铁链
#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("铁链",({"iron ligature","iron","ligature"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","条");
        set("value",30000);
        set("no_get", 1);         
	set("material","iron");
	set("rigidity",50);
	set("long",
	"这是一条精钢所铸得铁链。\n");
	}
	init_whip(110);
	setup();
}
