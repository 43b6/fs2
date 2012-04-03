// Room: /u/u/unfinished/room/is12.c
inherit ROOM;

void create ()
{
  set ("short", "沿岸");
  set ("long", @LONG
地上全是大小不一的石块, 许多是从西边山壁上掉落的. 西边山壁十分陡峭,
难以攀爬上去. 起风时山壁不时会有石子掉落, 看来石壁相当脆弱.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"is13.c",
  "south" : __DIR__"is7",
]));

  setup();
}
