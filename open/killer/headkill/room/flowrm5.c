//��԰��������ͷ��䣬��ȷ�����Ƕ���
inherit ROOM;
void create()
{
set("short", "��԰����");
set("long", @LONG
	������ǰ����һ��Ƭ�����ң������ŷۺ�ɫ�Ļ��䣬΢�������֦��ҡҷ��
	������裬�g���̺죬���貨�˵����ɣ����ɵ����˳���
	��黨�ݵ���һ�ѶѲ�����������ʯ��������ЩСɽ�ߵ�ʯ�ѣ�
	���˾�ɫ��׺�ĸ���и�ɻ���ʯ���뻨֮�����Ųβ�����С����
	����ǰ����·�ϣ��������ż����ң���ס���ȥ·��
	�����������ü����ң�����ֻ��һ��ʯͷ�������������ü����ң�
    (���move east,north,south,west��һ����)

LONG );
setup();
}
void init()
{
  add_action("do_move", "move");
}

int do_move(string arg)
{
  int way;
  object me=this_player();

  if (!arg)
     return notify_fail("ѡ��һ����Ҫȥ�ķ���ɡ�\n");
  if ((arg == "west") || (arg == "north") || (arg == "south"))
  {
//  	message_vision("$N�е�һ���ۻ����ң��������ߴ����ˣ�\n", me);
    me->set_temp("flowrun",0);
    me->move(__DIR__"flowrm1.c");
    return 1;
  }
  if (arg == "east")
  {//��ʾ������ȷ
	if (me->query_temp("flowrun") > 9)
    {
      me->move(__DIR__"flowrm8.c");
      return 1;
    }
    else
	{
		way=random(6);
		me->add_temp("flowrun",1);
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
	}  //switch block
}
}  //�����ȷ�����block
return notify_fail("���գ����ƶ�������һ������ѽ��\n");
} //function block

