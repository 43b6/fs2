inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
����ɽ����������֮һ��վ�ڴ˵أ���Ұ�����ģ�ֻ������ʤ��
�����ݣ�ʢ����ʱ����һ�������������ڴ���ʶ���������Գ������
�˶���������Ҫ�ۿ������ľ������Ե��Ϸ嶥��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/pig.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"mon47",
  "stand" : __DIR__"mon48",
]));

  setup();
}
