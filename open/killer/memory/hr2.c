#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "ɽ����");
  set ("long", @LONG

   �޴����ľ��ʹ����Ұ�����Ǻܿ�㣬������Ȼ�������׵����������
   ��������֮���ƺ����������ڿ�̽���㣬�ѵ�������������ɱ�֣�
   

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 3   */
     "northeast" : __DIR__"hr3.c",
     "westsouth" : __DIR__"hr1.c",   
]));
  set("objects",([
  "/open/killer/npc/spy4.c":1,]));
  setup();
}
