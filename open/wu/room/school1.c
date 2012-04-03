// Room: /open/wu/room/school1.c

#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "������ݴ���");
  set ("long", @LONG
����վ��һ��������ΰ��լ��֮ǰ, ��������ʯ̳�и���һ������
���ߵ����, �˶�Ʈ��������, ��������"�������"�ĸ�����,��լ��
�����,���ϲ豭��С�Ľ���������,�Ŷ��Ҷ�д��"ȭ������"�ĸ���
����֣�Ҳ����������Ŵ򿪴���(open door).
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/ping/room/inn",
  "east" : __DIR__"school2",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "east" : (: look_door,     "east" :),
]));
  create_door("east", HIR"�λ��������"NOR, "west", DOOR_CLOSED);
  set("light_up", 1);
  setup();
}
