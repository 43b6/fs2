// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","�����񹬴���");
	set("long", @LONG
�����Ǳ����񹬵Ĵ��ţ�����ֱͨ��������ͨ����
�����������ƽ������������֮���������Բ������һ�����
��ס֮�������ԵĴ���ֱ�ʶ���������ͷ����վ��һ�㣬������
��������ʵ�ڲ������������������ִ��š�

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
