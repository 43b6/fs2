#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "���ұ���");
  set ("long", @LONG
һ��λ�ڴ��ֺ��ɽ����������ɽ������ڼ���һ�����ţ���û��
Կ���ǲ��ܽ�ȥ�ģ�

LONG);

  set("no_transmit", 1);
  set("light", "1");
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"goroom.c",
]));

  setup();
}

int valid_leave(object me, string dir)

{
        if(dir=="east"&&present("bluekey",me))
  {
  return 1;
}
  else return 0;
}
