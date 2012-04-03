// Room: /open/gblade/port/room/port.c
//by wugi
inherit ROOM;

void create()
{  
   
   set("short","���ָ۸ۿ�");
   set ("long", @LONG
�����Ƿ��ָ۸ۿ� , �㿴�����СС���̴� , �ɴ�����
���� , �ǳ��ķ�æ , �۱����˸���ʾ��(board) , ˵�����ָ�
Ŀǰͨ���ĵ�����ʱ�� , ��Ǯ��ѶϢ .

LONG);
   set("light_up", 1);
	set_heart_beat(1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 1 */
	"north" : "/open/port/room/r5-1.c",
]));
  	
	set("item_desc",
	(["board":
"����:
���ۿ�Ļ��ϲ , ���г˿�һ����� 

����ͨ���ĵص��� :
���µ� : һ��ʱ��һ��� , ����(board)
ڤħ�� : ������һ��� , δ�깤 , ����
��孵� : �Ϲ���

"]));

 setup();
}
 init()
{
	add_action("board_ship","board");
	do_start_ship();
	
}
 
//�������������������������������Ĵ��ٺ��г���
void do_start_ship()
{
	object ob1,ob2;
	if(!find_object("ship leader"))
	{
	ob1=new("/open/gblade/port/npc/ship_leader");
	 ob1->move("/open/gblade/port/room/ship");
	destruct(ob1);
	}
	if(!find_object("vessel leader"))
	{
	ob2=new("/open/gblade/port/npc/vessel_leader");
	ob2->move("/open/gblade/port/room/vessel");
	destruct(ob2);
	}
}
int board_ship(string str)
{
	object ob;
 	if(!str)
	return notify_fail("��Ҫ��ʲô?\n");	
	if(!objectp(ob=present(str,environment(this_player()))))
        return notify_fail("������� , �����ִ��� ?\n");
//������� , �ҵ�д���и����鷳֮��
//ÿֻ����Ҫ��ͬ id ���ܴ��� , ����λ�ܰ�æ�������� 
//hmm , ������Ӧ��Ҳ����� , Ӣ�ĵĴ���Ӧ��Ҳ������ , ��
        if(str=="ship") 
	{
	message_vision("$N�ߵ����� , �����˶ɴ� !\n",this_player());
	this_player()->move("/open/gblade/port/room/ship");
	return 1;
	}
	if(str=="vessel")
	{
	message_vision("$N�ߵ����� , ��������ڤħ�� !\n",this_player());
	this_player()->move("/open/gblade/port/room/vessel");
	return 1;
	}
	
return 0;
}	
