inherit ROOM;
void create()
{
set("short", "��Ҷ������");
set("long", @LONG
	���ƺ�������һ������ĵط��������ĵƹ���ʾ���������̶ܳ�
	����Ϊ������һ�����ܣ��벻����Ȼû���κγ��ڣ�
	�벻��ɱ����̳��Ȼ���������ӵĵط���Ī����������ʲô�������ܣ�
	������Ѱһ�£� Ӧ�ÿ����ҵ�һЩ��˿����......

LONG
);
setup();
}

void init()
{
  add_action("do_search", "search");
}

int do_search(string arg)
{
  object me=this_player();
  int max;

  if (arg)
  	return 0;
  if (me->query_temp("firstpart")  !=2)
  {
    message_vision("$N����....������ô��������ģ�����ѽ����  �ɶ�........��\n", me);
    message_vision("һ˲��һ�����������............\n",me);
    max=me->query("kee");
    max= (int) (max/2);
    me->add("kee",-max);
    tell_object(me,"һ���ײ�����㵯�ɣ���������֮��һֱ׹�䡣��������\n");
    me->move("/open/killer/room/firstrm.c");
    return 0;
  }
  else
  {
    message_vision("$N������Ѱ����һ�£�������һ����ť�������İ�����ȥ\n", me);
    message_vision("һ�������������ǽ��ͻȻ����һ�����ţ����澹Ȼ��³Ѱ!!��\n",me);
    message_vision("�㽫³Ѱ���ϵļ����⿪֮�󣬲��ҽ⿪����Ѩ����\n",me);
    message_vision("$N��³Ѱ�ȳ�����ѯ���йض�孵�����������.....\n",me);
    tell_object(me,"³Ѱ˵�����ϴ�����ȥ���ҵ��������ʱ�򣬾ͷ�������孷���ķ��˹���\n");
    tell_object(me,"�����ԲŻᱻ���������������ϣ��ƺ�����Ϊ��������������孵ĺ����ϡ�\n");
    tell_object(me,"����һ��ǿ��������赲�����Ը����޷��ӽ�������\n");
    tell_object(me,"�������ҵ������֪��(���˵ķ���)�������ǰȥѯ������\n");
    tell_object(me,"��������һ���ܵ����Ƕ��ɱ�ֵĳ���ڣ�����뿪...���һ��Լ��ߵġ�\n");
    me->set_temp("firstpart",3);
    me->move("/open/killer/room/firstrm.c");
    return 1;
  }   
 }
