// Room: /open/dancer/room/r2-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
����������֮�У�������ȥ����һƬ������ï�ܵ���ľ������
������ȫ�赲��ֻ��Щ����������������롣

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/dancer/room/r3-2.c",
  "north" : "/open/dancer/room/r1-2.c",
  "east" : "/open/dancer/room/r2-3.c",
]));

  set("light_up", 0);

  setup();
}
