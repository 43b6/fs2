#include <room.h>
#include "../../open.h"
inherit ROOM;

void create ()
{
  set("short","����«");
  set ("long", @LONG
�����������������������ס����ֻ����ǽ������
�Ķ���һЩ�й��ڰ��ԡ��󼫡����ࡢ����ȵ�ռ��һ
��Ķ�������Ҳ��Ϊ������������С���������������
�ŵ�ԭ��

LONG);

  set("exits", ([ /* sizeof() == 3 */
	"west" : "/open/snow/room/room3",
]));

  set("objects",([
	"/open/snow/npc/dguger" : 1,
	]));
  set("light_up", 1);

  setup();
}
