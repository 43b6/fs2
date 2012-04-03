inherit ROOM;
void create() {
	set( "short", "��С����İ칫��" );
	set( "owner", "microsoft" );
	set( "object", ([
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"file5"    : "/open/main/obj/et_sword",
		"amount3"  : 2,
		"file6"    : "/open/fire-hole/obj/r-pill",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount6"  : 10,
		"amount7"  : 30,
		"amount10" : 1,
		"file9"    : "/open/main/obj/et_sword",
		"amount8"  : 1,
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"file7"    : "/open/fire-hole/obj/y-pill",
		"amount9"  : 1,
		"file2"    : "/open/gblade/obj/sa-head",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/fire-hole/obj/w-pill",
		"amount5"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
	]) );
	set( "build", 10809 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room8",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��������С����İ칫�ң�����ֻ����һ��С���Ӻ����ӣ����϶������߰��㣬
�������ƺ��Ǹ��������ˡ����Ĵ��λΣ��������������������칫�ĵط���
��Ϊ��æ�úܣ�����Ϊ�˰��ɵ�����Ŭ���ܶ�����������˵���칫��ֻ�Ǹ�װ��Ʒ���ˡ�
һ�뵽����㲻���������ΰ�����������Ӧ��Ч���Ķ���!!!

LONG);
	setup();
	replace_program(ROOM);
}
