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
  "west":__DIR__"redr1.c",
  "south":__DIR__"redr3.c",
]));

  set("objects",([
        "/open/killer/npc/rednpc2.c" : 2,
        ]));  
  setup();
}