inherit ROOM;
void create() {
	set( "short", "[1;31m��ɽ����[0m֮��" );
	set( "object", ([
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"amount2"  : 1,
		"file1"    : "/open/snow/obj/book",
		"file3"    : "/open/dancer/obj/yuawaist",
		"file2"    : "/daemon/class/fighter/star",
		"amount3"  : 1,
		"amount4"  : 1,
		"amount1"  : 1,
	]) );
	set( "build", 10452 );
	set( "owner", "xraistlin" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room240",
	]) );
	set( "long", @LONG
��ɽ����
���� 1981��11��7��
������ ���δ��� 
Ѫ�� O�� 
���� ��Ы�� 
��� 157cm 
��Χ B-79cm W-56cm H-79cm 
��Ȥ ����������-�������㽶���� 
���⼼�� ���7�Ρ���Ӿ�����ɹ� 
��������֮��  �۾� (��~��ĺ�����) 
LONG);
	setup();
	replace_program(ROOM);
}
