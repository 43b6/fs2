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
  __DIR__"obj/bembembem.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"mon43",
  "north" : __DIR__"mon41",
]));

  setup();
}
