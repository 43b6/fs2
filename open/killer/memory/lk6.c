inherit ROOM;
void create()
{
set("short", "Ī�����ϱ�");
set("long", @LONG
	������ǰ����һ��Ƭ��ɲ�ĺ�ˮ����˵�˺�ˮ����ƽ��
	�����ڲ�������ӿ������Ӿ���߳��ĸ���Ҳ�������׳���
	�����ȥ�Կ��������뻹�ǲ�Ҫ��................

LONG
);
set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"hr3.c",
  "east" : __DIR__"lk7.c",
  "north" : __DIR__"lk4.c",
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

   if (me->query_temp("find_fish")  == 2 )  //��Ϊ��Ҫ����Ѱ�������õ��ڼ��
  {
    message_vision("$N���ö�ˮ�����������ˮ����ϸ��Ѱ�Ҵ������Ӱ��\n", me);
    message_vision("$N��һ�εķ���ˮ����һ����Ӱһ�����������ٶ�֮����������������\n",me);
    message_vision("$N������ת������׷��ȥ������Ӱ��ʧ��ԶԶ�Ķ�����\n",me);
    me->set_temp("find_fish",3);
    return 1;
  }
   tell_object(me,"���ں��У��Ĵ�Ѱ�ң�������û�п���ʲô������\n������Ҫ�������ط�����\n");
   return 0;
 }

int valid_leave(object me, string dir)
{
  int max;
 object ob2;

  if ((dir == "north")  || (dir == "east"))
  {
	if (me->query("class") != "killer")
  	{
	    message_vision("$N�¸ҵ�������ȥ������ǿ���ˮ�����Լ������\n",me);
	    message_vision("$N��ˮ����֪�����δ�............\n", me);
	    max=me->query("kee");
	    max= (int) (max/2);
	    me->add("kee",-max);
	    me->move("/open/ping/room/road4");
	    return 0;
	 }
	 if ( !present("static_water",this_player()) )  //�������Ƿ��ж�ˮ��
	{//���û�ж�ˮ�飬����MEM�������������һ����������
		   message_vision("$N�¸ҵ�������ȥ������ǿ���ˮ�����Լ������\n",me);
		   message_vision("$N��ˮ����֪�����δ�............\n", me);
		   if (me->query_temp("memory") ==3)
	  	{
			 ob2=new(__DIR__"static.c");
	       		 ob2->move(me);
  			 me->set_temp("memory",4);
			 me->move(__DIR__"ballrm.c");
		  }
		  if(me->query_temp("memory") < 3)
me->move("/open/killer/room/rbd.c");
		   return 0;
	}  
	 //����ж�ˮ��ʹ������ͨ��
//
	  if(me->query_temp("memory") <= 3)
		   return 0;
	 return 1;
  }
return 1;
}
