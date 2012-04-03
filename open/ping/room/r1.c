// Room: /u/m/moner/open/room/r1.c 
inherit ROOM;
 
void create ()
{
  set ("short", "大厅");
  set ("long", @LONG
这里是雷霸所拥有的大厅, 整个大厅全是金黄色, 所有的装饰品都
是黄金所制。雷霸为风行山寨的老大, 武功也为其最高, 他正在这
和他的心腹讨论着事情, 看见你闯进来, 他恶狠狠的瞪着你, 似乎
随时准备大开杀界。

LONG);

  set("exits", ([ /* sizeof() == 1 */
"west":"/open/scholar/room/wife.c",
  "south" : __DIR__"r2.c",
]));
set("objects",([
"/open/ping/npc/6.c":1,
]));

  setup();
  replace_program(ROOM);
}
