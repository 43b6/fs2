#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "走廊");
	set ("long", @LONG
灵阁外的走廊，南北各通往一间灵阁，南边的是葵灵阁，北边的
是转灵阁，往西边可以通往另一段走廊，走廊两旁的景物朴实简单却
又不失高雅。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor17",
	"south"	: __DIR__"manor16",
	"west"	: __DIR__"manor05",
	]));

	set("light_up", 1);

	setup();
}
