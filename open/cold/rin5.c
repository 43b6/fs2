// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","�ڲ��᷿");
	set("long", @LONG
�������й����ڲ��᷿��ͨ��������һ��֮�У�
���ݽϸ��߶�ס������ڴ˴����ˣ�����������ǿ
�����Բ������ӡ�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"south":COLD_ROOM"rin4",
]));
	set("objects",([
	COLD_NPC"ann":1,
	]));
	setup();
	replace_program(ROOM);
}
