// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","����С·");
	set("long", @LONG
�����Ǳ����񹬶����һ����ֱС·��·������һ����ϸϸ��Сʯ��
������ֱ�б��Ƕ����й�����˵�����й���ס��ȫ���Ǻ���һ�ɵĵ���
�����ڶ����й�ǰ��һ�����͵�У������ƽ�����ȵ���������֮����

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"home1",
	"east":COLD_ROOM"right2",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
