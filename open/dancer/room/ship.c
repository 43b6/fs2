inherit ROOM;

int time=0;
void create()
{
   set("short","������");
   set ("long", @LONG
��������Ů����ͼ��������, ��������ǧ����ľ��݊�ƶ���,
�ǵ��񾩳��׸�����˫����õ�����, ֻΪ�ܹ�����һ����������
���ɵļ���. ���ż��������������κ��;�, ��ͨ�������õ���
�����������.

LONG);
   set("light_up", 1);
	set("objects",([
	"/open/dancer/npc/ship_girl":1,
	"/open/tensan/linjoy/npc/linlin":1,
	]));
   set("no_clean_up",1);
   set("no_transmit", 1);
  setup();
	set_heart_beat(1);
}

   void arrive_port()
{
	tell_room(this_object(),"���µ����� , ��Ͽ���(out)��!\n");
	set("exits/out","/open/dancer/room/port.c");
	new("/open/dancer/npc/ship1")->move("/open/dancer/room/port"); 
	
}	
  void leave_port()
{
	tell_room(this_object(),"��������ʻ�����ָ� !\n");
	delete("exits/out");

	
}
   void arrive_fonport()
{
	tell_room(this_object(),"���ָ۵��� , Ҫ��(out)�������!\n");
	set("exits/out","/open/dancer/room/fonport.c");
        new("/open/dancer/npc/ship2")->move("/open/dancer/room/fonport");
}	
  void leave_fonport()
{
	tell_room(this_object(),"���µ�֮�ÿ�ʼ�� !\n");
	delete("exits/out");

}


  void heart_beat()
{
	
	time++;
	if(time>60)
// 60 Ϊ���� , Ҫ���ܼ��͵���һ�� 
	time=1;
	if(time==1)
	arrive_port();
	if(time==11)
	leave_port();
	if(time==31)
	arrive_fonport();
	if(time==41)
	leave_fonport();
}

	

