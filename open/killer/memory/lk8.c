inherit ROOM;
void create()
{
set("short", "Ī�������Ϸ�");
set("long", @LONG
	������ǰ����һ��Ƭ��ɲ�ĺ�ˮ����˵�˺�ˮ����ƽ��
	�����ڲ�������ӿ������Ӿ���߳��ĸ���Ҳ�������׳���
	��ʱ���Ѿ����������ˣ����Ŷ�ˮ��Ĺ�Ч���㲢û��̫�������
	Ȼ����������Ļ�����ֻ�����𣿿�������Ĵ�����...........

LONG
);
set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"lk7.c",
  "north" : __DIR__"lk5.c",
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
  int max;

  if (arg)
  	return 0;
  if (me->query_temp("memory")  < 4 )
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
   if (me->query_temp("find_fish")  == 1 )  //��Ϊ��Ҫ����Ѱ�������õ��ڼ��
  {
    message_vision("$N���ö�ˮ�����������ˮ����ϸ��Ѱ�Ҵ������Ӱ��\n", me);
    message_vision("$N�ַ���ˮ��һ����Ӱһ���������ٶ�֮��������������\n",me);
    message_vision("$N����һת����æ׷��ȥ������Ӱ�Ѿ���ʧ��ԶԶ������\n",me);
    me->set_temp("find_fish",2);
    return 1;
  }
   tell_object(me,"���ں��У��Ĵ�Ѱ�ң�������û�п���ʲô������\n������Ҫ�������ط�����\n");
   return 0;
 }
