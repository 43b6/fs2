// Room: /open/dancer/room/r6-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","��ׯ");
  set ("long", @LONG
�����Ǵ�ׯ���ϲ����������չ������ọ́�Ҳ�����򱱻ص���
ׯ�����̽϶�֮���������������Ͼ��񲻶࣬���������˿ڲ���
�࣬������һ���񷿡�


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/dancer/room/r7-3.c",
  "south" : "/open/dancer/room/r9-3.c",
  "west" : "/open/dancer/room/r8-2.c",

]));

  set("light_up", 1);

  setup();
}
