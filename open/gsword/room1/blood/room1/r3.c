#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "Ѫħ��һ¥");
  set ("long", @LONG
��Ϊǧ��Ѫħ��ǧ����ħ��սǰ�������ĳǱ������ڵ�����ħ��ս
��Ե�ʣ�ʹ�ô˵ش�����ԫ�бڣ�����֮������ڴ����䣬�㽥��
����Ƭ����Ӱ���ʧȥ������ˡ�

LONG);

  set("exits", ([ /* sizeof() == 5*/
  "west" : "/open/gsword/room1/blood/room1/r2.c",
  "east" : "/open/gsword/room1/blood/room1/r13.c",
  "north" : "/open/gsword/room1/blood/room1/r4.c",
  "south" : "/open/gsword/room1/blood/room1/r11.c",
]));

  set("light_up", 1);
  set ( "no_transmit", 1 );

  setup();
}
