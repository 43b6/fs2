#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�߽�����, ��һ������, ��ǰͨ��ǰͥ������, ��������Ҳ����
һ���ߵ�, �����������ϺõĴ���̺, ���г�һ��ׯ�ϵ����ա�

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"np3",
  "north" : __DIR__"np4",
    "out" : __DIR__"pingking",
  "east" : __DIR__"np2",
]));
  set("light_up", 1);

  setup();
}
