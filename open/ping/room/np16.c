#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�߽�����, ��һ������, ����ͨ����ʦ��������ס��, ������
��ǰͥ������, �����������ϺõĴ���̺, ���г�һ��ׯ�ϵ����ա�

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"np17",
  "west" : __DIR__"np21",
  "east" : __DIR__"np13",
]));
  set("light_up", 1);

  setup();
}
