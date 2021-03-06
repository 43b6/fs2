// Room: /open/capital/room/r69.c

inherit ROOM;

void create ()
{
  set ("short", "中央大街");
  set ("long", @LONG
走在京城的中央大街, 看到的是一幅繁华热闹的景象, 街上不时有
快马奔过, 显示出这条街交通的繁忙, 过路的人潮也不少, 让你感受到
王朝活泼的朝气与生命力, 右边则是舞者公会, 左边则是驿站。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r67",
  "south" : __DIR__"r70",
  "east" : __DIR__"dancer",
  "west" : "/open/trans/room/room1.c",
]));
  set("outdoors", "/open/capital");

  setup();
}
