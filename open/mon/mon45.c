inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
����ɽ����ߣ�������һ������ɽ��ĵ�·������һ��������ɽ
���С·������ȴ����Ĳ����ߣ����������壬��һ����С�ĵ���ɽ
�壬�����Ƿ�����ǡ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/bembem.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"mon42",
  "west" : __DIR__"mon39",
]));

  setup();
}
