// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","�����񹬶������");
	set("long", @LONG
�����Ƕ���Ĳ�����է��֮�²���ʲô����֮����ֻ���ڱ����
ǽ���Ϲ���һ���ڻ������滭��һ����Ů�������϶����Ƶģ�����
�ɻ��������Ϊ������ôһ�������Ƿ�������������ʲô�����
���� ?

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"in1",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
