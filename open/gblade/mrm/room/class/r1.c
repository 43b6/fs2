// Room: /u/m/moner/room/room/class/r1.c 
inherit ROOM;
 
void create ()
{
   set ("short", "ħ����");
  set ("long", @LONG

������ħ��������һ�㣬һ̤��������ܵĿ������������������
����������һ˿��������������Ϊ�Լ���˫����ʧȥ�����ˣ���Ŭ����
�����Ĺˣ����ϸ���һ�㱡���Ļҳ�����ʾ��������������

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r2.c",
"down":"/open/gblade/mrm/room/room/r20.c",
]));
set("no_transmit",1);
  setup();
  replace_program(ROOM);
}
