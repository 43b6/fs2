inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "object", ([
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
		"amount2"  : 1,
		"file10"   : "/obj/gift/bingtang",
		"amount3"  : 535,
		"amount6"  : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount8"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file9"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/fire-hole/obj/g-pill",
		"file2"    : "/open/capital/obj/blade2",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount1"  : 18,
		"file1"    : "/open/fire-hole/obj/w-pill",
	]) );
	set( "build", 10573 );
	set( "light_up", 1 );
	set( "owner", "icpms" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room211",
	]) );
	set( "long", @LONG


����������  ��������̨  ʱʱ�ڷ���  ��ʹ�ǳ���

���᱾����  �������̨  ������һ��  �δ��ǳ���

��ִ�ҿ�  ���Ĳ���  ������������

�������  �޴�����  Ц��ܿܿ����

�ƿ�������ǧ��  �ضϺ쳾ˮһϪ

�紵���������  ��ѹ�Ѵ߽�����

LONG);
	setup();
	replace_program(ROOM);
}
