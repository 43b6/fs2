#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����·��");
  set ("long", @LONG

   ����ɽ��֮����������һ������ɽ��֮�С�ǰ���ƺ���һ�������
   ����������������ײ������ɱ�����죬�������������ｻ�֣�
   ������������Ļ��㣬�����ƺ����˲���ֲ�

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
      "west" : __DIR__"outr1.c",
      "east" : __DIR__"outr6.c",
     "north" : __DIR__"doorm.c",
      "back" : __DIR__"firstrm.c",
]));
  setup();
}