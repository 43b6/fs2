// Room: /u/f/fire/room/room1-29.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[1;33mǿ��֮��[2;37;0m");
  set ("long", @LONG
��������Ը��ӵ���������֣���ֻ�߿���������������h����
�򵥶���͵ĸ�������������ע����������ƺ��Ǹ���������ֵĽ�
�����߶�����������¶��һ�����ֵı��顣
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room1-31",
  "south" : __DIR__"room1-27.c",
]));
  set("objects", ([ /* sizeof() == 1 */
C_NPC"/wu-mon.c" : 1,
]));

set("light_up",1);
  setup();
}
