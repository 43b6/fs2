#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[1;37m����[2;37;0m");
  set ("long", @LONG
����ľ�Ƶĵذ��������ܲ����������������������ƶ�֮�⣬�����ƺ�ʲô
����Ҳû�У�������Ӧ�����ϱ�ǰ���ɡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "out" : __DIR__"is15",
  "south" : __DIR__"b_r01",
]));

  setup();
}
