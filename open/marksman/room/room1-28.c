// Room: /u/f/fire/room/room1-28.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[1;33mǿ��֮��[2;37;0m");
  set ("long", @LONG
��������Ը��ӵ���������֣���ֻ�߿���������������h����
�򵥶���͵ĸ�������������ע��������⹬��Ĺ����ƺ��Ǹ�����
�����ֵĽ������߶�����������¶��һ�����ֵı��顣
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room1-26.c",
  "north" : __DIR__"room1-30.c",
  "east" : __DIR__"room1-24",
]));
  set("objects", ([ /* sizeof() == 1 */
C_NPC"/bowman1.c" : 2,
]));

  setup();
}
