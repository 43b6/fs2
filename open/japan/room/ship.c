inherit ROOM;

int time=0;
void create()
{
   set("short","�ɴ���");
   set ("long", @LONG
һ�pС�ɴ� , �Ѿ��ǳ��ƾ��� , �㲻������ , �������
������Ļ�����Ρ�

LONG);
   set("light_up", 1);
	set("objects",([
	"/open/japan/npc/ship_leader":1,
	]));
   set("no_clean_up",1);
  setup();
	set_heart_beat(1);
}

   void arrive_port()
{
	tell_room(this_object(),"������������ , ��Ͽ���(out)��!\n");
	set("exits/out","/open/japan/room/port.c");
	new("/open/japan/npc/ship1")->move("/open/japan/room/port"); 
	
}	
  void leave_port()
{
	tell_room(this_object(),"������ , Ŀ�ĵ��Ƕ�孵��� !\n");
	delete("exits/out");

	
}
   void arrive_island()
{
	tell_room(this_object(),"��孵����� , ��Ͽ���(out)��!\n");
	set("exits/out","/open/japan/room/island.c");
        new("/open/japan/npc/ship2")->move("/open/japan/room/island");
}	
  void leave_island()
{
	tell_room(this_object(),"������ , Ŀ�ĵ��ǻ������� !\n");
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
	arrive_island();
	if(time==41)
	leave_island();
}

	

