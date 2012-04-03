//��԰��������ͷ��䣬��ȷ�����Ƕ���
inherit ROOM;
string npc_name;
void create()
{
set("short", "��԰����");
set("long", @LONG
	������ǰ����һ��Ƭ�����ң������ŷۺ�ɫ�Ļ��䣬΢�������֦��ҡҷ��
	������裬�g���̺죬���貨�˵����ɣ����ɵ����˳���
	��黨�ݵ���һ�ѶѲ�����������ʯ��������ЩСɽ�ߵ�ʯ�ѣ�
	���˾�ɫ��׺�ĸ���и�ɻ���ʯ���뻨֮�����Ųβ�����С����
	������ǰ��һ��ʯ�ѵ�·����ʮ��֮����һЩ��ɫ���¡�
	����ֻ��һ��ʯͷ�������������ü����ң������������ü����ң�
 	   (���move east,north,south,west��һ����)

LONG );
set("no_transmit",2);
setup();
}
void init()
{
  int i;
 object guard,me;

  i=random(4); 
 if(interactive(me = this_player()))
 {
  switch(i)
  {
	case 0:
	{
		guard=new("/open/killer/headkill/npc/hoga.c");
		guard->move("/open/killer/headkill/killtest/flowrm6.c");
		npc_name="ice river";
		break;
	}
	case 1:
	{
		guard=new("/open/killer/headkill/npc/shun.c");
		guard->move("/open/killer/headkill/killtest/flowrm6.c");
		npc_name="shun";
		break;
	}
	case 2:
	{
		guard=new("/open/killer/headkill/npc/seiya.c");
		guard->move("/open/killer/headkill/killtest/flowrm6.c");
		npc_name="seiya";
		break;
	}
	case 3:
	{
		guard=new("/open/killer/headkill/npc/ikki.c");
		guard->move("/open/killer/headkill/killtest/flowrm6.c");
		npc_name="ikki";
		break;
	}
	case 4:
	{
		guard=new("/open/killer/headkill/npc/shuryu.c");
		guard->move("/open/killer/headkill/killtest/flowrm6.c");
		npc_name="shuryu";
		break;
	}
  }
 }
  add_action("do_move", "move");
}

int do_move(string arg)
{
  int way;
  object me=this_player();
  object ob=this_object();

  if (!arg)
     return notify_fail("ѡ��һ����Ҫȥ�ķ���ɡ�\n");
 if(present(npc_name,environment(me))) 
     return notify_fail("С�ӣ��ȴ�������˵\n");	

  if ((arg == "west") || (arg == "north") || (arg == "south"))
  {
    me->set_temp("killrun",0);
    me->move(__DIR__"flowrm1.c");
    return 1;
  }
  if (arg == "east")
  {//��ʾ������ȷ
    if (me->query_temp("killrun") > 10)
    {
      me->move(__DIR__"flowrm8.c");
      return 1;
    }
    else
	{
		way=random(8);
		me->add_temp("killrun",1);
		switch (way)
		{
			case 0:
			{
				me->move(__DIR__"flowrm2.c");
				return 1;
			}
			case 1:
			{
				me->move(__DIR__"flowrm3.c");
				return 1;
			}
			case 2:
			{
				me->move(__DIR__"flowrm4.c");
				return 1;
			}
			case 3:
			{
				me->move(__DIR__"flowrm5.c");
				return 1;
			}
			case 4:
			{
				me->move(__DIR__"flowrm6.c");
				return 1;
			}
			case 5:
			{
				me->move(__DIR__"flowrm7.c");
				return 1;
			}
			case 6:
			{
				me->move(__DIR__"flowrm7a.c");
				return 1;
			}
			case 7:
			{
				me->move(__DIR__"flowrm7b.c");
				return 1;
			}
	}  //switch block
}		//else block
}  //�����ȷ�����block
return notify_fail("���գ����ƶ�������һ������ѽ��\n");
}
