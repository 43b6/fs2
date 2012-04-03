// Room: /open/capital/room/r64.c

inherit ROOM;

void create ()
{
  set ("short", "云洋大街");
  set ("long", @LONG
来到这里，因为邻近皇城与达官贵人的住所附近, 很少有闲杂人来
此闲荡，也许不是我们该来的地方吧。正因为如此, 你发现街上一个人
影也没有, 除了偶而走过的禁卫军外, 可以说是完全静悄悄的。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/r63",
  "east" : "/open/capital/room/r50",
]));

  set("outdoors", "/open/capital");

  setup();
}
