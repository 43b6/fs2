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
  "west" : "/open/snow/room/help_room2",
]));


   set("light_up",1);


  setup();
}
