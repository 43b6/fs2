inherit ROOM;

void create ()
{
  set ("short", "农家前院");
  set ("long", @LONG
这里是一户农家的院子 ,有几只鸡在广场上悠闲的跺着步子 ,时
而昂首阔步 ,时而低头啄食 ,好一幅美丽的农家情景啊 .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room25",
  "east" : __DIR__"room29",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/start/npc/hen.c" : 2,
]));

  setup();
}
