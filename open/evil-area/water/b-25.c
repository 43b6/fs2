inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"�� �� �� -- �� Ժ"NOR);
	set("long",@LONG
��վ���ں�Ժ�Ķ��Ͻǣ������Ѿ�û��ש���̵أ�����һƬ����
������ûʲô�ر�ģ�����ı�����һ����ǣ��������ƺ���һ�ô�
������
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"b-22",
"west":__DIR__"b-24",
]));
	setup();
}

 