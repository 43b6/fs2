#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "广场小径");
	set ("long", @LONG
在练武广场东方的一条小径，这条小径看上去似乎不怎么起眼的
样子，但却是四通八达，小径的前方绵延着许多的景物，令你不禁想
更往前去看一看。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"east"	: __DIR__"manor36",
	"west"	: __DIR__"manor27",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
