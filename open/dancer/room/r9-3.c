// Room: /open/dancer/room/r9-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","С·");
  set ("long", @LONG
��������ɽҰС·֮�У���������С��ׯ������������Կ�ʼ���
����֮�ã�ȥ̽�������ص����ء�С·�������ȥ��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/dancer/room/r9-4.c",
  "north" : "/open/dancer/room/r8-3.c",

]));

  set("light_up", 1);

  setup();
}
