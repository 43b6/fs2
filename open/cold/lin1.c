// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","�������");
	set("long", @LONG
���������������������ǰ����������������ȿ�ɽ��ʦ��
���񣬾�˵���꣬�������ȵĿ�ɽ��ʦ�����ڴ˴��������ɵģ���
����ŵ���Ϊ������ʦ������ڴ˴����˼����������ݡ�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":COLD_ROOM"lin4",
	"north":COLD_ROOM"lin2",
	"west":COLD_ROOM"lin3",
	"out":COLD_ROOM"left2",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
