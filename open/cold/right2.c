// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","˪���");
	set("long", @LONG
����·���Ǻ���������˪�������һ���ļ����������ĵ���
���أ��������Ϊ�����У����罻��֮�������ÿÿ���´����ı�˪
����˪�������һ���Ʈ�㣬�ʴ˴�����Ϊ�����澰֮һ��˪�����

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"right1",
	"east":COLD_ROOM"right3",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
