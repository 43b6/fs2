inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "��ɽС��");
  set ("long", @LONG
һ�����ų���ɽ��С������ɽ����·;��ңԶ�����ԵĲ�ľ����
���٣����̵���ɫҲ����ת��ݻƣ��������ߣ����������̺�����Ϣ
�������䣬��������ƺ�������͸�ż����������
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/bembem.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"mon13",
  "southdown" : __DIR__"mon11",
]));

  setup();
}
