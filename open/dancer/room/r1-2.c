// Room: /open/dancer/room/r1-2.c :cgy
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
  "south" : "/open/dancer/room/r2-2.c",

]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/npc/wind_girl.c" : 1,
]));

  set("light_up", 0);

  setup();
}
