// Room: /open/capital/room/r60.c

#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "������ǰ�㳡");
  set ("long", @LONG
�����ǳ��������ľ������������������˳��䣬�����ͨ��û���
�˿��辺���������������д����գ�һ��һ�ȵ���״Ԫѡ��Ҳ���ڴ˾�
�еġ�

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"fight",   
  "west" : __DIR__"r59",
  "east" : __DIR__"r62",
]));
  set("outdoors", "/open/capital");
set("objects",([
	CAPITAL_NPC"g1"	: 1,
	CAPITAL_NPC"g0"	: 1,
]));

  setup();
}
