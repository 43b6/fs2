inherit ROOM;
void create() {
	set( "short", "����ڣ" );
	set( "object", ([
		"amount2"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount6"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"file1"    : "/daemon/class/blademan/obj/six-neck",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount3"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "owner", "zeros" );
	set( "light_up", 1 );
	set( "build", 10019 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room167",
		"west"      : "/open/clan/sky-wu-chi/room/room243.c",
	]) );
	set( "long", @LONG
�����������һ������ֱ����������㿴�˿����ܣ�ԭ��������
��˵���ᵶ�ĵط�����������Կ���һ��ʧȥ�����ĵ����ǰ�ʧȥ����
�ĵ���������ϸһ������ѵ���ǧ���ѵ�һ���ĺõ���ֻ��ʧȥ������
�ѣ���Ҫ��ѵ��ָ�����ԭ�е�״ֻ̬������߱Ѫ���ѱ������������
�����п��ܵõ��������������������ж�����������߱Ѫ�����õ���
�Ѿ���������
LONG);
	setup();
	replace_program(ROOM);
}
