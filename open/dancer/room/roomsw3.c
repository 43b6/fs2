// Room: /open/dancer/room/roomsw3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", HIG"���¸�"NOR);
  set ("long", @LONG
���������¸�Ҳ����ҹ��С��������֮һ���ߵ��������ŵ�
��������ζ��ԭ���ϱ��ǳ�������������ķ����㣬����������ҩ
��Ҳ������ҩ��ζ����ֵ���������ζ������һ�𲻵������ų⣬
�����ܺϳ�һ�������泩�ķҷ���

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east" : "/open/dancer/room/roomsw2.c",
  "north" : "/open/dancer/room/roomsw3n.c",
  "south" : "/open/dancer/room/roomsw3s.c",

]));

  set("light_up", 1);

  setup();
}
