inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "pighead" );
	set( "object", ([
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 63,
		"amount8"  : 1,
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"file3"    : "/open/fire-hole/obj/g-pill",
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 70,
		"amount5"  : 1,
		"amount4"  : 98,
		"file1"    : "/open/fire-hole/obj/r-pill",
	]) );
	set( "build", 10404 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room179",
	]) );
	set( "long", @LONG

    �����Ǵ�˵�е�[0;1;32m��[1m��[1m��[1ms[1m��[1m��[0m��һ������з��ּ�ֻ�ɰ���С��������
Ϸ��ˣ�ţ�����С��򣬲�ʱ�����ڿ��У�������Ҫ�����Ǳ�������
�棬�����㱧������ͬʱ��Զ�������ߴ�ĽŲ����������������η
�壬�ѵ���������Ĵ��ڣ������ڿ���Ҫ��Ҫ�뿪ʱ������ǰ����һ
ֻ�ߴ�Ļ������������³����ܵ�[0;1;31m��[1m��[1m��[1mV[0m����һ���Ų��������ڵ��棬
һ����ͷ�������Ѳ����ұ����Ǡ���С����


LONG);
	setup();
	replace_program(ROOM);
}
