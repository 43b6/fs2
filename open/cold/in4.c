// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","�����񹬺���");
	set("long", @LONG
�����Ǳ����񹬵ĺ��������ڱ��������зִ�����������������
������������������ǹ���ƽʱ��������֮����ÿ������������һЩ
����֮�󣬳������ڴ���Ϣ����������������Ⱥ���裬�������֣�����
�ϣ�����һ�ɵ����˶�ʮ�����ţ�������Ҳ�����⡣

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"south":COLD_ROOM"in1",
	"north":COLD_ROOM"in5",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
