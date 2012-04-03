// Room: /open/killer/room/r17.c
inherit ROOM;

void create ()
{
  set ("short", "长廊");
  set ("long", @LONG
这里是黑牙联总坛的长廊，四周似乎有一些机关，必须要小心一点。
连四周的烛光，似乎也传来阵阵的杀机，看来这不是一般人该进来的地方。
令你有一点打退堂鼓了，看来还是外面的气氛好一点。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"floorm.c",
  "out" : __DIR__"doorm.c",
]));
  set("light_up", 10);
  setup();
}