inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "��Ѩͨ��");
  set ("long", @LONG
һ�������Ķ�Ѩͨ�������Ե��ұڷǳ����ᣬ�����˲��ٵ�ˮ��
�����ͷ�ϲ�ʱ�ĵ�����ˮ����Ţ�ĵ��ϻ���ʱ�м�ֻ���������ȥ
�ġ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/red-rat.c" : 3,
]));
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"mon52",
  "north" : __DIR__"mon29",
]));

  setup();
}
