// Room: /u/m/moner/room/room/room/r12.c 
inherit ROOM;
 
void create ()
{
set("short","ħ����");
  set ("long", @LONG

������ħ�����ĵ����㣬һ̤��������ܵ�ɱ��ͻȻŨ����������һ
˫˫����ɱ�����۾����������㡣�㶨�˶����ע�⵽����������
�ܣ����������ŵ��ۣ����䴦����һ�Ѷѵĺ��ǣ�ʹ�㲻�����ݡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r13.c",
  "down" : __DIR__"r11.c",
]));

  setup();
  replace_program(ROOM);
}
