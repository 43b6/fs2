// Room: /open/dancer/room/r11-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
�����ڷ�����֮�У�����֮���������Ƿ��������ǲ���ʮ
��ïʢ��������������Ϥ�ɼ������ܵķ���ÿ�����죬�������
�����ʮ��׳���ɣ����߲�Զ��Ϊһ��ݵء�


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/dancer/room/r10-4.c",
  "south" : "/open/dancer/room/r12-4.c",
  "west" : "/open/dancer/room/r11-3.c",
]));

  set("light_up", 1);

  setup();
}
