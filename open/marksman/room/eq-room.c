// Room: /open/marksman/room/eq-room.c
inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "[1;33m����EQ��[2;37;0m");
  set ("long", @LONG
����һ��ʦ�ֽ�Ҫ���¼������ɵ�ʦ����EQʱ�������������
������ĵ�����ʹ�ã���Ȼ����ĵ��ӿ�Ҫ���������У����ø���
�ҵ�����

LONG);

  set("no_fight", 1);
  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"room1-31",
]));
  set("light_up", 1);

  setup();
}
