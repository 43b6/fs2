// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
set("short","����¥");
	set("long", @LONG
�����Ǻ�������Ϊ���ŵ�һ���ط�����Ի������¥��������
��ϰ�ɷ������������Ȼ����һ�������ǰ��Ѳ��˺쳾���µ�
飬�����������ǻ��һЩ�������˴��������ԣ����Լ�����
ƽ��������

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"northeast":COLD_ROOM"left2",
]));
	set("objects",([
	COLD_NPC"trainee4":1,
	]));
	setup();
	replace_program(ROOM);
}
