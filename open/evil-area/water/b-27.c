inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"�� �� �� -- �� Ժ"NOR);
	set("long",@LONG
��վ���ں�Ժ�Ķ����ǣ������Ѿ�û��ש���̵أ�����һƬ����
������ûʲô�ر�ģ�������ϱ���һ����ǣ����Ϸ��ƺ���һ�ô�
������
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"b-22",
"west":__DIR__"b-18",
]));
	setup();
}

 