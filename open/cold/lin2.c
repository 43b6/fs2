// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","�������");
	set("long", @LONG
��������������������ͷ��һƬ�յ����ģ�û���κζ���
�����˸е����������Ƿ���ʲô��ı��������ʲô��������� ?
ֻ������и����ŵ�С������ʱ�Ĵ�������ı��磬���˲�����
����

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"south":COLD_ROOM"lin1",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
