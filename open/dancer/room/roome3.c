// Room: /open/dancer/room/roome3.c :cgy
#include <room.h>
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
ҹ��С�������ȣ������ǽ�����������ĵ��ܣ��ߵ���
�����ŵ������㣬������������������ң��������ǻ�԰
�����û�µĻ����ǲ�Ҫ���������Ұ�!!



LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/dancer/room/roome2.c",
  "east" : "/open/dancer/room/roome4.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "east" : (: look_door,     "east" :),
]));

  create_door("east", MAG"�λ��������"NOR, "west", DOOR_CLOSED);
  set("light_up", 1);

  setup();
}
