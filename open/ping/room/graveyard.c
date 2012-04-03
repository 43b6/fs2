// Room: /open/ping/room/graveyard.c

#include <ansi.h>

inherit ROOM;

void create ()
{
	set( "short", HIB"��"HIG"��GRN"��HIG"��GRN"��HIG"��GRN"^"HIB"��"NOR );
	set( "long", @LONG

    ����һƬ���, ��Լ���Կ������ÿ�ή�İ�����, ��紵������, ����
������Х�������������㵹��Ĺ��, �ڱ����ķ�Ĺ�ϻ��в��̵ğ����ڰ��
��Ʈ��, �ӵ������̹�����Լ���Կ����ӷ�Ĺ��¶��һ�ǵĹײ�����������
������ؿ޺���, ����ë���Ȼ, ��������ڵ���ͷ��֪����ʲô���ܡ���
����ħ��ֻ���, ��������, ��˭Ҳ����������һ��, ������ȴվ��һλ
�������ߡ�       

LONG);

	set("exits", ([ /* sizeof() == 1 */
		"eastdown" : __DIR__"road12",
	]));
	set("outdoors", "/open/ping");
	set("objects", ([ /* sizeof() == 1 */
		"/open/ping/npc/death" : 1,
]));
	setup();
	replace_program(ROOM);
}

                               