// Room: /open/gblade/port/room/port.c
// made by wugi
//�����¹���ǳ�� , ����������д 6 �� file , �޸�һ�� file
//��Ϊ���߲��� , ���û��Ҫд�� inherit
//�����Ӻ��ߵ��˾���ȥ�޸İ� , �ܿ�� 
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
	"/open/gblade/port/npc/ship_leader":1,
//��ֻ npc �и��ô� , ��������Щ chat_msg , �Ƚϲ���̫����
//�������� npc ���������� ship �Ĳο���
	]));
   set("no_clean_up",1);
  setup();
	set_heart_beat(1);
}

   void arrive_port()
{
	tell_room(this_object(),"���ָ۵��� , ��Ͽ���(out)��!\n");
	set("exits/out","/open/gblade/port/room/port.c");
	new("/open/gblade/port/npc/ship1")->move("/open/gblade/port/room/port"); 
// �����޷��� room �ᵽ room �� , �����������ֻ���� npc , �ֱ𶪵�����
	
}	
  void leave_port()
{
	tell_room(this_object(),"������ , Ŀ�ĵ��Ǿ��µ� !\n");
	delete("exits/out");

	
}
   void arrive_island()
{
	tell_room(this_object(),"���µ����� , ��Ͽ���(out)��!\n");
	set("exits/out","/open/gblade/port/room/island.c");
        new("/open/gblade/port/npc/ship2")->move("/open/gblade/port/room/island");
}	
  void leave_island()
{
	tell_room(this_object(),"������ , Ŀ�ĵ��Ƿ��ָ� !\n");
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

	

