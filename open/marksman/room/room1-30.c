// Room: /u/f/fire/room/room1-30.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[1;33mǿ��֮��[2;37;0m");
  set ("long", @LONG
��ǰһƬҫ�۵�����Ϯ��������ǿ�����۾�һ������ǰ������һ
��������ʯ����¶����߲����޵Ĺ�â������Ʈ�ŵ����Ļ��㣬�㲻
���������˿�����ͻȻƮ���˸��ֻ�����ζ��������Ĺ�ζ����
��������ˬ��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room1-28.c",
  "east" : __DIR__"room1-31",
]));
  set("objects", ([ /* sizeof() == 1 */
C_NPC"/chang-yang.c" : 1,
]));

set("light_up",1);
  setup();
}
