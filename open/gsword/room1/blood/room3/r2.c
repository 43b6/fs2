#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "��ħѪ·");
  set ("long", @LONG
������һ��һ��̤��Ѫħ����...��е�һ�����Ѫ��ζ�˱Ƕ���
���ϸ�ʽ������ͬ����ĹǺ�������������...�����˺����ͷ..
��ͨ����ֱ����....�ƺ���Ҫ��Ѫħ�����ˡ�

LONG);

  set("exits", ([ /* sizeof() == 5 */
  "north" : "/open/gsword/room1/blood/room3/r3.c",
  "south" : "/open/gsword/room1/blood/room3/r1.c",

]));

  set("light_up", 1);
  set ( "no_transmit", 1 );
  setup();
}
