// Room: /open/dancer/room/r7-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","��ׯ");
  set ("long", @LONG
�����Ǿ��µ���Ψһ�Ĵ�ׯ���������Ǿ��¸ۣ�����������µ�Ψ
һ��ͨ������Ķ����Ǵ�ׯ�ڵ��������������㿴�����������������
��������,�����������ׯ����ء�


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/dancer/room/port.c",
  "east" : "/open/dancer/room/r7-3.c",

]));

  set("light_up", 1);

  setup();
}
