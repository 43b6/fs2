// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","�������������");
	set("long", @LONG
����ڶ������������������Ĳ�����ͬ���ģ�����Ҳ�ǿտյ���
�ģ�ֻ������ǽ������һ��������

        ����֪�����黳����֪�������� ?��

	��������Ӱ��˼���Ѷ�����Ե�档��

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":COLD_ROOM"in1",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
