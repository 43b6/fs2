// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","«��С��");
	set("long", @LONG
�ɺ��ȵ�����������������������«��С����������������
������������һ���ؾ���«�񡱣���������ͱ������ų�ǧ�����С
���ӣ��ഫ�Ǻ���һ�ɿ�ɽ��ʦ��ϰ�ɷ������µ��澰�����˳�֮Ϊ��
«�񡱡�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":COLD_ROOM"left2",
	"northwest":COLD_ROOM"left5",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
