// Room: /u/l/lotus/girl/guest4.c
#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "¥�ݿ�");
  set ("long", @LONG
�������������λεĻ���, ɷ�Ǻÿ���һ��¥��ͨ����¥��С��
�ķ��䡣
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tin2.c",
   "south" : __DIR__"tin3.c",
]));

  set("light_up", 1);
  set("file_name", __DIR__"guest4.c");
  setup();
}
