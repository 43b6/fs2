inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
�������ߣ�һ������Ϊƽ˳�ĵ�·�����Եķ羰����ѩ��һƬ��
�����������κ�������ټ�������ĺ�����Ե�·;�ı��������Ȼ
�����顣
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/snow-bear.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"mon38",
  "west" : __DIR__"mon47",
]));

  setup();
}
