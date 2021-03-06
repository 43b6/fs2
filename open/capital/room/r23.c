// Room: /open/capital/room/r23.c

inherit ROOM;

void create ()
{
  set ("short", "日落驰道");
  set ("long", @LONG
城西的车马大道。为了便于军队快速通行而设。地面铺的石板相当
考究，有许多精巧的花纹，有狮头，有双龙抢珠图。不过年代已久，又
有车马来回碾压的缘故，许多石板都出现裂痕。

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/capital/room/r22",
  "south" : "/open/capital/room/r24",
]));

  set("gopath", "north");

  setup();
}
