// Room: /open/prayer/room/tanshu/2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG

    �����������ŵ�������,ÿ���岽����һյ�͵�,���͵�վ������
�����ĳ߸�,�ҵ�̵ĺò�ϸ��,ǽ��һ�������Ĵ�ڻ�ֱ����������
վ������������,ԭ��������Ե�Ʒζֻ�����.

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"10.c",
  "north" : __DIR__"3.c",
  "south" : __DIR__"1.c",
  "east" : __DIR__"9.c",
]));
	set("light_up", 1);
	set("no_clean_up", 0);
	set("", "");

	setup();
	}
