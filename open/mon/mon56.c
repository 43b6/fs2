inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
������һƬ�����͵Ĳ�ԭ�����治�����ţ�����ô�ߵĳ���ɽ��
��Ȼ������˵�һƬ��ԭ������ԭ����һ�����ӣ����ǳ�ˮ��������
�ģ��Ѿ��ɺ���һ���ݣ����ɺԵĲ���ȴ������һƬ���̵Ĳ�ԭ��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/b-wolf.c" : 4,
]));
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"mon57",
  "north" : __DIR__"mon55",
]));

  setup();
}
