#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","��Ҷ��");
  set ("long", @LONG
�����Ǻ�������̳��������Ҳ�Ǻ�������ǿ�ĺ�Ҷ��ɱ������ڵء�
�������ڴ˴�����ʱ�������������������Լ���ר��ɱ�֡�
һ��Ұ�Ĳ�����Ҷ��ɱ֮�£�����Ҷ��ɱ������Ϊ�⡣
��Ϊ������������ɢ�����İ���������Ҷ��ɱ����Ҫ�ġ�
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west":__DIR__"redr4",
  "north":__DIR__"redr2",
]));

  set("objects",([
        "/open/killer/npc/hu_fa1.c" : 1,
        ]));  
  setup();
}