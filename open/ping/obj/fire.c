inherit ITEM;
#define VOID		"/obj/void"
#define QUEST_ROOM	"/open/main/room/s16"
void create()

{
      set_name("����",({"firecracker"}) );
      set_weight(8000);
      if( clonep() )
           set_default_object(__FILE__);
      else {
           set("unit","��");
           set("long","���Ƕμ������õ�����, �����ȼ��(fire)����");
           set("value",0);
           }
      setup();
}

void init()
{
	add_action("do_fire","fire");
}

int do_fire(string str)
{
	object me=this_player();
	object place=environment(me);
	if( !place->query("outdoors") )
	  write("������������Ż𰡡�\n");
	else
	{
	if( str != "firecracker" )
	  write("��Ҫ��ʲô������? \n");
	else
	{
	  this_object()->move(VOID);
	  message_vision("$N�ӻ����ͳ�һ������, Ȼ��˧���Ľ��������ȥ��\n",me);
	  if(me->query_temp("thief") >= 7)
	  {
	    tell_room(environment(me),"[1;36m���̳��������Ļ��������ը�˿���...\n"+
"								  \n"+
"	   [5;31m*[5;35m*	[5;33m*		[0m[1;34m* [1;35m * 				  \n"+
"             [1;36m*  [1;5;31m��   [5;32m*           [0m[1;33m��  	[5;35m*		  [0m[1;35m**      \n"+
"                   [1;31m*         [1;35m�� [5;35m*                        [0m[1;33m*   [5;33m��  \n"+
"                      [5;32m*   *   [0m[1;32m��         [5;35m*        [5;33m*    [0m[1;33m�� [5;36m*      \n"+
"		[5;36m*		[0m[1;36m*  [5;31m*		    [5;36m* 	    [1;31m**    \n"+
"			[5;31m**			[5;32m**[0m		  \n"+
"                            					  \n");
	    call_out("result",4);
	  }
	  else
	  { 
	    tell_room(environment(me),"[36m�����Ǽ������õĹ�ϵ, ��������бб������������[0m\n");
	    destruct(this_object());
	  }  
	}
	}
	return 1;
}
void result()
{
	object me=this_player();
	if( environment(me)->query("capital_thief") == 0 )
	{  
	  write("[36m��������Χ��ûʲô����, ��������Ϊ������Ǿ����������ߵĵط���[0m\n"); 
	  destruct(this_object());
	}  
	else
	{
	  write("[36m���ƺ�Ʋ�������к�Ӱһ����\n������ʧ, ������׷�˹�ȥ��[0m\n");
	  tell_room(environment(me),me->query("name")+"ͻȻ����ææ���뿪�ˡ�\n",me);
	  call_out("follow1",3);
	  me->set_temp("block_msg/all", 1);
	  me->move(VOID);
	}
}
void follow1()
{
	object me=this_player();
	me->set_temp("block_msg/all", 0);
	write("[1;33m(��׷��׷��׷׷׷....)[0m\n");
	call_out("follow2",3);
	me->set_temp("block_msg/all", 1);
}
void follow2()
{
	object me=this_player();
	me->set_temp("block_msg/all", 0);
	write("[1;33m(����ն����׷׷׷....)[0m\n");
	call_out("follow3",3);
	me->set_temp("block_msg/all", 1);
}
void follow3()
{
	object me=this_player();
	me->set_temp("block_msg/all", 0);
	write("[1;33m(��ɽԽ����׷׷׷....)[0m\n");
	call_out("follow4",3);
	me->set_temp("block_msg/all", 1);
}
void follow4()
{
	object me=this_player();
	me->set_temp("block_msg/all", 0);
	write("[36mֻ����Ӱ�ڲݴ�(bush)��һ��, �ƺ�ʧȥ����Ӱ[0m\n");
	me->set_temp("thief",8);
	me->move(QUEST_ROOM);
	destruct(this_object());
}	