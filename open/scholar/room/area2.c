// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "青石小径");
  set ("long", @LONG
这是通往儒门房舍间唯一的一条青石小径，小径的
北边可以进入儒门内堂，小径的四周有着许许多多的草
坪，在草坪的四周常可以看到儒生们在一旁读书及研究
兵法，过得十分的惬意。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"in.c",
  "west" : __DIR__"area_4.c",
  "south" : __DIR__"area.c",
  "east" : __DIR__"area_2.c",
]));

  setup();
}
