// Room: /open/main/room/f1.c

inherit ROOM;

void create ()
{
  set ("short", "ɭ��");
  set ("long", @LONG
����һ���޼ʵ�ɭ��, ������һ������, ȴ��֪��ô��ȥ
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/bee" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"f3",
  "east" : __DIR__"f2",
]));

  setup();
}
