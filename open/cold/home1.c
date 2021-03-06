// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","宝珍神宫大门");
	set("long", @LONG
这里是宝珍神宫的大门，里面直通大殿，而两侧通往侧殿，
大殿里是掌门平常管理神宫事务之所，而两旁侧殿则是一般弟子
居住之所。两旁的大门直耸而立，如两头巨象站立一般，若非亲
眼所见，实在不敢想像世间上有这种大门。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"enter":COLD_ROOM"master_room",
	"west":COLD_ROOM"left1",
	"east":COLD_ROOM"right1",
]));
	set("objects",([
	COLD_NPC"trainee7":1,
	]));
	setup();
	replace_program(ROOM);
}
