// Room: /u/l/lotus/girl/f2c.c

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "�ߵ�");
  set ("long", @LONG
������յ���λεĻ���, ɷ�Ǻÿ�, ������һ�ȴ�, ����Կ�
������ľ�ɫ, ������һ�ȵ�ľ��.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"f2d.c",
  "south" : __DIR__"f2b",
  "east" : __DIR__"deyroom.c",
]));
  set("light_up", 1);
  create_door("east", "��ľ��", "west", DOOR_CLOSED);
  setup();
}
