// Room: /open/dancer/room/r3-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
����������֮�У�����֮������������ľ�����ǲ���ʮ��
ïʢ��������������Ϥ�ɼ���

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/dancer/room/r4-2.c",
  "north" : "/open/dancer/room/r2-2.c",
  "west" : "/open/dancer/room/r3-1.c",
  "east" : "/open/dancer/room/r3-3.c",
]));

  set("light_up", 1);

  setup();
}
