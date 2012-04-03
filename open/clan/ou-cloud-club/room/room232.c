inherit ROOM;
void create() {
	set( "short", "[1;31mа���ģ���[0m" );
	set( "owner", "rings" );
	set( "object", ([
		"file2"    : "/open/capital/guard/gring",
		"amount9"  : 1,
		"file4"    : "/open/mogi/castle/obj/fire-king-head",
		"file3"    : "/daemon/class/blademan/obj/ublade",
		"amount5"  : 1,
		"file8"    : "/open/main/obj/shiblade",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"amount8"  : 1,
		"file5"    : "/daemon/class/blademan/obj/iceblade",
		"file7"    : "/open/mogi/castle/obj/fire-king-head",
		"file9"    : "/open/mogi/castle/obj/fire_book",
		"amount4"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/gblade/obj/sa-head",
		"file6"    : "/open/gblade/obj/sa-head",
		"amount7"  : 1,
	]) );
	set( "build", 11076 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room230",
	]) );
	set( "long", @LONG
����С������ǰ����������һ��ռ������ʯ�ң�����
�Ǵӽ�Ϊ�ϲ��ʯ��͸�������ʯ�ҵ����������һ������
�����������һ��ˮ��ɫ�ĵ��������������˵����⣬����
�ӽ���ʱ��ͻȻ�о���һ�������ڿ��������������ܵ�����
�·𶼱���һ˲�䱻��գ�ֻ�������������Ȼ��ͨ����ͨ
���ڶ���Χ�ơ�
  
LONG);
	setup();
	replace_program(ROOM);
}
