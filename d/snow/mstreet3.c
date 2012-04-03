// Room: /d/snow/mstreet3.c

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ѩͤ��ֵ�");
  set ("long", @LONG
������ѩͤ��Ĵ�֣�������һ���¾ɵĽ���������������ʲô��
�̣����ǲ�û���κ����ƣ�ֻ��һ����(door)����д��һ�����ġ���
���֣�������һ��ҩ�̣�������ϱ������������졣
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "east" : (: look_door,     "east" :),
]));
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"herbshop",
  "north" : __DIR__"mstreet4",
  "south" : __DIR__"mstreet2",
  "east" : __DIR__"hockshop",
]));
  set("outdoors", "snow");

  setup();
}
