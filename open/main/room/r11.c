// Room: /open/main/room/r11.c

inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
从这儿你可以看到南边高耸直立的笔架山, 北边绵延千里的蜀
山, 传说中, 蜀山常常有剑仙出没, 走在这条路上的人, 大多是响
往着剑仙剑侠的事迹而来的, 也有人是为了寻宝, 总之, 人人手上
都拿把武器, 看来明哲保身之道似乎比求仙之道重要哩! 道路在此
呈南北走向.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r18",
  "north" : __DIR__"r8",
  "east" : __DIR__"m2",
]));

  set("outdoors", "/open/main");

  setup();
}
