// Room: /open/snow/room/hole1.c
// ѩȪʥ���еĶ�Ѩ
#include <room.h>
inherit ROOM;
void create ()
{
  set ("short", "��Ѩ");
  set ("long", @LONG
һ����С����������ʪ�Ķ�Ѩ�����ܳ�������̦������������ܾö�û
�������������ӣ������Ŵ�����͸����Щ��Ĺ��ߣ���Լ�Ŀ�������С
·��ǰ��ȥ��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"s_hole.c",
  "north" : __DIR__"s_hole3.c",
]));
  set("no_auc", 1);
  set("no_transmit", 1);

  setup();
}
