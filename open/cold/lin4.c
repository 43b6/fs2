// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","������");
	set("long", @LONG
���������Ĳ��ң�����ͷ����ŵ���һЩ�����õ���Ʒ��
�ƹ������������ǽи���ĵ��ӣ�ÿ�����ü�������ˣ�����
����Ʒ�ڴ˷��ú�����

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"lin1",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
