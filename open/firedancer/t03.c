inherit ROOM;
#include <ansi.h>

void create()
{
	set("short",HIC"������ÿ�"NOR);
	set("long",@LONG
��̤����ʯ���ڵ�ĳһ�������У����ܲ�û��ǽ�ڣ���Ӳ��Ҫ˵
�ǵĻ����������������߲ʹ�Ӧ�þ������˰ɡ�
LONG);
	set("objects",([
__DIR__"npc/rose_finch":1,
]));
	set("exits",([
"west":__DIR__"t01",
]));
	set("no_die_room",1);
	setup();
}