inherit ROOM;
void create() {
	set( "short", "����д����2" );
	set( "owner", "kanno" );
	set( "light_up", 1 );
	set( "object", ([
		"amount3"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/killer/obj/black",
		"amount5"  : 23750,
		"amount2"  : 1,
		"file4"    : "/open/mogi/dragon/obj/key",
		"amount1"  : 609,
		"file5"    : "/open/killer/obj/hate_knife",
		"file3"    : "/open/killer/obj/dagger",
		"file2"    : "/daemon/class/fighter/ywhand",
	]) );
	set( "build", 10470 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room113",
	]) );
	set( "long", @LONG

������һ�䴴��д���ң��㿴���ϸ�����Ŭ������ͷ��
������ר�ĵ�д�壬��˵����С�ɴ�󽻴��������ҵ
���ڷ����֮ǰ��һ��Ҫ������������......��....��
....��....����������룬��Ӱ�쵽ÿһλɱ��ร���
�޷���ɵڶ��εĽ��ף������������øϸ���Խ��Խ��
�......��Ϊ......���Ե���ʳ�Զ��ʣ�����....��..
..��....


LONG);
	setup();
	replace_program(ROOM);
}
