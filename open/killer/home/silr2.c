#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","��������");
  set ("long", @LONG
�����Ǻ�������̳��������Ҳ�Ǻ��������թ�����ǰ�ɱ������ڵء�
Τ�����ڴ˴����߻������������а�ɱ�ƻ�������ѵ����ɱ��Ա��
���������в����ˣ��������������µ�Ȧ����ɱ����
���û�»��ǲ�Ҫ�ڴ˴����ߣ������⵽ɱ����
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east":__DIR__"silr1",
  "south":__DIR__"silr3",
]));

  set("objects",([
        "/open/killer/npc/silnpc2.c" : 2,
        ]));  
  setup();
}