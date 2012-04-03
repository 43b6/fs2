inherit ROOM;
void create() {
	set( "short", "С����" );
	set( "object", ([
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount2"  : 1,
		"amount4"  : 2,
		"amount5"  : 1,
		"amount6"  : 1,
		"amount1"  : 9,
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"file7"    : "/open/scholar/obj/s_hands",
		"file9"    : "/open/scholar/obj/icefan",
		"amount7"  : 1,
		"amount8"  : 1,
		"file5"    : "/open/gblade/obj/sa-head",
		"file6"    : "/open/capital/guard/gring",
		"file8"    : "/open/prayer/obj/boris-cloth",
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount3"  : 1,
		"file3"    : "/open/mogi/castle/obj/sspill",
		"file10"   : "/open/ping/obj/chilin_legging",
		"amount9"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10011 );
	set( "owner", "super" );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/room129",
	]) );
	set( "long", @LONG
���������Ŷ�������Ĵ����ң�һ�����ĺ�����������˰������
�������Ǹ�����ɵ��ˣ��᲻�ý�����������ﶪ����
���������и������������ӣ���������൱��Զ��
ǽ����ȴ����һ������֮�ǣ��Լ�ȫ�׵ķ��ߣ�
ԭ����Ҳ������װ�������ط��䣬�ѹֲ������˽���
���Ҳ������С������...
LONG);
	setup();
	replace_program(ROOM);
}
