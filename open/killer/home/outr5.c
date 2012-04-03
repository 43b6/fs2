inherit ROOM;
void create()
{
set ("short", "��԰");
  set ("long", @LONG
   �������˲����滨��ݣ������в�����ҩ�ݣ�����ȴ���˽����Ĺ��á�
   ���Ʈ���Ļ������㲻���������У�������ϸ������������
   ȴ���������Ȼȫ����ֲ���Զ����ֲ�����������ֵ�û��ɡ�������
   �����������Լ������˰ɡ���������

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
      "north" : __DIR__"outr4.c",
      "east"  : __DIR__"outr2.c",
]));
setup();
}

void init()
{
  add_action("do_search", ({"search"}));
  add_action("do_push", ({"push"}));
  add_action("do_puton", ({"puton"}));
}

int do_search(string arg)
{
  object me=this_player();
  int query;

  query=me->query_temp("herb_1");
  if (arg)
    if (query > 1) 
       return notify_fail("�����ȥ��ѽ��С�ı����֣�����\n");
  else return 0;
  message_vision("$N������ȥ���ڷ��ְ�ť(button),\��\ \�� ����(puton)\n", me);
  return 1;
}

int do_push(string arg)
{
  object me=this_player();
  int query;

  query=me->query_temp("herb_1");
  if (arg != "button")
    return 0;
  if (query > 1) 
    return notify_fail("�����ȥ��ѽ��С�ı����֣�����\n");
  message_vision("$N����һ�£����������г���ͨ����\n", me);
  message_vision("���ǣ���һ�ſ��ֺ����ˣ�\��\�����\��\(rock) \n", me);
  return 1;
}

int do_puton(string arg)
{
  object me=this_player();
  object ob;
  int query;

  if ( arg != "rock" )
     return notify_fail ("������ʲô��ѹѽ����\n");
  if ( present("rock",me) )
  {
    message_vision("$N��ʯͷѹס��ť�����������г���ͨ����\n", me);
    ob=present("rock",me);
    destruct(ob);
    me->set_temp("tree_hole",1);
    set("exits/tree", __DIR__"herbrm.c");
    return 1;
  }
  return 0;
}

int valid_leave(object me, string dir)
{
  if (dir != "tree") 
  {
    this_object()->delete("exits/tree");
    return 1;
  }
  if (me->query_temp("tree_hole") != 1)
    return 0;
  this_object()->delete("exits/tree");  //ֻ�ɽ�ȥһ��
  return 1;
}