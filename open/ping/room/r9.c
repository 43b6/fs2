// Room: /u/m/moner/open/room/r9.c 
inherit ROOM;
 
void create ()
{
  set ("short", "大厅");
  set ("long", @LONG

    这里是张继所拥有的大厅, 整个大厅全是古铜色的, 所有的装饰品
也都是铜制品。目前张继是管里风行山寨内琐碎杂务的三头目, 他正在
这里和他的心腹讨论着事情, 看见你闯进来, 他恶狠狠的瞪着你, 似乎
随时准备大开杀界。


LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room14.c",
]));
set("objects",([
"/open/ping/npc/4.c":1,
]));

  setup();
  replace_program(ROOM);
}
