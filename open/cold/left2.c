// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","��������ſ�");
	set("long", @LONG
������Ǻ�������������ڣ��ڵ��ſڣ�ɢ��һ����ĺ�����
���˸е��˴���ׯ�ϣ��˴����Ǽ������������ȵĿ�ɽ��ʦ����
�����������ϵġ�����Ů�ɡ�ת���������ò����ˣ���ɽ������
ǧ���򻯣��������ܡ�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"enter":COLD_ROOM"lin1",
	"east":COLD_ROOM"left1",
	"west":COLD_ROOM"left3",
	"southwest":COLD_ROOM"left4",
]));
	set("objects",([
	COLD_NPC"trainee8":1,
	]));
	setup();
	replace_program(ROOM);
}
