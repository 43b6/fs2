// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","�����񹬴��");
	set("long", @LONG
�����Ǻ���һ�ɵĸ��ݵأ��������Ǻ��ȵ���������ס�ĵط���
�ڴ����ϣ���һ����ѩ��Ƥ���ŵı�����������װ��ȴ��ʮ�ֵĵ�����
������ʾ�����ȵ����壬Ȼ���ڱ���֮����һ���α�־���Ǻ���һ�ɵ�
�������ഫ�ţ������ɵ�������ÿ�춼Ҫ��ֻ���α�־�¾����Ա�ʾ��
ǰ��ʦ����𾴡�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"out":COLD_ROOM"home1",
	"north":COLD_ROOM"in1",
]));
	set("objects",([
	COLD_NPC"master":1,
	]));
	set("valid_startroom", 1);
	setup();
	replace_program(ROOM);
}
