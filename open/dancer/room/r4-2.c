// Room: /open/dancer/room/r4-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","��ԭ");
  set ("long", @LONG
����һ����ԭ֮�У���Ķ�����һ��С·��������һ��Ƭɭ�֣�
�Ϸ�������һ��ɽ�𣬲����������ֵ��赲�����޷��ɴ�����ɽ��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/dancer/room/r4-3.c",
  "north" : "/open/dancer/room/r3-2.c",

]));

  set("light_up", 1);

  setup();
}
