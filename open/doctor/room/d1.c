#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short","��·");
  set ("long", @LONG
��������������·�ϣ�һ·����������Խ��Խϡ�٣�������������ö���
·�߳�����������Ĳ�ҩ����ϸ������������ϡ���Կ���[1;33m�������š�[0m������
�� ��

LONG);

  set("light_up", 1);
        set("outdoors", 1);
        set("objects",([
        ]));
  set("exits", ([ /* sizeof() == 2 */
      "north" : __DIR__"d2",
      "south" :"/open/port/room/r3-4.c",
      ]));
  setup();
}


