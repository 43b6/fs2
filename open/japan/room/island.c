// Room: /open/gblade/port/room/port.c
inherit ROOM;

void create()
{  
   
   set("short","��孵�����");
   set ("long", @LONG������ӳ�������е���һЩ������ַ��ε�����������
����һ���ľ���ϰ���ƺ�����ԭ�����кܴ�Ĳ��졣
                      ......δ�깤  ^_^
LONG);
   set("light_up", 1);
	set_heart_beat(1);
  set("outdoors", "/open/japan");
  	

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
	this_player()->move("/open/japan/room/ship");
	return 1;
	}
	
return 0;
}	
