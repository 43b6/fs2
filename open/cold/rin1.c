// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","�й�����");
	set("long", @LONG
�������й������������ں���һ�ɵĵ���һ����Ź��ɵ�����
��ÿ��һ���磬���е��Ӷ�Ҫ�����Ｏ�ϣ�Ȼ�����ܽ�ʦ������
����֮����һ�𵽡�Ȱ��԰��ȥ��ϰ��

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"rin3",
	"east":COLD_ROOM"rin2",
	"north":COLD_ROOM"rin4",
	"out":COLD_ROOM"right3",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
