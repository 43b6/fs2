inherit ROOM;
void create() {
	set( "short", "$HIG$����$NOR$" );
	set( "object", ([
		"file3"    : "/daemon/class/fighter/armband",
		"amount3"  : 1,
		"amount5"  : 1,
		"file9"    : "/open/port/obj/wolf_ring",
		"file2"    : "/daemon/class/fighter/ywboots",
		"file8"    : "/open/ping/obj/ring-2",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"file5"    : "/daemon/class/bonze/puty_pullium",
		"amount1"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"file7"    : "/open/scholar/obj/icefan",
		"amount2"  : 1,
		"file1"    : "/daemon/class/fighter/figring",
	]) );
	set( "owner", "bleak" );
	set( "light_up", 1 );
	set( "build", 10023 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room304",
		"west"      : "/open/clan/ou-cloud-club/room/room249",
	]) );
	set( "long", @LONG
����Ψһ�޴̵�õ�壬�������顣
�����ѵ��������硣û�����ѵ��ˣ�������Ǻ����˲�ࡣ
һ��������ܰ����ĸд������������ǹ�����Ȼ�޾ƣ�Ҳ�����ġ�
���������˶�֪������Ц��������ˣ�Զ���÷�ʢ�ľƲ˸����˸м���
һ����������������ֵ�ʱ������ֵĵط�����һ�����벻�����˱������ ��
���������Լ�����֪�������������ô���ġ�
LONG);
	setup();
	replace_program(ROOM);
}
