// Room: /open/dancer/room/r8-4.c :cgy
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

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/dancer/room/r8-5.c",

]));

  set("light_up", 0);

  setup();
}
