// Room: /open/main/room/s24.c

inherit ROOM;

void create ()
{
  set ("short", "草原");
  set ("long", @LONG
这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/bear" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"s23",
  "south" : __DIR__"L14",
  "east" : __DIR__"s25",
]));

  setup();
}
