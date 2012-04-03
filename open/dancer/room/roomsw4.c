// Room: /open/dancer/room/roomsw4.c :purple
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", HIC"�������賡"NOR);
  set ("long", @LONG
������ҹ��С��������(��)�����ڴ�����Կ�������������ɬ
�����ˣ���ȻҲ���Կ����Ƚ��������������ŵ����ˣ����е�ҹ�ε�
���Ƕ����ڴ���ϰ���ܵģ��������Ҳ�����ڵ����о�����֮����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/dancer/room/rooms2.c",
  "west" : "/open/dancer/room/roomsw5.c",

]));
 set("objects", ([ /* sizeof() == 1 */
 "/open/dancer/npc/trainee1.c" : 2,
]));
  set("light_up", 1);
  setup();
}
