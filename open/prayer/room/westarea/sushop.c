//sushop.c
// made by chun,copy and re-edit by rence
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
  set ("short", "�����м�");
  set ("long", @LONG
  �������������Ψһ���̵�,��������Թ���(value),
����(sell),�������(buy),�����Բ쿴������ʲô
��Ʒ����(list).
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"road9",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/keeper" : 1,
]));

  set("light_up", 1);

  setup();
}