// Room: /open/dancer/room/r5-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
����������֮�У�����֮������������ľ�����ǲ���ʮ��
ïʢ��������������Ϥ�ɼ����ϱ߲�Զ����һƬ�̵ء�

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/dancer/room/r5-5.c",
  "north" : "/open/dancer/room/r4-4.c",
  "east" : "/open/dancer/room/r6-4.c",
]));

  set("light_up", 1);

  setup();
}
