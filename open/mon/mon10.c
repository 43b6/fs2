inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "��ɽС��");
  set ("long", @LONG
����ǰ�ߣ�·�������ߣ�ǰ���·�Ѿ�������С���ˣ����ǻ���
�����Ṧ������������·���ᱶ�г�������ͨ��ɽ�ϵ�С·�������
�ɼ���
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/bembem.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"mon11",
  "west" : __DIR__"mon08",
]));

  setup();
}
