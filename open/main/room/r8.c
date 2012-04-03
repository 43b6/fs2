// Room: /open/main/room/r8.c

inherit ROOM;

void create ()
{
  set ("short", "道路");
	set( "build", 10 );
  set ("long", @LONG
从这儿你可以看到南边高耸直立的笔架山, 北边绵延千里的蜀
山, 传说中, 蜀山常常有剑仙出没, 走在这条路上的人, 大多是响
往着剑仙剑侠的事迹而来的, 也有人是为了寻宝, 总之, 人人手上
都拿把武器, 看来_成仙_果然很快, 不过大概是被人抬去种的模样
罢了. 道路在此则通往东方或南方.
LONG);

 
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"m1",
  "south" : __DIR__"r11",
  "west" : __DIR__"f10",
  "east" : __DIR__"r9",
]));

  setup();
}


