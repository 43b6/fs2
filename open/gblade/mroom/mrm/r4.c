// made by chun,copy and re-edit by ccat
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
  set ("short", "�̵�");
  set ("long", @LONG

������ħ���ڷ�����Ʒ���̵�,��������Թ���(value),
����(sell),�������(buy),�����Բ쿴������ʲô
��Ʒ����(list).

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r8.c",
"east":__DIR__"m-eq.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/u/m/moner/npc/keeper.c" : 1,
]));
  set("light_up", 1);

  setup();
}
