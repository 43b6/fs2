// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","非凡神间");
	set("long", @LONG
 
 
		【  非  凡  神  间  】
 
 

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":COLD_ROOM"lin3",
]));
	set("objects",([
	COLD_NPC"lishow":1,
	]));
	setup();
	replace_program(ROOM);
}
