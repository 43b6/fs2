// Room: /open/soulin/room/s06.c

inherit ROOM;

void create()
{
	set("short", "������ǰ�㳡");
	set("long", @LONG
	���������ֵ����������ĳ��������ܰ��������������ߡ�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"s05",
  "south" : __DIR__"s03",
]));
        set("objects", ([ /* sizeof() == 1 */
   "/open/bonze/npc/c_monk":2,
]));
  set("outdoors", "/open/bonze");

	setup();
}
