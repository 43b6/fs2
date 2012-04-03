// Room: /open/gblade/port/room/port.c
inherit ROOM;
void do_start_ship();
void create()
{  
   
   set("short","���ָ۸ۿ�");
   set ("long", @LONG�������Ƿ��ָ۸ۿڣ�������ɴ˴ǰ�����µ������͵�...
                     
LONG);
   set("light_up", 1);
	set_heart_beat(1);
  set("exits", ([ /* sizeof() == 1 */
        "north" : "/open/port/room/r5-1",  	
"south" : "/open/killer/sea/room/fonrm1",
]));
 setup();
}
void init()
{
	add_action("board_ship","board");
        do_start_ship();
	
}
void do_start_ship()
{
        object ob1;
object ob2;
        if(!find_object("ship girl"))
        {
        ob1=new("/open/dancer/npc/ship_girl");
         ob1->move("/open/dancer/room/ship");
        destruct(ob1);
        }
/*
       if(!find_object("old man"))
         {
ob2=new("/open/clan/hero/hero_ship_man");
     ob2->move("/open/clan/hero/ship");
            destruct(ob2);
          }
*/
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
	message_vision("$N�ߵ����� , ������������ !\n",this_player());
	this_player()->move("/open/dancer/room/ship");
	return 1;
	}
/*
     if(str=="heroship") 
         {
           message_vision("$N�ߵ����� , ������������!\n",this_player());
        this_player()->move("/open/clan/hero/ship");
                    return 1;
                 }
*/
	
return 0;
}	

int valid_leave(object me, string dir)
{  
	int max; 
	object ob2;  
	if (dir == "south")  
	{	 
		if ( !present("static_water",this_player()) )  //�������Ƿ��ж�ˮ��	
		{//���û�ж�ˮ��
 		  message_vision("û�д���ˮ�飬$N�׳հ����������������Ϊʧ�������\n",me);		   message_vision("�Һ�$N��������ذ���..........\n", me);
		  me->add("kee",-50);		   
//          me->move("/open/gblade/navy/room/d1-5");
	return notify_fail("ȥ��������������ˮ���\n");
		}  	 
		//����ж�ˮ��ʹ������ͨ��	
		 return 1;  
	}//��ʾ���������������ͨ��
	return 1;
}

