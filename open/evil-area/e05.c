inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",BBLU+YEL"��а��"NOR);
	set("long",@LONG
��һ����ҫ�Ž��ɫ��â���ķ��οռ���, ��һ���ƽ���������
վ����һ����˶�����Ļƽ���ǰ, �ƽ�������˫Ŀֱ��������̤����
�����ڵ���, ��Ȼ, Ҳ����������...
LONG);
	set("objects",([
__DIR__"npc/golden_guard":1,
]));
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"e04",
]));
	setup();
}

