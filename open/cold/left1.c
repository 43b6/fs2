// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","����С·");
	set("long", @LONG
�������ɱ���������ͨ���������ıؾ�С������С����������
�����ٲݣ�����ʮ��ïʢ�����⣬�������񹬲����ǽ�ڣ���Ȼ��û
��ʲô��������Σ�ȴ������ɢ����һ�ɺ��������˿��˲�������һ��
������

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":COLD_ROOM"home1",
	"west":COLD_ROOM"left2",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
