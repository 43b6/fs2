// Room: /open/dancer/room/roomsw5.c :purple
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", HIC"�м����賡"NOR);
  set ("long", @LONG
������ҹ��С��������(��)�����ڴ�����Կ�������������ɬ
�����ˣ���ȻҲ���Կ����Ƚ��������������ŵ����ˣ����е�ҹ�ε�
���Ƕ����ڴ���ϰ���ܵģ��������Ҳ�����ڵ����о�����֮����

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/dancer/room/roomsw4.c",

]));
 set("objects", ([ /* sizeof() == 1 */
 "/open/dancer/npc/trainee2.c" : 3,
]));
  set("light_up", 1);
  setup();
}
