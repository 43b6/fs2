#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[1;37m����[0m");
  set ("long", @LONG
��һ��Ĵ��֮�£��㲻С��̤���˵װ壬���������Ҵ�֮�⣬������������
��Ĳк����ŵ�����������������һ�������ͷ�ϱ�ĳ�ֽ�������򵽣���������
����Ĳ��������ˡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"is15",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/box" : 1,
]));
  set("outdoors", 1);

  setup();
}
