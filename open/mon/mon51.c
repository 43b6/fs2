inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "��Ѩ��");
  set ("long", @LONG
�������߽�����һ����ԭ����һ��ɽ���������ڵ�ɽ���ƺ�
�������ף�ɽ���л�����������ĺ�������֪��ʲô��������ͷ����
��ֹ��������ǰ��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/bembem.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"mon28",
  "enter" : __DIR__"mon52",
]));

  setup();
}
