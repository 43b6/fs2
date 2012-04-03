// Room: /open/main/room/r26.c

#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
�ϱ�������ʮ��Ũ�ܵ�ɭ��, ������������������, ���»�
���ͽ������.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"F12",
  "west" : __DIR__"r25",
  "east" : CENTER_ROOM"road2",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/magic-manor/npc/steal-man" : 1,
]));


  set("outdoors", "/open/main");

  setup();
}
