#include <room.h>
#include "../../open.h"
inherit ROOM;

void create ()
{
  set ("short", "ѩ��ɽɽ��");
  set ("long", @LONG
�����������һ�����ɡ�ѩ���ɡ�����ڣ��������߼���ͨ��ѩ
���ɵĵ�·��;���а˲��ɵĵ�·��;�����Թ��󣬴�˵ֻ����Ե֮
�˷��ɵ���ѩ�Բ��� .
LONG);

  set("valid_startroom", 1);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 4 */
  "eastup" : "/open/mon/mon04.c",
  "up" : __DIR__"room4",
  "west" : __DIR__"water2",
  "down" : "/open/main/room/M21",
]));

  setup();
}
