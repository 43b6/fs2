// Room: /open/main/room/s33.c

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
������һƬ��ԭ�����˵�Ұ�����ҵĳ��ţ��߸ߵ͵͵�â
�����ŷ����������Ӧ���в��ٶ�����.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/marksman/room/room2-1",
  "north" : __DIR__"L23",
  "east" : __DIR__"s34",
]));
  set("outdoors", "/open/main");
}
