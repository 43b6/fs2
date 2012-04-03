// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","内侧厢房");
	set("long", @LONG
这里是行宫的内侧厢房，通常，寒谷一派之中，
辈份较高者都住在这里，在此处的人，个个法术高强
，决对不可轻视。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"south":COLD_ROOM"rin4",
]));
	set("objects",([
	COLD_NPC"ann":1,
	]));
	setup();
	replace_program(ROOM);
}
