// Room: /open/dancer/room/r8-5.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
����������֮�У�������ȥ����һƬ������ï�ܵ���ľ������
������ȫ�赲��ֻ��Щ����������������롣

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/dancer/room/r9-5.c",
  "north" : "/open/dancer/room/r7-5.c",
  "west" : "/open/dancer/room/r8-4.c",

]));

  set("light_up", 0);

  setup();
}
