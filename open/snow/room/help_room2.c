#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","����С��");
  set ("long", @LONG
������һ�伫Ϊ���ص�С�ݣ����ƺ������ﲻ����
�κ�ӡ����ǳ��ػ��������Ƿ������ܵظ� ?
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/snow/room/help_room",
  "down" : "/open/snow/room/room3",
]));

  set("objects",([
	"/open/snow/npc/oldman" : 1,
	]));

   set("light_up",1);


  setup();
}
