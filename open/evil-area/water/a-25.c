inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"HIG" ͬ �� �� "NOR);
	set("long",@LONG
��������Ϸ���Ҳ����ͬ���ŵ��յ㣬����һ�������˼�Ľ���
���������Ȼ�е��ª��ȴ��ʧ���ţ��о��������ƺ���ס��һλ
��ʿ������ȴ�ֲ�������ʿ����������Ϊ����Ϊ��ǰվ��������а��
���ƺ�������ͨ�˿�������ͨ�С�
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"a-24",
"south":__DIR__"a-26",
]));
	setup();
}

 