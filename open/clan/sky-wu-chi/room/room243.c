inherit ROOM;
void create() {
	set( "short", "��֮Ĺ" );
	set( "owner", "zeros" );
	set( "object", ([
		"file10"   : "/open/killer/obj/k_ring",
		"amount7"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/capital/guard/gring",
		"file2"    : "/daemon/class/blademan/obj/six-neck",
		"file7"    : "/open/capital/room/king/obj/dagger1",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount10" : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/daemon/class/blademan/obj/ublade",
		"amount9"  : 1,
		"file5"    : "/open/ping/obj/chilin_legging",
		"amount5"  : 1,
		"amount6"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/ping/obj/ring-2",
		"amount3"  : 1,
	]) );
	set( "build", 10142 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room306.c",
		"south"     : "/open/clan/sky-wu-chi/room/room90",
		"out"       : "/open/clan/sky-wu-chi/room/hall.c",
		"north"     : "/open/clan/sky-wu-chi/room/room168.c",
	]) );
	set( "long", @LONG
���������������˲�����������ϸһ�������ﶼ�ǰ����˱���������
�г����ĵ��������ﶼ���Կ�����а��������������������������ʨ
ͷ���������յ�һЩ�൱������������Զ������һ��ɱ��ʮ����ص���
��������Ҫ����ĵ���ȫ��Ҫͨ�����Ŀ�������õĵ�������ص�����
�������ͽ�ܣ�����ĵ������ɸ���������ս�������أ�����صĵ���
        ������صĵ���ȫ���������ɣ��ص��߱���
LONG);
	setup();
	replace_program(ROOM);
}
