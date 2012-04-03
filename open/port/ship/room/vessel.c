// Room: /open/gblade/port/room/port.c
inherit ROOM;

int time=0;
void create()
{
	set("short","��ڤħ����");
   set ("long", @LONG
һ������ɭɭ��ħ�� , �������� , ��е�һ�ɺ������� ,
����һ������ʻ�Ŵ� , �ӱ������� , �������­ .

LONG);
   set("light_up", 1);
	set("objects",([
	"/open/gblade/port/npc/vessel_leader":1,
	]));
   set("no_clean_up",1);
  setup();
	set_heart_beat(1);
}

   void arrive_port()
{
	tell_room(this_object(),"���ָ۵��� , ��Ͽ���(out)��!\n");
	set("exits/out","/open/gblade/port/room/port.c");
	new("/open/gblade/port/npc/vessel1")->move("/open/gblade/port/room/port");
	
}	
  void leave_port()
{
	tell_room(this_object(),"������ , Ŀ�ĵ���ڤħ�� !\n");
	delete("exits/out");

	
}
   void arrive_island()
{
	tell_room(this_object(),"ڤħ������ , ��Ͽ���(out)��!\n");
	set("exits/out","/open/gblade/port/room/island2.c");
	new("/open/gblade/port/npc/vessel2.c")->move("/open/gblade/port/room/island2");
}	
  void leave_island()
{
	tell_room(this_object(),"������ , Ŀ�ĵ��Ƿ��ָ� !\n");
	delete("exits/out");

}


  void heart_beat()
{
	
	time++;
	if(time>50)
	time=1;
	if(time==1)
	arrive_port();
	if(time==11)
	leave_port();
	if(time==26)
	arrive_island();
	if(time==36)
	leave_island();
}

	

