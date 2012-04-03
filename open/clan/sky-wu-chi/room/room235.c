inherit ROOM;
void create() {
	set( "short", "Ǭ�����Ե�" );
	set( "light_up", 1 );
	set( "owner", "diana" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room215",
	]) );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file2"    : "/open/marksman/obj/super_pill",
		"amount7"  : 1,
		"file10"   : "/open/magic-manor/obj/dark-soul-dagger",
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 114,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/daemon/class/fighter/ywhand",
	]) );
	set( "build", 10350 );
	set( "long", @LONG
���޶������޳���Ǭ�������ϣ�����Ǭ������ͼ������
���лû�֮���Ժ�һ�����ô���ϣ���׳����Ϣ���ǲ���ȱ
�٣���Ǭ�����Ե��ϣ��ܾ��ñ�һ��ĵ����ϻ�Ҫ���ֲ���˼��
���������ڣ�����Ҳ���������������ƽӶ���㲻֪���������
���·𱻵��еİ�������Ի��ˣ�һʱ�侹��֪����Ǻ�....
LONG);
	setup();
	replace_program(ROOM);
}
