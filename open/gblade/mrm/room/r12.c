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
set("objects",([
"/daemon/class/blademan/npc/sbman5.c":1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "climb":__DIR__"r13.c",
"south":__DIR__"r11.c",
]));

//add no transmit by bss
  set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir)
{
if(dir=="climb")
if(present("bad man",environment(me)))
return notify_fail("���޷������ߣ�\n");
return ::valid_leave(me,dir);
}
