// Room: /open/dancer/room/r13-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
�����ڷ�����֮�У�������ȥ����һƬ������ï�ܵ���ľ������
������ȫ�赲��ֻ��Щ����������������롣�������㻳���Ƿ��ߵ���
��������֮�ء�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/dancer/room/r12-3.c",

]));

  set("light_up", 0);

  setup();
}
