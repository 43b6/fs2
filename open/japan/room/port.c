inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
������һ��Ư���ĺ���������и�ɽ�̾������������
�ҷ�Զ����һСС�ĸ�ʾ�� (board)���ں�����һ���ƺ���
������ԼԼ�Ŀ�����һ�µ���
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
ǰ·ãã�޾��ڣ�����е�����ǰ��
",
]));
  set("light_up", 1);
  set("outdoors", "/open/japan");

  setup();
}
 init()
{
	add_action("board_ship","board");
	do_start_ship();
	
}
 
void do_start_ship()
{
	object ob1;
	if(!find_object("ship leader"))
	{
	ob1=new("/open/japan/npc/ship_leader");
	 ob1->move(__DIR__"ship");
	destruct(ob1);
	}
}
int board_ship(string str)
{
	object ob;
 	if(!str)
	return notify_fail("��Ҫ��ʲô?\n");	
	if(!objectp(ob=present(str,environment(this_player()))))
        return notify_fail("������� , �����ִ��� ?\n");
        if(str=="ship") 
	{
	message_vision("$N�ߵ����� , �����˶ɴ� !\n",this_player());
	this_player()->move(__DIR__"ship");
	return 1;
	}
	
return 0;
}	
