// Room: /open/dancer/room/r6-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","��ׯ");
  set ("long", @LONG
�����Ǵ�ׯ�ı������������չ������ọ́�Ҳ�������ϻص���
ׯ�����̽϶�֮���������������Ͼ��񲻶࣬���������˿ڲ����ࡣ


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/dancer/room/r5-3.c",
  "south" : "/open/dancer/room/r7-3.c",

]));

  set("light_up", 1);

  setup();
}
