// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","���ͤ");
	set("long", @LONG
������Ǻ��������ġ����ͤ�����ڴ˴����羰��������ÿ����
�������������촵�����������Կ�������һ�ɵĵ����ڴ���������
����������������ͤ��̸�죬��������������һ�����֣����־���
���˾��ú������ɾ�һ�㡣

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"right3",
]));
	set("objects",([
	COLD_NPC"trainee":1,
	COLD_NPC"trainee1":1,
	]));
	setup();
	replace_program(ROOM);
}
