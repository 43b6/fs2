// Room: /open/prayer/room/tanshu/6.c

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
  "north" : __DIR__"5.c",
  "west" : __DIR__"3.c",
  "south" : __DIR__"9.c",
]));
	set("light_up", 1);
	set("no_clean_up", 0);
	set("short ", "ƫ��");

	setup();
	}
