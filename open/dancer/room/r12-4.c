// Room: /open/dancer/room/r12-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
���������һƬ�����֣���������ȥ�������Ƕ��͵�ɽ��ɽ����
ͬ�����ܲ��ķ�����

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/dancer/room/r11-4.c",

]));

  set("light_up", 1);

  setup();
}
