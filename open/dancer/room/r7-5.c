// Room: /open/dancer/room/r7-5.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","��ԭ");
  set ("long", @LONG
����һ����ԭ֮�У����������һ��С·��������һ��Ƭɭ�֣�
��������ɭɭ�Ĳ�֪���Ƿ���Ұ���������С�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/dancer/room/r7-4.c",
  "south" : "/open/dancer/room/r8-5.c",

]));

  set("light_up", 1);

  setup();
}
