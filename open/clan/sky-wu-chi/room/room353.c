inherit ROOM;
void create() {
	set( "short", "����ĩ��" );
	set( "owner", "biwem" );
	set( "object", ([
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"file9"    : "/open/wu/npc/obj/armband",
		"file7"    : "/open/killer/outsea/dstone",
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/capital/guard/gring",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount2"  : 1,
		"file8"    : "/open/capital/room/king/obj/km-cloak",
		"amount1"  : 1,
	]) );
	set( "build", 10692 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room278",
	]) );
	set( "long", @LONG
��Ц ��αװ���µ����� ���ͷ �����Լ����º� 
��ֻ�� �ܽ�һ���ʱ������ ��ȴ��ͬ�鶼���� ;��� ����̽�Լ������û ȫ���� ����ֻ����ƣ�� ;����ν �����ѹ��ͷ�����һ�� ��Ը����������Զ�߸߷� ;��һ� �᲻�� ������������˭ ;ҹԽ�� ��Υ�� ��׷�ѻ�ζ ;�ҵ����罫���ݻ� Ҳ������ԸΥ ;�۲��� ˯��˯ ��Ӱ���������� ;ҹԽ�� ��Υ�� ��˭�ϰ�ο ;�ҵ����罫���ݻ� �����Ƿ�Ҳ����һ���� ;��һ� �᲻�� ������˯ ҹԽ�� ��Υ�� ��˭��ο
LONG);
	setup();
	replace_program(ROOM);
}
