// Room: /open/main/room/f7.c

inherit ROOM;

void create ()
{
  set ("short", "ɭ��");
  set ("long", @LONG
����һ���޼ʵ�ɭ��, ������һ������, ȴ��֪��ô��ȥ
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/bat" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"f8",
  "north" : __DIR__"f6",
]));

  setup();
}
