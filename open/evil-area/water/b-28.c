inherit ROOM;
#include <ansi.h>
#include <tree.c>

void create()
{
	set("short",HIG"�� �� �� -- "NOR+YEL"�� �� ��"NOR);
	set("long",@LONG
�����������ɳ��������ĿӶ��������˾����㣬�̲�ס������
�����е���ʹ��������ȴҲ��Ϊ������Щ�����������˳����������
��ȥ�����������޷�ȥ����������ĺû���
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"up":__DIR__"b-29",
"down":__DIR__"b-20",
]));
	setup();
}