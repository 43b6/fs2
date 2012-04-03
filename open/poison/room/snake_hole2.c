// Room: /open/poison/room/snake_hole2
inherit ROOM;

void create ()
{
  set ("short", "蛇洞");
  set ("long", @LONG
这里便是蛇王居住的蛇洞, 四处均是不同种类的毒蛇。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"snake_hole",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/snakeking" : 1,
]));

  setup();
}
