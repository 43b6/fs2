inherit ROOM;

void create()
{
  set("short", "����");
  set("long", "����һ�����͵�������������񡣵��ڲ��İ�\��ȴ�൱��
���������ڵĽ�����һ���൱���ľ�崲���϶���˵��Ӧ�þ�
���ⴲ�˰ɣ�
");

  set("exits", ([ /* sizeof() == 4 */
  "out" : "/open/main/room/d5.c",
]) );

  set("light_up",1);

setup();
}

void init()
{
 add_action("do_search","search");
 add_action("do_open","open");
}

int do_search(object me)
{
  object who;
  who = this_player();
  message_vision("[1;37m$N��ľ�洲����ϸ�ز쿴��һ�������ִ�����ƫ��ĵ�
���и����ۣ������ӿ������ֽ���򿪣�open����[0m\n",who);
  who->set_temp("marks/open",1);
  return 1;
}

int do_open()
{
  object who;
  who = this_player();
  if (who->query_temp("marks/open",1))
  {
   message_vision("[1;37m$N�������봲�ϵİ����ڣ�����һ����
һ��ͨ������ڱ�����ǰ��[0m\n",who);
   set("exits/enter",__DIR__"d_c01.c");
   set_temp("have_open",1);
   remove_call_out("do_closed");
   call_out("do_closed",60);
   return 1;
  }
}

void do_closed()
{

        delete_temp("have_open");
        delete("exits/enter");
        tell_room(this_object(),"[1;37m��������ڱ���ɰ�������죬����������ľ���ٶȱ����ϣ�[0m\n");
}
