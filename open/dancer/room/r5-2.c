// Room: /open/dancer/room/r5-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","ɽ��");
  set ("long", @LONG
������ɽ��֮�ϣ�����Ķ�����һ��С·�������ǲ�ԭ���Ϸ���
��ԶԶ������ׯ���������������Ǻ����ˡ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/dancer/room/r5-3.c",

]));

  set("light_up", 1);

  setup();
}
