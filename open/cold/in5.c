// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","�����Է�");
	set("long", @LONG
�����Ǳ����񹬹���Ҳ���Ǻ���һ�ɵ������˵��Է���ƽ����
һ�������ǲ����������ģ���ʹ���ŵ���Ҳ������˵�����ͽ�
����û��ʲô��������飬��ò�Ҫ�Ҵ������⹬�������������
���൱�����˵��¡�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"south":COLD_ROOM"in4",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
