// Room: /u/m/moner/room/room/room/r13.c 
inherit ROOM;
 
void create ()
{
set("short","ħ����");
  set ("long", @LONG

������ħ�����ĵ����㣬һ̤��������ܵ�ɱ��ͻȻŨ����������һ
˫˫����ɱ�����۾����������㡣�㶨�˶����ע�⵽����������
�ܣ����������ŵ��ۣ����䴦����һ�Ѷѵĺ��ǣ�ʹ�㲻�����ݡ�

LONG);
set("objects",([
"/daemon/class/blademan/npc/sbman7.c":1,
]));
  set("exits", ([ /* sizeof() == 2 */
"climb":"/open/gblade/mrm/room/class/r1.c",
  "south" : __DIR__"r19.c",
]));
set("no_plan",1);
//add no transmit by bss
  set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir)
{
if(dir=="climb")
if(present("prayer man",environment(me)))
return notify_fail("���޷������ߣ�\n");
if(!userp(me))
return notify_fail("ֻ�����߲��ܽ�!!!!\n");
return ::valid_leave(me,dir);
}
