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

  set("objects", ([ /* sizeof() == 2 */
      "/open/start/npc/kbird" : 2,
      "/open/start/npc/bbird" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"newhand5.c",
  "east" : __DIR__"newhand3.c",
  "west" : __DIR__"newhand1.c",
  
]));
  set("no_transmit", 1);
  set("light_up", 1); 
  set("no_magic", 1);
  setup();
}