inherit ROOM;
void create()
{
set("short", "������ֲ��");
set("long", @LONG
����ˮ������,��������Ĺ�â�������쳣�ĺ��䣬�����������ź���ֲ�
�������Ǹ����ܵ����ڡ���������

LONG );
set("exits", ([ /* sizeof() == 2 */
  "out" : __DIR__"outr5.c",
]));

setup();
}

void init()
{
  add_action("do_search", "search");
}

int do_search(string arg)
{
  object me=this_player();

  if (arg)
     return notify_fail("��������ȥҲû����ʲô����ĵط���\n");
  message_vision("$N�����˸�ʿɽ�زݣ�˳�ְ���һ�ѡ�\n", me);
  new("/open/killer/obj/herb.c")->move(me);
  message_vision("���ƺ����˷�����Ĵ��ڣ����������̷��˳�ȥ\n", me);
  set_temp("tree_hold",0);
  me->move(__DIR__"outr5.c");
  return 1;
}