// Room: /open/dancer/room/r3-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
���������һƬ���֣���������ȥ�������Ƕ��͵�ɽ��ɽ����
ͬ�����ܲ������֡����в��ɿ�ʼ���£���֪�᲻����Ұ������ɽ��
��

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/dancer/room/r4-4.c",
  "north" : "/open/dancer/room/r2-4.c",
  "west" : "/open/dancer/room/r3-3.c",

]));

  set("light_up", 1);

  setup();
}
