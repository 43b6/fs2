inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"�� �� ��"NOR);
	set("long",@LONG
�ߵ��ϣ�����͸���������ս���������ڣ����������ڳ������
�����ͨ�����������ߵ��ı��ߣ����ϱ��ǽ��յ��ż������ż��ڣ�
��²��Ǵ���ǿͷ���...����ż���ᴫ�����������Ŀ���...
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"b-02",
"east":__DIR__"b-04",
]));
	setup();
}

 