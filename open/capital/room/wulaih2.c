// Room: /open/capital/room/wulaih2
inherit ROOM;

void create ()
{
  set ("short", "无赖窝");
  set ("long", @LONG
四周一片漆黑。有股恶心的臭味，还是别待太久得好。地板下传来
些许细微的响声，看了看地板，似乎有暗门。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"wulaih",
  "down" : __DIR__"j1",
]));
  create_door("down","暗门","up");

  setup();
}
