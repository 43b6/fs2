// Room: /u/m/moner/water/room3.c
inherit ROOM;

void create()
{
  set ("short", "�ĵ�");
  set ("long", @LONG

˳��������������, ��������ɽ�ȵ�, ̧ͷ����, ֻ������ԼԼ�Ŀ�
��ɽ�����ƴ���ٲ�������к����, ����һĨ���, ���ն���, ˮ����
��, �㿴����������Ӱ�����ڵ�ˮ�ƻ㼯����һ������, ƽ����ˮ�浴Ȼ
��, ˮ��ȴ��һ�ɰ���, �������г�·��

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
set("exits", ([ /* sizeof() == 1 */
"west":"/open/gblade/mrm/r1",
]));
  setup();
}
void init()
{
  add_action ("do_climb","climb");
}
int do_climb (string str)
{
  object    me;
if(str!="robe")
return notify_fail("���ֲ����ڹ꣬���������ģ�\n");
me = this_player();
message_vision("$N˫����ס������С����������\n",me);
me->move(__DIR__"room2.c");
tell_room(environment(me), sprintf ("%sץ�������������������������\n",
me->short()), me);
return 1;
}
