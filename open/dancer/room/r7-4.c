// Room: /open/dancer/room/r7-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","С·");
  set ("long", @LONG
��������ɽҰС·֮�У������߿��Խ����ׯ�����ߺͱ�������
��ԭ���Ϸ���һƬïʢ�����֡�


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/dancer/room/r6-4.c",
  "east" : "/open/dancer/room/r7-5.c",
  "west" : "/open/dancer/room/r7-3.c",

]));

  set("light_up", 1);

  setup();
}
