// Room: /u/m/moner/room/room/class/r1.c 
inherit ROOM;
 
void create ()
{
set("short","ħ����");
  set ("long", @LONG

������ħ��������һ�㣬һ̤��������ܵĿ������������������
����������һ˿��������������Ϊ�Լ���˫����ʧȥ�����ˣ���Ŭ����
�����Ĺˣ����ϸ���һ�㱡���Ļҳ�����ʾ��������������

LONG);

  set("exits", ([ /* sizeof() == 6 */
"��":__DIR__"r11.c",
"��":"/open/gblade/mrm/room/r10.c",
"��":"/open/gblade/mrm/room/room/r10.c",
"��":"/open/gblade/mrm/room/room/r3.c",
]));
set("no_transmit",1);
set("objects",([
"/daemon/class/blademan/npc/corpse7.c":4,
]));
  setup();
  replace_program(ROOM);
}
