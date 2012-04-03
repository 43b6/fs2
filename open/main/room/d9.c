// Room: /open/main/room/d9.c

inherit ROOM;

void create ()
{
  set ("short", "ɳĮ");
  set ("long", @LONG
�����һ���޼ʵ�������ɳĮ��������һ���������ƶ�����
���������ȥ, ȴ���������, ��֪������������һ��?
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/loto" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "southeast" : __DIR__"r2",
  "north" : __DIR__"d2",
  "west" : __DIR__"d8",
  "east" : __DIR__"r1",
]));

  setup();
}
