inherit ROOM;
 void create()
{
  set ("short","����");
  set ("long",@LONG
����һ�俴���ѻķ��Ѿõ�С�� .�����ϺͰ����׵ķ���Ҳ���ƾ�
���� ,���������ܲ��� ,���ʧ�޵�������� ,�����ƺ���ȷ�����˾�
ס .
LONG);

  set("light_up", -1);
  set("exits", ([ /* sixeof() == 1 */
  "east" : __DIR__"wolf12.c",
]));

  setup();
}

void init()
{
  add_action("do_search","search");
  add_action("do_bump","bump");
}
int do_search()
{
  object who;
  who = this_player();
  if (who->query_temp("marks/karup2",1))
  {
   tell_object(who,"�㵽�����˿����������ƾɵ�����������\n");
   tell_object(who,"�������ţ���ǽ��̮����ʯ����Ȼ��ͨ��\n");
   tell_object(who,"��ס����������Խ�֮ײ����bump����\n");
   who->set_temp("marks/bump",1);
   return 1;
  }
  else
  {
  message_vision("[36m�����ƾɵط���ɶ����Ѱ�ģ�[0m\n",who);
  return 1;
  }
}
int do_bump()
{
  object who;
  who = this_player();
  if (who->query_temp("marks/bump",1))
  {
   tell_object(who,"[1;33m���������ʹ������һײ��[0m\n");
   tell_object(who,"[1;33m������һ������嵽������һ�����䣡��[0m\n");
   tell_object(who,"[1;33m���þ������������һ�գ�������һ�����У���[0m\n");
   who->move("/open/badman/room/bump.c");
   tell_room(this_object(),"[1;31m��ֻ����"+who->query("name")+"��ǰһ�壬�Ͳ�����!��[0m\n");
   return 1;
  }
  else
  {
  message_vision("[36mײ������Ҫײ�����[0m\n",who);
  return 1;
  }
}
