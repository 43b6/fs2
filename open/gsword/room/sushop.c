// made by chun,copy and re-edit by ccat
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
  set ("short", "�����̵�");
  set ("long", @LONG
���������г������̵�,��������Թ���(value),
����(sell),�������(buy),�����Բ쿴������ʲô
��Ʒ����(list).Ҳ���Կ�������������Щ����Ķ���(view)
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/su3",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/keeper" : 1,
]));

  set("light_up", 1);

  setup();
}
