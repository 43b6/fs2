// Room: /u/f/fire/room/room1-26.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[1;33mǿ��֮��[2;37;0m");
  set ("long", @LONG
һ���ý����ѩ��ʯש���������ߵ������ԵĻ�԰��һ����ȥ��
�Ƕ�使���Ļ������������ŵ��ľ��Ƿҷ�����Ϣ���������Ե�����
�������������·��Χ�����ӵ�Ǿޱ��������h�Ļ��䡣
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room1-28.c",
  "east" : __DIR__"room1-23",
]));
  set("objects", ([ /* sizeof() == 1 */
C_NPC"/bowman" : 2,
]));

  setup();
}
