// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","�й�����");
	set("long", @LONG
������й��ĺ���������һ�ɵ���ƽʱû��ʱ��
ż�������˴��ۼ���̸�����ĵģ��ò����֣�����
ÿ������Ҫ�ۻ�ʱ��Ҳ�����ڴ˴��п����������
���Ǻ��ȵ�������ء�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"south":COLD_ROOM"rin1",
	"north":COLD_ROOM"rin5",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
