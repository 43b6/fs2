inherit ROOM;
 void create()
{
  set ("short","��ͥ�еĴ�");
  set ("long",@LONG
�����ǿӶ��ľ�ͷ��֮ǰ���������ǹ����⣬��Ϊ��ĸ��ӿ�������
�ø���ҫ�ۣ���ϸһ����������⾹��͸������ɢ�������Ҳ���͸����
�����⣬���˲��ò���̾����������
LONG);
  
  set("outdoors", "/open/badman");

  set("exits", ([ /* sixeof() == 1 */
  "east" : __DIR__"bump.c",
]));

  setup();
}

void init()
{
  add_action("do_search","search");
  add_action("do_dig","dig");
}
int do_search()
{
  object who;
  who = this_player();
  message_vision("�㿴�˿����ϵ���أ���������ģ���������ڣ�dig����\n",who);
  who->set_temp("marks/dig",1);
  return 1;
}
int do_dig()
{
  object who;
  who = this_player();
  if (who->query_temp("marks/dig",1))
  {
   message_vision("[1;36m����ѽ�ڣ���Ȼһ��ҫ�۵�������ҫ���㣡[1;31m
���ⶴѨ��Ϊ��ķ������Ϳ�Ҫ���ˣ���[1;32m
ͻȻ����ץ�����·��ĺ��죬��������������[0m\n",who);
  who->move("/open/badman/room/wolf17.c");
   return 1;
  }
  else
  {
  message_vision("[36m��Ҫ�����[0m\n",who);
  return 1;
  }
}
