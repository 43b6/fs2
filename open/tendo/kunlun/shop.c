// made by chun,copy and re-edit by ccat
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
	set ("short", "С����");
  set ("long", @LONG
  ����������ɽΨһ������,��������Թ���(value),
����(sell),�������(buy),�����Բ쿴������ʲô
��Ʒ����(list).
LONG);

  set("exits", ([ /* sizeof() == 1 */
	"south" : __DIR__"v2",
]));

  set("objects", ([ /* sizeof() == 1 */
	__DIR__"npc/keeper" : 1,
]));

  set("light_up", 1);

  setup();
}
