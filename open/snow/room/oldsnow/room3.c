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

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/snow/room/oldsnow/water2",
  "up" : "/open/snow/room/oldsnow/room4",
]));

  set("light_up", 1);
  set("objects",([ "/open/snow/npc/person" : 1 ]));

  setup();
}
