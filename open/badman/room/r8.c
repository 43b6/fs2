// Room: /open/badman/room/r8

#include </open/open.h>
#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "���");
  set ("long", @LONG
һ����������䣬���̾�����Χ��������ֹ�����ǰ��������
����������ı��飬�Ϳ���֪������ض����Ƕ��˹��н䱸��ɭ��
�Ĳر����ˡ���ʮ����˵�����书��������������˲��ٽ�����
����һ�뵽�����Ŀ�ˮ���鲻�Խ������˳�����
    ��ע�⵽�ϱ���һ�������ţ�����Ӧ�þ��ǽ���˰ɡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r9",
  "north" : __DIR__"b6",
]));
  set("objects", ([
  BAD_NPC"gguard" : 2,
]));

  set("light_up", 1);
  create_door("south", "����", "north", DOOR_LOCKED);

  setup();
}
