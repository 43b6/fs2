inherit ROOM;
void create() {
	set( "short", "���Ż����" );
	set( "object", ([
		"amount2"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "owner", "adeyzit" );
	set( "build", 10287 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room284",
	]) );
	set( "long", @LONG
��ʹ���..����ÿ�����˵��Ķ��Ӱ�ȫ���������..�����
˵�ǽ����ҵĵط�..�����ھ��з��������ش󻹲����о�����
��..����Щ��̬�ĳ��پ�������..������������ǧ���Ҳ�б�ץ
ȥ�ص�..��һ���Ǳ�̬���ó�..���ﲻ����..��֮��֮..
LONG);
	setup();
	replace_program(ROOM);
}
