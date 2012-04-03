inherit ROOM;
void create() {
	set( "short", "�׻�����" );
	set( "owner", "palapala" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 10240 );
	set( "object", ([
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount8"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/ping/questsfan/obj/stone",
		"file3"    : "/open/gsword/obj/yuskirt",
		"file8"    : "/open/ping/questsfan/obj/posthumous",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount4"  : 1,
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount7"  : 1,
		"file5"    : "/open/ping/obj/ring-2",
		"file6"    : "/daemon/class/bonze/puty_pullium",
	]) );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room144",
		"west"      : "/open/clan/sky-wu-chi/room/room145.c",
		"south"     : "/open/clan/sky-wu-chi/room/room78.c",
	]) );
	set( "long", @LONG
��������Ϊ���׻�����������о�����һ�ֲ���������ɱ���������й���ͬ
���ڸ�����һ��Σ�ն��̼������������ھ����ȴ�δ֪�Ŀ����ԡ������ߵ�����
���ж�ʱ����էȻ�ķ����ڶ�����һ�����صľۻ᳡�������Ǻ������Խ�˷ܵ�
�����߲ʽ�硯�ķ������˹�ȥ������ȴ��һ�����صġ�������֮�ܡ���ס����
Ҫ��������ȥ��·�У��Ƿ��������Ҫ���о�����а취�߹���

LONG);
	setup();
	replace_program(ROOM);
}
