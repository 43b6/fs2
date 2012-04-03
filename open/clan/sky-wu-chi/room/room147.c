inherit ROOM;
void create() {
	set( "short", "С���Ĺ뷿" );
	set( "object", ([
		"file10"   : "/daemon/class/fighter/armband",
		"file7"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/daemon/class/bonze/puty_pullium",
		"file4"    : "/open/dancer/obj/yuawaist",
		"amount7"  : 1,
		"amount10" : 1,
		"file5"    : "/open/dancer/obj/yuaboots",
		"amount8"  : 1,
		"file8"    : "/open/ping/obj/ring-2",
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"amount4"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"amount3"  : 1,
		"file1"    : "/open/ping/obj/chilin_legging",
		"amount6"  : 1,
		"amount9"  : 1,
		"amount1"  : 1,
		"file9"    : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
	]) );
	set( "owner", "oop" );
	set( "light_up", 1 );
	set( "build", 10103 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room149",
	]) );
	set( "long", @LONG
����һ���������ϵķ��䣬�������������ʼ��Ҫ�����ˣ�������֣�ƽʱ������
�����ڱ���������ͺ����Ҷ�������һ������ô���ܻ�վ��������

�䲻����ѧС����ȭ�磺
�����ϰ�ʥ�����£�ȼ�����Լ���С���棬��ȵ�һʽ�����ҵġ��ǡ��ơ��硡����������

�����ϴ�ȵڶ�ʽ�����ҵġ���  ��  Ů  ��  ֮  ��  ˡ������������  ʯ  ��  ȭ��

������ȼ����ȫ���С���棬��ȵ���ʽ�����ҵġ���  ��  ��  �衯������

���ͻ�����봴����ǿһ��

�����ϴ��һ������ʽ�����ҵġ���  ��  ��  ��  ȭ��������

LONG);
	setup();
	replace_program(ROOM);
}
