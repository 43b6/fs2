// Room: /u/w/wade/room/test.c

#include <room.h>
inherit ROOM;

void create()
{
	set("short", "Կ�׷�");
	set("long", @LONG



                 ���������ר�ò��Է�




LONG
	);

	set("exits", ([
	    "east"	:	"/u/w/wade/workroom"
	]));
	set ("need_key/east", 1);
	create_door("east", "�������", "west", DOOR_CLOSED);

	set("no_clean_up", 0);
	set("light", "1");
	set("valid_startroom", 1);
	setup();
	replace_program(ROOM);
}
