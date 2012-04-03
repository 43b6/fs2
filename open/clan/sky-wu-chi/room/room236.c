inherit ROOM;
void create() {
	set( "short", "̫��������" );
	set( "object", ([
		"file6"    : "/open/ping/questsfan/obj/dagger1",
		"file4"    : "/open/ping/questsfan/obj/dagger1",
		"amount5"  : 1,
		"file1"    : "/open/capital/room/king/obj/dagger1",
		"amount1"  : 1,
		"file9"    : "/open/ping/questsfan/obj/dagger1",
		"file5"    : "/open/ping/questsfan/obj/dagger1",
		"amount7"  : 1,
		"file2"    : "/open/ping/questsfan/obj/dagger1",
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/capital/room/king/obj/dagger1",
		"file7"    : "/open/ping/questsfan/obj/dagger1",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/ping/questsfan/obj/dagger1",
	]) );
	set( "owner", "diana" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room215",
	]) );
	set( "light_up", 1 );
	set( "build", 10016 );
	set( "long", @LONG
̫���޶��������޳���̫�����������ϣ�����̫���Ͼ��Ļ��񣬴���
̫������֮��ʼ��֮һ�����ô���ϣ�����Ź������Ϣ�������㲻
�������Ĳ������·���ʱ�ᱻ�����Ϣ��û��һʱ���㾹��֪������
������...��Ȼ...�㿴������˼�������.�ŵ�����æ���Ⱦ���...
LONG);
	setup();
	replace_program(ROOM);
}
