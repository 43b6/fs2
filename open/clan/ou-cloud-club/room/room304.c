inherit ROOM;
void create() {
	set( "short", "$HIR$����$NOR$" );
	set( "object", ([
		"amount4"  : 24,
		"amount7"  : 22,
		"amount1"  : 20,
		"file6"    : "/open/port/obj/wolf_ring",
		"amount6"  : 1,
		"amount5"  : 1,
		"file2"    : "/open/dancer/obj/maple_ribbon",
		"file5"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/doctor/pill/ff_pill",
		"amount2"  : 1,
		"file9"    : "/open/common/obj/pill1",
		"file1"    : "/open/doctor/pill/ice_pill",
		"amount9"  : 61,
		"file7"    : "/open/doctor/pill/f_pill",
	]) );
	set( "owner", "bleak" );
	set( "build", 10078 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room302",
	]) );
	set( "long", @LONG
������ֻ��һ������ϴȥ���ǵ��㲣��Ǿ������˵��ᡣ
�����ĳ���ֻ��һ�Σ�����������Ҳֻ��һ��һ����
ԭ����Ϊ�Լ��������˳Կ࣬��Ҳ��һ�ֿ��֣�
ֻ�������м��������ܵ����ֿ��֡�
��Ϊʲô���Ƕ��Լ��ѵõ�����в�������ϧ��ȴ��ʧȥ��
��׷���أ�
������ʹ�࣬����������������ϣ��������ʹ�ࡣ
���鲻��ռ�еģ����ǹ����������ġ�
LONG);
	setup();
	replace_program(ROOM);
}
