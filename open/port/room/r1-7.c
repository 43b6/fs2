// made by chun,copy and re-edit by ccat
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
	set("short","ʷ���̵�");
  set ("long", @LONG
�����Ƿ��ָ������̵� . ��Ʒ������֮�� , ����֮�� , 
��ȫ����������һָ�� . ��ҵ���ϰ��Ǳ��صĴ�����ʷ���� ,
 ����������������ʷ������� . ����Կ���������Щ��ô(list)
����(buy) , ���й���(value) .
Ҳ���Կ�������������Щ����Ķ���(view)
LONG);

  set("exits", ([ /* sizeof() == 1 */
	"east" : "/open/port/room/r1-4",
]));
  set("light_up", 1);

  setup();
}
