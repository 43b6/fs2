// Room: /open/dancer/room/r6-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","��ԭ");
  set ("long", @LONG
����һ����ԭ֮�У���ı�����һ��Ƭɭ�֣��Ϸ�����һ��
���ӵ�С·����ͨȥ��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/dancer/room/r7-4.c",
  "north" : "/open/dancer/room/r5-4.c",

]));

  set("light_up", 1);

  setup();
}
