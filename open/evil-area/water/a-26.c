inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"HIG" ͬ �� �� "NOR);
	set("long",@LONG
����ǿ���а����վ�������ԣ��·��������ػ����⣬�о���
�����ƺ�ס��ʮ�������������ȴ��һ�ֱ�����ĸо���������
�����㣬Ҳ�޷�ͨ����һ���Ž���˽������ڡ�
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"a-25",
]));
	setup();
}

 