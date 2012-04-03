// Room: /open/capital/room/r63.c

inherit ROOM;

void create ()
{
  set ("short", "云洋大街");
  set ("long", @LONG
这里是丞相府的出入口，富丽堂皇的画檐雕阁显示出此人的奢侈与
虚荣，比邻而居的是城内首富干通天，由此可见两人之交谊非浅，干通
天能在城中拥有如此多的资产恐怕也都是因为丞相的帮助吧。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/capital/room/premier",
  "west" : "/open/capital/room/r62",
  "east" : "/open/capital/room/r64",
]));

  set("outdoors", "/open/capital");

  setup();
}
