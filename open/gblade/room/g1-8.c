inherit ROOM;

void create ()
{
  set ("short", "厨房");
  set ("long", @LONG

你从饭厅一路到了这里，四溢的香气让你口水差一点滴出来了。有几个师
傅正在这里准备今天的宴席，你想趁师傅不注意偷一些点心，结果一个不
小心被烫到了。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"g1-7",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/cook" : 1,
]));
  set("light_up", 1);

  setup();
}
