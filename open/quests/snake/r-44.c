inherit ROOM;
#include <ansi.h>

void create()
{
	set("short","��կ ������");
	set("long",@LONG
ǽ�ϵĻ�ѽ��������������࣬�������һ�����͵�̵�����
�����������Ѿ��ر��ˣ�����ǰ����һ�����������ϴ������£��ƺ�
��ͨ������Ψһ�ķ�����
LONG);
	set("no_transmit",1);
	set("exits",([
"up":__DIR__"r-45",
]));
	setup();
}
