// Room: /u/f/fire/room/room1-13.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short",GRN"��ɳ��"NOR);
  set ("long", @LONG
�������ɳ��֮�ж��������������ﻨ���С·�ϣ�·�Ե���Щ
����Ʈ����Ũ���Ļ��㣬����������ˬ�Ļ��㣬���ߴ���������ƺ�
����Ϸ�Ľ�����
LONG);

  set("exits", ([ /* sizeof() == 2 */
"north" : __DIR__"room1-14",
"south" : __DIR__"room1-9",
"west" : "/open/trans/room/room7.c",
]));
set("outdoors","/open/marksman");

  setup();
}
