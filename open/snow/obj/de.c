inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIG "����֮��" NOR,({"de"}));
	set("unit","֧");
	set("value",20000);
        setup();
}
int query_autoload() { return 1; }
