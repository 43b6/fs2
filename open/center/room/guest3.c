// Room: /u/l/lotus/girl/guest3.c
#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����Ĺ�����������, ���ɺܺ�, �����˺ܶ��������������
С����. һ�����ٵ���ͷ��, �Ǹ�����, ��˵���Ĺ��������Ĺ��ŵ�
��,�����������, �������յ�����.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : CENTER_ROOM"guest.c",
  "north" : CENTER_ROOM"guest4.c",
  "west" : CENTER_ROOM"tin1.c",
]));
  set("light_up", 1);
  set("file_name", CENTER_ROOM"guest3.c");

  setup();
}
