inherit ROOM;
void create()
{
set("short", "Ī��������");
set("long", @LONG
	������ǰ����һ��Ƭ��ɲ�ĺ�ˮ����˵�˺�ˮ����ƽ��
	�����ڲ�������ӿ������Ӿ���߳��ĸ���Ҳ�������׳���
	��ʱ���Ѿ����������ˣ����Ŷ�ˮ��Ĺ�Ч���㲢û��̫�������
	Ȼ����������Ļ�����ֻ�����𣿿�������Ĵ�����...........

LONG
);
set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"lk5.c",
  "eastnorth" : __DIR__"lk3.c",
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
   if (me->query_temp("memory")  == 4 )
  {
    message_vision("$N���ö�ˮ�����������ˮ����ϸ��Ѱ�Ҵ������Ӱ��\n", me);
    message_vision("$N��Ȼ����ˮ����һ����Ӱһ���������ٶ�֮��������������\n",me);
    message_vision("$N���붨�������ʱ����Ӱ�Ѿ���ʧ�ڶ��Ϸ�\n",me);
    me->set_temp("find_fish",1);
    me->set_temp("memory",5);   //��ֹ������ͬһ�ط��ظ�Ѱ��

				  //FIND�lFISH���������׷�ٴ����
    return 1;
  }
  if (me->query_temp("memory")  == 5 )
  {
    message_vision("$N���ö�ˮ�����������ˮ����ϸ��Ѱ�Ҵ������Ӱ��\n", me);
    message_vision("$N����ˮ�У���һ��Ⱥ��Ӱ���㹥������\n",me);
    me->set_temp("find_fish",10);
me->set_temp("memory",6);
				  //FIND�lFISH���������׷�ٴ����
    	new("/open/killer/memory/big_fish.c")->move("/open/killer/memory/lk9.c");
	new("/open/killer/memory/small_fish.c")->move("/open/killer/memory/lk9.c");
	new("/open/killer/memory/small_fish.c")->move("/open/killer/memory/lk9.c");
	new("/open/killer/memory/small_fish.c")->move("/open/killer/memory/lk9.c");
	new("/open/killer/memory/small_fish.c")->move("/open/killer/memory/lk9.c");
	new("/open/killer/memory/small_fish.c")->move("/open/killer/memory/lk9.c");
 new("/open/killer/memory/small_fish.c")->move("/open/killer/memory/lk2");
    new("/open/killer/memory/small_fish.c")->move("/open/killer/memory/lk3");
	new("/open/killer/memory/small_fish.c")->move("/open/killer/memory/lk5");
	new("/open/killer/memory/small_fish.c")->move("/open/killer/memory/lk8");
	new("/open/killer/memory/small_fish.c")->move("/open/killer/memory/lk7");
	new("/open/killer/memory/small_fish.c")->move("/open/killer/memory/lk4");
    return 1;
  }
   tell_object(me,"���ں��У��Ĵ�Ѱ�ң�������û�п���ʲô������\n������Ҫ�������ط�����\n");
   return 0;
 }
