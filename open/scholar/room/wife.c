// Room: /open/scholar/room/wife.c 
inherit ROOM;
 
void create ()
{
  set ("short", "卧房");
  set ("long", @LONG
这里是雷霸与他老婆茵茵居住的卧房, 卧房中只见茵茵一人独自在
卧房内坐着, 只见她正一边刺着绣, 一边哭着, 一看你闯进来便朝
你杀了过去。

LONG);

  set("exits", ([ /* sizeof() == 1 */
"east":"/open/ping/room/r1",
]));
set("objects",([
"/open/scholar/npc/ra_wife.c":1,
]));

  setup();
  replace_program(ROOM);
}
