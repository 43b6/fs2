// Room: /open/capital/room/r37.c

inherit ROOM;

void create ()
{
  set ("short", "永福胡同");
  set ("long", @LONG
远远得看到斜坡的尽头。这里比较冷清，没有店家在这开业，所以
人烟稀少，也因为人少，石板路旁都长满了杂草而无人理会。
    这里有禁卫军四处的巡逻着，所以你还是不要在城内惹事的好。

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r36",
  "east" : __DIR__"r38",
]));

  set("gopath", "west");

  setup();
}
