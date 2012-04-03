// Room: /open/capital/room/r57.c

inherit ROOM;

void create ()
{
  set ("short", "云洋大街");
  set ("long", @LONG
这里是三叉路口, 北方是通往连接皇城入口及东西二城门的街道, 
是京城的重要道路, 东西方连接着云洋大街, 宽阔的大街别有一番雄伟
的气象。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/capital/room/r53",
  "west" : "/open/capital/room/r56",
  "east" : "/open/capital/room/r58",
]));

  set("outdoors", "/open/capital");

  setup();
}
