inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "�����ľ");
  set ("long", @LONG
ͻȻ�����ǰΪ֮һ����һ�ø������Ƶľ�ľ����������ǰ����
�������콫�����ڵ�һ˿��͸�������￴����ЩЩ����������ϸ��
��������һ�������Խ�����޴������֮�С�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/fox.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"mon58",
  "east" : __DIR__"mon22",
]));

  setup();
}
