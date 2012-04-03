// Room: /open/main/room/f19.c

inherit ROOM;

void create ()
{
  set ("short", "森林");
  set ("long", @LONG
这里是一片广大的原始森林，参差的树木杂乱的长着，阳
光透过枝叶洒下点点金黄，地上则凌乱的部满落叶与杂草.
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/squirt" : 1,
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"r44",
  "west" : __DIR__"r39",
  "north" : __DIR__"m32",
  "east" : __DIR__"f20",
]));

  setup();
}
