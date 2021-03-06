// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","西侧神殿门口");
	set("long", @LONG
这里就是寒谷西侧神殿的入口，在殿门口，散出一阵阵的寒气，
让人感到此处的庄严，此处乃是祭拜着玄冰寒谷的开山祖师，相
传她乃是天上的「冰谷女仙”转世，法术好不惊人，移山倒海，
千变万化，无所不能。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"enter":COLD_ROOM"lin1",
	"east":COLD_ROOM"left1",
	"west":COLD_ROOM"left3",
	"southwest":COLD_ROOM"left4",
]));
	set("objects",([
	COLD_NPC"trainee8":1,
	]));
	setup();
	replace_program(ROOM);
}
