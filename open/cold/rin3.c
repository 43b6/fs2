// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","西厢房");
	set("long", @LONG
这里是行宫的西侧厢房，住的都是一些较为资深的弟子，别
看她们都很年轻，其实早已在此住了好一段时日了，想当然，她们的根基
必定不浅，若想乱动她们，没有相当的实力，恐怕会死无葬身之
地。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":COLD_ROOM"rin1",
]));
	set("objects",([
	COLD_NPC"trainee9":1,
	]));
	setup();
	replace_program(ROOM);
}
