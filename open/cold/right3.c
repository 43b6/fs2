// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","�����й��ſ�");
	set("long", @LONG
�����Ǻ��ȵĶ����й���ڣ��ɴ˴����ɽ��붫���й�������ͨ��
�����澰��˪��������������ǡ����ͤ��������ͨ����Ȱ��԰������
����ƽʱ����֮����

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"right2",
	"south":COLD_ROOM"right4",
	"east":COLD_ROOM"right5",
	"enter":COLD_ROOM"rin1",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
