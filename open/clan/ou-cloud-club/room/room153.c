inherit ROOM;
void create() {
	set( "short", "��ĸѼ" );
	set( "owner", "oasis" );
	set( "light_up", 1 );
	set( "object", ([
		"file3"    : "/u/d/dhk/questsfan/obj/diamond_armor",
		"amount1"  : 1,
		"file10"   : "/open/mogi/village/obj/mogi_ring",
		"amount10" : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"file2"    : "/u/d/dhk/questsfan/obj/diamond_boots",
		"amount2"  : 1,
		"file8"    : "/open/capital/obj/blade2",
		"file1"    : "/u/d/dhk/questsfan/obj/diamond_belt",
	]) );
	set( "build", 16000 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room152",
	]) );
	set( "long", @LONG
  ����Ѽ�ڰ��Ƶĵ�һ����,���ĺ�����С����ס�ڸ���,����slayerס��б����
����Ѽ��һֻ�൱��������Ѽ��,��Ȼ����������slayerɱ�˺ܶ���ϸ��,������Ȼ
�൱�չ���,��Ȼ����Ѽ�Ѿ�������,���������������ļ��ܸ�С����С���������
������.Ŀǰ���ڱչ���,�г�һ�ս����س�����.

  
LONG);
	setup();
	replace_program(ROOM);
}
