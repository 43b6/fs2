#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIW"�������"NOR);
  set ("long", @LONG
��õ����.Ʈ��ľ���...�ƺ�����˵�����������������Ŀ�����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room2/array0",
  "south" : "/open/gsword/room2/road1",
]));
  set("no_magic", 1);
  set("no_transmit", 1);
  set("no_fight",1);
  setup();
}
