// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","Ȱ��԰");
	set("long", @LONG
������Ǻ��ȶ����й�ǰ�ġ�Ȱ��԰�����Ǻ���һ�ɵ��ŵ���
ƽ����ϰ�ɷ�������֮������ƽʱ����ʦ����Ǿ���һ�𣬻�����
ϰ�ɷ��������д����գ��Լ�������ʱҲ������̽���ŵ�����ϰ��
���Ρ�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"north":COLD_ROOM"right3",
]));
	set("objects",([
	COLD_NPC"trainee2":1,
	COLD_NPC"trainee3":1,
	]));
	setup();
	replace_program(ROOM);
}
