inherit ROOM;
void create() {
	set( "short", "��԰" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "object", ([
		"file7"    : "/open/ping/questsfan/obj/dagger1",
		"file9"    : "/open/ping/questsfan/obj/dagger1",
		"file1"    : "/open/ping/questsfan/obj/dagger1",
		"amount5"  : 1,
		"file10"   : "/open/ping/questsfan/obj/dagger1",
		"amount8"  : 1,
		"amount4"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/ping/questsfan/obj/dagger1",
		"file6"    : "/open/ping/questsfan/obj/dagger1",
		"file5"    : "/open/ping/questsfan/obj/dagger1",
		"amount9"  : 1,
		"amount7"  : 1,
		"amount10" : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"file8"    : "/open/ping/questsfan/obj/dagger1",
		"file2"    : "/open/ping/questsfan/obj/dagger1",
		"amount2"  : 1,
		"file4"    : "/open/ping/questsfan/obj/dagger1",
	]) );
	set( "light_up", 1 );
	set( "build", 11121 );
	set( "owner", "holeman" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room295.c",
		"east"      : "/open/clan/sky-wu-chi/room/room294",
		"south"     : "/open/clan/sky-wu-chi/room/room305.c",
	]) );
	set( "long", @LONG
����������Ը��ܵ�֮ǰ��û�и��ܵ��������У�����
���������Ѫ�۾���ƽ���ĵط��ɣ�΢����ḧ��������
�������Ž��صľ�ɫ����Щ���ֽ�֯��һ�����������£���
����Ҫ���ڴ˴�����ʱԶ��׷����ŵĽ���·������������
��԰�����Ĵ�������һ�£��������ֱ���һ��ר��������
�����ǣ�����������ֱ�������һ�俴����ͨ��ȴɢ����
�ޱȰ����ķ��䣬���Լ�����Ľ����������жϸ÷��ӵ���
��Ӧ�þ��������ˡ�
LONG);
	setup();
	replace_program(ROOM);
}
