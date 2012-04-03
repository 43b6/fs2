// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
这是通往儒门计谋厅的一条走道，走道的两旁贴满着
许许多多的地形图，儒生们喜欢一边看着图，一边幻想自
己身处于战场上，正指挥着兵士们作战。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"w2.c",
  "east" : __DIR__"r20.c",
]));

  setup();
}
