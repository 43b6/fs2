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
  
   set("objects", ([ /* sizeof() == 1 */
 "/open/love/npc/3.c":1,
  ]));
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"room2-14.c",
  "south" : __DIR__"room2-9.c",
  ]));
  set("light_up", 1);

  setup();
}

