// Room: /open/dancer/room/r5-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","С·");
  set ("long", @LONG
��������ɽҰС·֮�У�����Ϸ�����С��ׯ���������ϵ�һ��С
ɽ���Ϸ��Ĵ�ׯ������������Ψһ�Ĵ�ׯ��


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/dancer/room/r4-3.c",
  "south" : "/open/dancer/room/r6-3.c",
  "west" : "/open/dancer/room/r5-2.c",

]));

  set("light_up", 1);

  setup();
}
