#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "�ٲ�����");
  set ("long", @LONG
�Ѿ�ǧ����� ,����ƾ�Ź��˵��Ṧ�����ݵ�˼���������ٲ���
���� ,�ۿ�����С�ݾͽ�����ǰ�� ,���ȥ�� !

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"room36",
  "southdown" : __DIR__"room27",
]));
  create_door("enter", "ľ����", "out", DOOR_CLOSED);
  setup();
}


