// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
set("short","����С��");
	set("long", @LONG
�����Ǻ��ȵġ�����С�������ں���һ�ɿ�ɽ��ʦ����������֮
ʱ����δ�б����񹬼��й������ȣ�����ʱ����һ�ɵĿ�ɽ��ʦ��
�Ǿ�ס�ڴˣ���Ի������С��������������Ȼʲô��ª��ȴ����һ��
ǰ�����ŵ���Ϣ���ڡ�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"southeast":COLD_ROOM"left3",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
