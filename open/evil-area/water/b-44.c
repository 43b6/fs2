inherit ROOM;
#include <ansi.h>
#include <tree.c>

void create()
{
	set("short",HIG"�� �� �� -- "NOR+YEL"�� �� ��"NOR);
	set("long",@LONG
�����أ����Ѿ���������Ŀ�������ô���������ˣ�������
��Ҳ������������һ�����������ˡ��ˡ���������....Խ��Խ������
�·���һ�־����������
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"up":__DIR__"b-45",
"down":__DIR__"b-43",
]));
	setup();
}