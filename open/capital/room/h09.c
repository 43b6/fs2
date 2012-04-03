// Room: /open/capital/room/h09.c

#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "֥���ͬ");
  set ("long", @LONG
�����ѽӽ���ͬ����, �����˳��ƺ�������һ��, ԭ����Ǹ�ͨ��
���⿪��һ�����к�Ǯׯ, ���������, �˳�����ﴨ����Ϣ, Ϊ֥��
��ͬ������һ���������ϱ��м�Ǯׯ�����������̵ꡣ

LONG);

  set("objects", ([ /* sizeof() == 2 */
   CAPITAL_NPC"duan5" : 1,
   CAPITAL_NPC"duan12" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"cshop.c",
  "west" : __DIR__"r25.c",
  "south" : __DIR__"cbank.c",
  "east" : __DIR__"h10",
]));

  setup();
}
