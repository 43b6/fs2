// Room: /open/soulin/room/s05.c

inherit ROOM;

void create()
{
	set("short", "������ǰ�㳡");
	set("long", @LONG
	���������ֵ����������ĳ��������ܰ��������������ߡ�
	�����и����ÿɽ������С�

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s04",
  "north" : __DIR__"s07",
  "south" : __DIR__"s02",
  "east" : __DIR__"s06",
]));
	set("outdoors", "/open/soulin");

	setup();
}
