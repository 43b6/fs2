#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "��Ѩ");
  set ("long", @LONG
�����ӵ�һ�㴫������Ĺ���,�е�������������һ��ĸо�,����������ʱ�������ֲ�����ָ�Ļ�����,���ڵ���ֻ��Ͽ������뿪��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"hole26",
]));

  setup();
}
