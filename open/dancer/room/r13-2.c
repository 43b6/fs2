// Room: /open/dancer/room/r13-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
�㷢������������ǻ��䣬����������֮�У���Щ���������δ
����֮Ʒ�֣����㲻����Ϊ����������԰֮�С�


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/dancer/room/r12-2.c",
  "west" : "/open/dancer/room/r13-1.c",

]));

  set("light_up", 1);

  setup();
}
