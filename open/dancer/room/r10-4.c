// Room: /open/dancer/room/r10-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","��ԭ");
  set ("long", @LONG
����һ����ԭ֮�У�������඼�����֣�������һ��С·����
ͨȥ���Ϸ�����һƬ�����޷������ڲ���

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "east" : "/open/dancer/room/r10-5.c",
  "west" : "/open/dancer/room/r10-3.c",
  "north" : "/open/dancer/room/r9-4.c",
  "south" : "/open/dancer/room/r11-4.c",

]));

  set("light_up", 1);

  setup();
}
