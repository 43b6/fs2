// Room: /u/l/lotus/girl/w4.c
#include "/open/open.h"

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "��Ժ");
  set ("long", @LONG
���˺ܶ������Ӱ˵Ķ���, �ɵ�����, ���������, ��б��ȱ��
������ ....
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r7.c",
  "west" : __DIR__"w5.c",
  "east" : __DIR__"tin2",
]));
  set("outdoors", "/u/l");
  set("file_name", __DIR__"w4.c");
  create_door("east", "ľ��", "west", DOOR_CLOSED);
  setup();
}
