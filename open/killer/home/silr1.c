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
  "eastup":__DIR__"ru9.c",
  "west":__DIR__"silr2",
  "south":__DIR__"silr4",
]));

  set("objects",([
        "/open/killer/npc/silnpc1.c" : 2,
        ]));  
  setup();
}