// Room: /open/badman/room/t4.c

inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG
通过了藤蔓背后的通道以后，你来到了地道的另一端，这里完
全没有刚刚那些藤蔓的存在，可见那些藤蔓是有人为了不被人发现
而刻意弄出来的吧，或许这里是通往某个地方的秘密通道也说不一
定。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/badman/room/t5",
  "east" : "/open/badman/room/t3",
]));

  setup();
}
