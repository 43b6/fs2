#include <room.h>
inherit ROOM;

void create()
{
  set ("short", "�Է�");
  set ("long", @LONG

��������Ԫ�ԵĶ������˽ܵ��Է������еĳ����൱�ļ򵥣�����һ��ʯ
ͷ�辰����һ�߰���һ��ɴ�����������и�ī��ʯ������Ϲ���ˮī����
�ӣ��������ִ����ؾ���


LONG);


  set("light_up", 1 );
  set("exits", ([ /* sizeof() == 1 */
  "south": __DIR__"g3-3",
]));
create_door("south", "����̴ľ��", "north", DOOR_CLOSED);

  setup();
}
