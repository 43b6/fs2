// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","����������");
	set("long", @LONG
�����Ǳ����񹬵�������ͨ�������Ӽ���Ͷ���������ط�
��һ����ԣ������ǹ�����������֮����������ȴ�ǹ���������
��ĵط���ÿ������Ҫ�������֮ʱ����ᷢ���ڹ����ڴ˽Ӵ�
���������������һ�Ÿ�������ŵ��ӡ�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"north":COLD_ROOM"in4",
	"west":COLD_ROOM"in2",
	"east":COLD_ROOM"in3",
	"south":COLD_ROOM"master_room",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
