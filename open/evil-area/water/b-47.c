inherit ROOM;
#include <ansi.h>

void create()
{
        set("short",HIG"�� �� �� -- �� Ժ"NOR);
	set("long",@LONG
���ڵ�װ��ʮ�ֵ����أ�����һ�Ŵ��ʯ����һЩľ�����⣬��
û�������İ����ˡ�
LONG);
        set("evil_area",1);
        set("no_transmit",1);
	set("exits",([
"out":__DIR__"b-26",
]));
	setup();
}
