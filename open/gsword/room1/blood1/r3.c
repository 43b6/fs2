#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "Ѫħ��");
  set ("long", @LONG
��ǰ����ΪѪħ����ĳǱ�������������ΪѪɫ���˵صĵ�·Ҳ��һ���·��ͬ
����͸�������ڻ���ħ����������������ȷ���ø��������

LONG);

  set("exits", ([ /* sizeof() == 2 */
//  "north" : "/open/gsword/room1/blood1/r1.c",
  "south" : "/open/gsword/room1/blood1/r6.c",
//  "east" : "/open/gsword/room1/blood1/r6.c",
  "west" : "/open/gsword/room1/blood1/r1.c",
]));

  set("light_up", 1);
  set ( "no_transmit", 1 );
  setup();
}
