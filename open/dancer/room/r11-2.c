// Room: /open/dancer/room/r11-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
�����ڷ�����֮�У�����֮���������Ƿ��������ǲ���ʮ
��ïʢ��������������Ϥ�ɼ������ܵķ���ÿ�����죬�������
�����ʮ��׳���ɡ�


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/dancer/room/r10-2.c",
  "west" : "/open/dancer/room/r11-1.c",
  "east" : "/open/dancer/room/r11-3.c",
]));

  set("light_up", 1);

  setup();
}
