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
  __DIR__"npc/pig.c" : 2,
]));
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"mon44",
  "west" : __DIR__"mon40",
]));

  setup();
}
