#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short","��԰");
  set ("long", @LONG
�������Ǿ����ŵ�����Ļ�԰���㲻Ҫ����˼�����ͻ��ϣ�����
��ע�������Ѱɣ���Ϊ����׵��Ĵ󻤷������������似�����
�ǲ�Ҫ�������ǣ��������������뿪�⡣
LONG);
  
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"room2-5",
  "east" : __DIR__"room2-2",
  ]));
  set("light_up", 1);

  setup();
}

