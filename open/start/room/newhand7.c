#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short","����������");
  set ("long", @LONG
����ط����ܵ�����ף�����������������㣬����һ�Ѻ���һ���Ŀ������
����������ƴ�������������������ϰ�������������Եط��ˣ��Ͽ��ó��������
����Щ������һ�������ɣ�ϣ�������ճ�Ϊ����ռ����һ��������
                                                          ������ʦȺ����
LONG);

  set("objects", ([ /* sizeof() == 1 */
      "/open/start/npc/eagle1" : 2,
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"newhand4.c",
  "east" : __DIR__"newhand8.c",
  
]));
  set("no_transmit", 1);
  set("light_up", 1); 
  set("no_magic", 1);
  setup();
}