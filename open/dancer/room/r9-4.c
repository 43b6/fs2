// Room: /open/dancer/room/r9-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","С·");
  set ("long", @LONG
��������ɽҰС·֮�У��������ׯ��Զ�ˣ�����Ϸ���һ��Ƭ��
��ԭ��Զ������һƬɭ�֡�
��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/dancer/room/r10-4.c",
  "west" : "/open/dancer/room/r9-3.c",

]));

  set("light_up", 1);

  setup();
}
