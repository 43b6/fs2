// made by chun,copy and re-edit by ccat
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
	set("short","�����̵�");
  set ("long", @LONG
�����Ƿ��ָ������̵�,���ֻ��ﶼ�ۼ��ڴ�,����Կ���
������Щ��ô(list),����(trade),���й���(value).

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"p2-1.c",
]));
  set("light_up", 1);

  setup();
}
