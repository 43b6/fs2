// Room: /u/m/moner/water/mblade/r4.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

����һ�����ң����ܹ��߼�������ǰ��һλ�׷�Ʈɢ��������
�����ˣ����Ǵ���ɢ�������ų�ζ����ǰ�����ƺ��������⡣

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"r3.c",
]));
set("objects",([
"/daemon/class/blademan/npc/old-man.c":1,
]));
set("no_transmit", 1);
  setup();
}
void init()
{
add_action("do_jump","to-jump");
}
int do_jump(string str)
{
  object me;
  me=this_player();
if(me->query_temp("can_jump")!=1)
return notify_fail("��....��....��Ҫ����ѽ��\n");
  if( str != "hole" )
return notify_fail("��Ҫ�ڵ�����������\n");
message_vision("[1;34m���ҵ�һ���ض����ͷ���������һ����\n[0m",me);
me->move("/daemon/class/blademan/bladeroom.c");
me->set_temp("can_jump",0);
  return 1;
}
