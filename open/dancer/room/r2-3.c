// Room: /open/dancer/room/r2-3.c :cgy
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
  "west" : "/open/dancer/room/r2-2.c",

]));

  set("light_up", 0);

  setup();
}
