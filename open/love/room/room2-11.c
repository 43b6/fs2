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
"/open/love/npc/5.c":1,
  ]));
  set("exits", ([ /* sizeof() == 4 */
   "north" : __DIR__"room2-15",
   "east" : __DIR__"room2-12",
   "west" : __DIR__"room1-2",
   "south" : __DIR__"room2-7",
  ]));
  set("light_up", 1);

  setup();
}

