// Room: /u/m/moner/room/r2.c 
inherit ROOM;
 
void create ()
{
  set ("short", "ħ����");
  set ("long", @LONG

������ħ�����ĵ�һ�㣬һ̤��������ܵ�ɱ��ͻȻŨ����������һ
˫˫����ɱ�����۾����������㡣�㶨�˶����ע�⵽����������
�ܣ����������ŵ��ۣ����䴦����һ�Ѷѵĺ��ǣ�ʹ�㲻�����ݡ�

LONG);
set("objects",([
"/daemon/class/blademan/npc/sbman1.c":1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "climb" : __DIR__"r7.c",
  "west" : __DIR__"r5.c",
]));

  setup();
}
int valid_leave(object me, string dir)
{
if(dir=="climb")
if(present("blade man",environment(me)))
return notify_fail("���޷������ߣ�\n");
return ::valid_leave(me,dir);
}
