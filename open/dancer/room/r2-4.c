// Room: /open/dancer/room/r2-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
���������һƬ���֣���������ȥ�������Ƕ��͵�ɽ��ɽ����
ͬ�����ܲ������֡�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/dancer/room/r3-4.c",

]));

  set("light_up", 1);

  setup();
}
