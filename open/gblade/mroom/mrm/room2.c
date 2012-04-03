// Room: /u/m/moner/water/room2.c
inherit ROOM;

void create ()
{
  set ("short", "�ٲ�");
  set ("long", @LONG

ϸϸ����Ȫ˳��ɽ��, ���ٳɶ�, ��������, �γ�һ����Ȼ���ٲ���
ˮ�����ϵĽ����������, С�������ˮ�������໬������, ���ǽŲ�
�������˵�Ҳ����վ���� ���������¸���, ������ʯк��, ��������, ��
�䴦��һ������(robe)��ȵ����

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"room1.c",
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
message_vision("$N˫����ס��������һ�����¹ȵס�\n",me);
me->move(__DIR__"room3.c");
tell_room(environment(me), sprintf ("%sץ����������С�Ļ���������\n",
    me->short()), me);
  return 1;
}
