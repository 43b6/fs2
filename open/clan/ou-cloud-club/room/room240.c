inherit ROOM;
void create() {
	set( "short", "ӱӱ������С��" );
	set( "object", ([
		"file1"    : "/open/fire-hole/obj/k-pill",
		"amount1"  : 3,
		"file4"    : "/open/killer/obj/hate_knife",
		"amount2"  : 6,
		"file2"    : "/open/ping/obj/poison_pill",
		"amount4"  : 12784,
		"amount3"  : 1,
		"file3"    : "/open/mogi/castle/obj/blood-water",
	]) );
	set( "light_up", 1 );
	set( "build", 10009 );
	set( "owner", "sakira" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room236",
	]) );
	set( "long", @LONG
����ӱӱƽ����Ϣ�ĵط�,������ǰ�и��ǳ���ֵ�С����.....
�ƺ��и�����˼��ı���,��ǳ��ǳ��ĺ���.....
ȴ�ַǳ��ǳ��������ܵĻ���,�ܾ��õ�������ӱӱ����Ӱ....
�ƵĲ�����ǰ�����������뿪����ط�.....
�Ϩ�~~�Ϩ�~~�Ϩ�~~�Ϩ�~~�Ϩ�~~�Ϩ�
ͻȻӱӱ�������������....*^_^*...@#$%!


LONG);
	setup();
	replace_program(ROOM);
}
