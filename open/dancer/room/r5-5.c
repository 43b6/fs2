// Room: /open/dancer/room/r5-5.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","ɽ��");
  set ("long", @LONG
������ɽ��֮�ϣ���������һ��Ƭ�����ּ��������������ȫ��
ס�������в����е�ë���Ȼ��

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/dancer/room/r5-4.c",

]));

  set("light_up", 0);

  setup();
}
