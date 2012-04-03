// Room: /open/main/room/s7.c

inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
������һ���޼ʵĴ��ԭ�������в���Ұ�޵��㼣
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/sparrow" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"L1",
  "west" : __DIR__"s4",
  "north" : __DIR__"s5",
  "east" : __DIR__"s8",
]));

  setup();
}
