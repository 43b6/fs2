// Room: /open/soulin/room/s03.c

inherit ROOM;

void create()
{
	set("short", "������ǰ�㳡");
	set("long", @LONG
	һ�������µ��������ĵط���������һƬ�յء�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"s02",
  "north" : __DIR__"s06",
]));
        set("objects", ([ /* sizeof() == 1 */
"/open/bonze/npc/l_monk":2,
]));
 set("outdoors", "/open/bonze");

	setup();
}
