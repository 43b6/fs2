// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","�Ƿ����");
	set("long", @LONG
 
 
		��  ��  ��  ��  ��  ��
 
 

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
