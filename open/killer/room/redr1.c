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
  "westup":__DIR__"ru8.c",
  "east":__DIR__"redr2",
  "south":__DIR__"redr4",
]));

  set("objects",([
        "/open/killer/npc/rednpc1.c" : 2,
        ]));  
  setup();
}