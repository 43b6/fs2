// Room: /open/dancer/room/r4-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","С·");
  set ("long", @LONG
��������ɽҰС·֮�У��������ׯ��Զ�ˣ�������һ��Ƭɭ�֣�
�������ߵ�һ���ݵأ��Ϸ���С·�������ߵ���ׯ����������һƬ����
��

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east" : "/open/dancer/room/r4-4.c",
  "south" : "/open/dancer/room/r5-3.c",
  "west" : "/open/dancer/room/r4-2.c",

]));

  set("light_up", 1);

  setup();
}
