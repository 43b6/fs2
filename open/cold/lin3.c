// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","������");
	set("long", @LONG
���������������ͨ���Ƿ�����ͨ�����������˳�֮Ϊ
������������ֻ��Ϊ�γ���������������δ��֪��

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":COLD_ROOM"lin1",
	"west":COLD_ROOM"lin5",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
