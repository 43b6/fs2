// Room: /u/m/moner/room/r2.c 
inherit ROOM;
 
void create ()
{
  set ("short", "ħ����");
  set ("long", @LONG

������ħ�����ĵ��Ĳ㣬һ̤��������ܵ�ɱ��ͻȻŨ����������һ
˫˫����ɱ�����۾����������㡣�㶨�˶����ע�⵽����������
�ܣ����������ŵ��ۣ����䴦����һ�Ѷѵĺ��ǣ�ʹ�㲻�����ݡ�

LONG);

  set("exits", ([ /* sizeof() == 6 */
  "��" : __DIR__"r8.c",
"��":__DIR__"r11.c",
  "��" : __DIR__"r10.c",
  "��" : __DIR__"r10.c",
]));
set("no_transmit",1);
set("objects",([
"/daemon/class/blademan/npc/corpse4.c":4,
]));
  setup();
  replace_program(ROOM);
}
