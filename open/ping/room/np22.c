#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�߽�����, ��һ��ƫ��, ������ͨ������, ���Ը���һ���ߵ�,
�����������ϺõĴ���̺, ���г�һ��ׯ�ϵ����ա�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"np23",
  "east" : __DIR__"np26",
]));
  set("light_up", 1);

  setup();
  replace_program(ROOM);
}
