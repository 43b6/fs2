// Room: /open/gblade/port/room/port.c
inherit ROOM;

void create()
{  
   
   set("short","���µ�");
   set ("long", @LONG
������ , ���µ���û������ !!


LONG);
   set("light_up", 1);
	set_heart_beat(1);
  set("outdoors", "/open/gblade");
  	

 setup();
}
 init()
{
	add_action("board_ship","board");
	
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
	this_player()->move("/open/gblade/port/room/ship");
	return 1;
	}
	
return 0;
}	
