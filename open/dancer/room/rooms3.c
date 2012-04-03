// Room: /open/dancer/room/rooms3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", HIC"���賡"NOR);
  set ("long", @LONG
������ҹ��С��������(��)�����ڴ�����Կ�������������ɬ
�����ˣ���ȻҲ���Կ����Ƚ��������������ŵ����ˣ����е�ҹ�ε�
���Ƕ����ڴ���ϰ���ܵģ��������Ҳ�����ڵ����о�����֮����

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "east" : "/open/dancer/room/roomse1.c",
  "west" : "/open/dancer/room/roomsw1.c",
  "north" : "/open/dancer/room/rooms2.c",
  "south" : "/open/dancer/room/rooms4.c",

]));
 set("objects", ([ /* sizeof() == 1 */
 "/open/dancer/npc/rgirl.c" : 2,
]));
  set("light_up", 1);
  setup();
}
