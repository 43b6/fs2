// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","���᷿");
	set("long", @LONG
�����Ƕ����᷿����ͷס���Ǻ��ȵ�����������ǳ�ߣ�
���ں���һ��ֻ��������ò��Ů�ӣ����ԣ������⣬�㲻��
��̾һ������������������������ɡ�����������ɫ��
������Ů��

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"rin1",
]));
	set("objects",([
	COLD_NPC"trainee5":1,
	COLD_NPC"trainee6":1,
	]));
	setup();
	replace_program(ROOM);
}
