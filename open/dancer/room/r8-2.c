// Room: /open/dancer/room/r8-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","��");
  set ("long", @LONG
������һ����ͨ���񷿣�����Կ������ڵİ��輫Ϊ��ª���ɴ�
��֪���µ�������������ԣ��


LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/dancer/room/r8-3.c",

]));

  set("light_up", 1);

  setup();
}
