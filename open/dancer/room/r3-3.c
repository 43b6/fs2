// Room: /open/dancer/room/r3-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����������֮�У�����֮������������ľ�����ǲ���ʮ��
ïʢ��������������Ϥ�ɼ���

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/clan/wind/room/room61.c",
  "east" : __DIR__"r3-4.c",
  "west" : __DIR__"r3-2.c",
]));

  setup();
}
