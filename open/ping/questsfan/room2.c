// Room: /u/d/dhk/questsfan/room2
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[0;36m�ܵ�[0m");
  set ("long", @LONG
���ܺڲ����������㱵����ڲ�֪�ж೤��ͨ���У�
����������һ��������ͳ�ʬ�Ķ������ʾ�˵������δ
����ͨ���ˡ�
LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room3",
  "east" : __DIR__"room1",
]));

  setup();
}
