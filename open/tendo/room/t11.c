// Room: /open/tendo/room/t09.c

inherit ROOM;

void create()
{
	set("short", "���鷿");
	set("long", @LONG
��������ζ���������������޵����㡣һ���ŵ�����϶����˴�
��СС�鼮�����������徭֮�⣬�󲿷ֶ��ǹ��ڷ�������ҩ�����
������Ҳ���������ѾõĹ���;��ᡣһλ��Ů�����ڵ����������
���ҵ��鱾��

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west" : __DIR__"t10",
]));
        set("objects",([
	"/open/tendo/npc/chii" : 1,
        ]));
	set("light_up",1);
	setup();
}
