// Room: /u/m/moner/room/r2.c 
inherit ROOM;
 
void create ()
{
  set ("short", "ħ����");
  set ("long", @LONG

������ħ�����ĵ����㣬һ̤��������ܵ�ɱ��ͻȻŨ����������һ
˫˫����ɱ�����۾����������㡣�㶨�˶����ע�⵽����������
�ܣ����������ŵ��ۣ����䴦����һ�Ѷѵĺ��ǣ�ʹ�㲻�����ݡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r2.c",
  "climb" : __DIR__"r4.c",
]));
set("objects",([
"/daemon/class/blademan/npc/sbman3.c":1,
]));
  setup();
}
int valid_leave(object me, string dir)
{
if(dir=="climb")
if(present("sword man",environment(me))||present("sword1 man",environment(me)))
return notify_fail("���޷������ߣ�\n");
return ::valid_leave(me,dir);
}
