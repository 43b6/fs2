// Room: /open/dancer/room/r7-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","��ׯ");
  set ("long", @LONG
�����Ǵ�ׯ�����������ھ��µ��ľ��񲻶࣬���������Ȼ�ų���
����ʵ�����˿ڲ����࣬�������С�ƽ�ϵȴ��Ҫ����ˡ��򶫿��뿪
��ׯ��


LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/dancer/room/r7-2.c",
  "east" : "/open/dancer/room/r7-4.c",
  "south" : "/open/dancer/room/r8-3.c",
  "north" : "/open/dancer/room/r6-3.c",

]));

  set("light_up", 1);

  setup();
}
