// Room: /open/main/room/f23.c

inherit ROOM;

void create ()
{
  set ("short", "ɭ��");
  set ("long", @LONG
������һƬ����ԭʼɭ�֣��β����ľ���ҵĳ��ţ���
��͸��֦Ҷ���µ���ƣ����������ҵĲ�����Ҷ���Ӳ�.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/squirt" : 1,
  "/open/ping/questsfan/npc/chin" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"r36",
  "west" : __DIR__"f22",
  "south" : __DIR__"s28",
  "east" : __DIR__"f24",
]));

  setup();
}
