// Room: /open/prayer/room/tanshu/8.c

inherit ROOM;

void create()
{
	set("short", "ƫ��");
	set("long", @LONG

    ������������ְλ����ͽ,������Ŀ����վ������,�Ⱥ�������
��������ڵ�ְ��,�Ա���������ʱ�Ĵ�������ֵ�����,ǽ��������
��д���鷨,���ֻ��������쾡��.

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"10.c",
  "north" : __DIR__"7.c",
  "east" : __DIR__"3.c",
]));
	set("light_up", 1);
	set("no_clean_up", 0);

	setup();
	}
