#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short","��·");
  set ("long", @LONG
��������������·�ϣ�һ·������ֻ�п��������Է򣬱���һ�����ĸ�
�ģ����ж�����·�߳�����������Ĳ�ҩ��[1;33m�� ������ ��[0m��������Խ��Խ
���ԣ�������ҽ���У���ĽŲ��ֲ�֪�����ؼӿ��ˡ�

LONG);

  set("light_up", 1);
        set("outdoors", 1);
        set("objects",([
        ]));
  set("exits", ([ /* sizeof() == 2 */
      "south" : __DIR__"d1",
      "north" : __DIR__"d3",
      ]));
  setup();
}


