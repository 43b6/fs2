#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "ɽ����");
  set ("long", @LONG

   �޴����ľ��ʹ����Ұ�����Ǻܿ�㣬������Ȼ�������׵����������
   ��������֮���ƺ����������ڿ�̽���㣬�ѵ�������������ɱ�֣�
   ǰ���ƺ������ƺ���������ˮɫ...........
   

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 3   */
     "north" : __DIR__"lk6.c",
     "westsouth" : __DIR__"hr2.c",   
]));
  set("objects",([
  "/open/killer/npc/magnpc1.c":2,]));
  setup();
}
