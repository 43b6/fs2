// Room: /u/e/eiei/room/troom_3a_1.c
inherit ROOM;

void create ()
{
  set ("short", "残破青石路");
  set ("long", @LONG
    走到这里，树林似乎更冒密了。不过如果你仔细看
    的话，在路的一旁好像有一条青石板铺成的的小路，虽
    然看起来青石板已经有点老旧，不过由于青石板一直向
    树林里面延伸，所以看起来就显的有一点突出了。
LONG);

  set("objects", ([ /* sizeof() == 1 */
]));
  set("outdoors", "/u/e/eiei/room");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"troom_3a_2.c",
  "west" : __DIR__"troom_3a.c",
]));

  setup();
}
