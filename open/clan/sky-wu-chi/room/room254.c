inherit ROOM;
void create() {
	set( "short", "�簲��Ů��" );
	set( "owner", "xraistlin" );
	set( "object", ([
		"amount3"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/killer/obj/k_ring",
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
	]) );
	set( "build", 10704 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room240",
	]) );
	set( "long", @LONG
�簲��Ů
[1;32m����ͫ[0m
1985/4/12/O��/�����س���
[1;35m�ӻ�����[0m
1988/2/7/AB��/�����س���
[1;36m��ϣ��[0m
1987/6/17/O��/����������
[1;31mʸ������[0m
1983/1/20/A��/���δ��س���
���ĸ����Ҿ�����ɰ���
LONG);
	setup();
	replace_program(ROOM);
}
