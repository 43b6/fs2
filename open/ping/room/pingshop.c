// made by chun,copy and re-edit by ccat
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
  set ("short", "ƽ���̵�");
  set ("long", @LONG
������ƽ�ϳ������̵�,���ܻ��ﶼ�ۼ��ڴ�,����Կ���
������Щ��ô(list),����(sell),���й���(value).
Ҳ���Կ�������������Щ����Ķ���(view)
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"road2",
]));
  set("light_up", 1);

  setup();
}
