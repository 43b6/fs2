// Room: /open/main/room/maiu-1.c
inherit ROOM;

void create ()
{
  set ("short", "悬空吊桥");
  set ("long", @LONG
你走再悬空吊桥上,澜沧江就在你脚下,河面上一团团白雾
罩在滚滚江流之上,阳光照得江水金蛇乱舞,放眼不尽,令人心旷
神怡.
LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"maiu-1.c",
  "west" : __DIR__"maiu-3.c",
]));

  setup();
}
