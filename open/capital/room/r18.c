// Room: /open/capital/room/r18.c

inherit ROOM;

void create ()
{
  set ("short", "街道");
  set ("long", @LONG
往北是威西门，在右手边有一堵绵延很长的高墙，漆成很亮的赤红
色，墙顶还有金黄色的琉璃瓦，相当气派。你猜想这不知道是那户大户
人家的豪邸。

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"r16",
  "south" : __DIR__"r19",
  "east" : __DIR__"ke1.c",
]));
  set("gopath", "north");

  setup();
}
