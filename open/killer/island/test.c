// Room: /u/u/unfinished/room/test.c
inherit ROOM;

void create ()
{
  set ("short", "test room");
  set ("long", @LONG
this is a test room ....
there is nothing in this room la ...
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "box" : "this is a box
",
]));
  set("exits", ([ /* sizeof() == 2 */
  0 : __DIR__"quest",
  "out" : __DIR__"quest.c",
]));
  set("outdoors", "/u/u");
  set("objects", ([ /* sizeof() == 3 */
  "/u/u/unfinished/hate.c" : 1,
  "/u/u/unfinished/souji.c" : 1,
  "/u/u/unfinished/sb.c" : 1,
]));

  setup();
}
