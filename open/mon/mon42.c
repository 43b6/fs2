inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "ɽ���");
  set ("long", @LONG
����ɽ����������֮һ��վ�ڴ˵أ���Ұ�����ģ�ֻ������ʤ��
�����ݣ���ϸ��������һ��һ��ɽ��������ɽ�����Աߣ���Ӱ����
�����ָо������Բ���˶����������Ϸ嶥���Կ��������ľ�ɫ��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/bem.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"mon45",
  "stand" : __DIR__"mon50",
]));

  setup();
}
