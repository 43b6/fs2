#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "回廊");
  set ("long", @LONG
    长长的走道向前延伸, 这儿有许多房间, 是段家子弟的居所, 在此
切勿大声喧哗, 免的引人反感。

    南边有一道铁门(door)。

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "south" : (: look_door,     "south" :),
  "door"  : (: look_door,     "south" :),
]));
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"np17",
  "south" : __DIR__"np30",
  "east" : __DIR__"np1",
]));
  create_door("south","铁门","north",DOOR_LOCKED);
  set("light_up", 1);
  set("need_key", ([ /* sizeof() == 1 */
  "east" : 1,
]));

  setup();
}

