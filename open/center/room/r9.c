// Room: /u/l/lotus/girl/r9.c

#include <room.h>
#include "/open/open.h"


inherit ROOM;

void create ()
{
  set ("short", "��");
  set ("long", @LONG
�ѷŲ��ķ���, һ��СŮ���޿���������ڵ���, ��������Щ
�Ǳ���
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"w6.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  CENTER_NPC"nini.c" : 1,
]));
  create_door("north", "��ľ��", "south", DOOR_CLOSED);
  setup();
}
