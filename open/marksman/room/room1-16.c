// Room: /u/f/fire/room/room1-16.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[32m��ɳ��[2;37;0m");
  set ("long", @LONG
�˵�������ֲ�˸ߴ����ľ���������������Ļ��ݣ��������
�����ﻨ�㣬�����Ȳ����������߽�ȥ��һ�䡣����һ�䳤ɳ������
�������Ŀ�ջ������ջ��
LONG);

  set("objects", ([ /* sizeof() == 1 */
C_NPC"/boy" : 1,
]));
set("outdoors","/open");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"room1-15.c",
  "north" : __DIR__"room1-17.c",
  "east" : __DIR__"room1-19.c",
]));

  setup();
}
