// Room: /open/prayer/room/tanshu/9.c

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
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"2.c",
  "north" : __DIR__"6.c",
]));
	set("light_up", 1);
	set("no_clean_up", 0);

	setup();
	}
