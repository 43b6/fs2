#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","��̳��������");
  set ("long", @LONG
�����Ǻ�������̳��������Ҳ��ͨ����������ǿ�ĺ�Ҷ��ɱ���ͨ����
�����������Ϊ�˱��������İ�ȫ��Ȼ��û��Ҷ��ɱ�������Ҳ��������������
Ȼ��������С�ĵ��ǲ�֪����ʱ�����˴��㱳��ð������Ȼ�����һ����
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west":__DIR__"masterm",
  "east":__DIR__"ru6",
]));

/*  set("objects",([
        "/open/killer/npc/hu_fa1.c" : 1,
        ]));  */
  setup();
}