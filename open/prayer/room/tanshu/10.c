// Room: /open/prayer/room/tanshu/10.c

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
  "north" : __DIR__"8.c",
  "east" : __DIR__"2.c",
]));
	set("light_up", 1);
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/vice-manager.c" : 1,
]));
	set("no_clean_up", 0);

	setup();
	}
