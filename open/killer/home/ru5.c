#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","��̳��������");
  set ("long", @LONG
�����Ǻ�������̳��������Ϊͨ�����������թ�����ǰ�ɱ���ͨ����
��������Ϊ�˱��������İ�ȫ��Ȼ��û��Ҷ��ɱ�������Ҳ��������������
Ȼ��������С�ĵ��ǲ�֪����ʱ�����˴��㱳��ð������Ȼ�����һ����
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east":__DIR__"masterm",
  "west":__DIR__"ru7",
]));

/*  set("objects",([
        "/open/killer/npc/hu_fa2.c" : 1,
        ])); */
  setup();
}