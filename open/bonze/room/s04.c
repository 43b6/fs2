// Room: /open/soulin/room/s04.c

inherit ROOM;

void create()
{
	set("short", "������ǰ�㳡");
	set("long", @LONG
	���������ֵ����������ĳ��������ܰ��������������ߡ�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"s01",
  "east" : __DIR__"s05",
]));
        set("objects", ([ /* sizeof() == 1 */
    "/open/bonze/npc/s_monk":2,
]));
  set("outdoors", "/open/bonze");

	setup();
}
