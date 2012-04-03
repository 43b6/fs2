inherit ROOM;
void create() {
	set( "short", "$HIG$��$HIM$ҩ$HIC$��$NOR$" );
	set( "object", ([
		"amount6"  : 287,
		"amount8"  : 95,
		"file4"    : "/open/mogi/castle/obj/sspill",
		"amount3"  : 126,
		"amount4"  : 400,
		"file10"   : "/open/mogi/castle/obj/sspill",
		"amount10" : 83,
		"file1"    : "/open/fire-hole/obj/p-pill",
		"amount1"  : 800,
		"file2"    : "/open/fire-hole/obj/k-pill",
		"file9"    : "/open/marksman/obj/super_pill",
		"file5"    : "/open/fire-hole/obj/b-pill",
		"file7"    : "/open/mogi/castle/obj/ninepill",
		"amount2"  : 101,
		"amount7"  : 38,
		"file6"    : "/open/fire-hole/obj/r-pill",
		"file3"    : "/open/fire-hole/obj/w-pill",
		"file8"    : "/open/mogi/dragon/obj/power",
		"amount9"  : 1000,
		"amount5"  : 1173,
	]) );
	set( "owner", "enter" );
	set( "build", 10605 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/ou-cloud-club/room/room231",
		"east"      : "/open/clan/ou-cloud-club/room/room4.c",
	]) );
	set( "long", @LONG
����̤�����ʱ��һ�ɵ��������˱Ƕ�����ֻ������
�ѻ���һ�Ѷѵ�ҩ�ݣ����ǽ��������������ҩ�ݣ���ǽ
�߱ڳ��ڸ��Ƿ����Ÿ�ʽ������ҩ����ÿһ������ϡ����
��ģ����˴����ѻ�����˶�ĵ�ҩ���������ۿ�������
�޷����ţ��ɼ�����ɽׯ��ӵ��̫��ĸ��ִ����ˡ�

LONG);
	setup();
	replace_program(ROOM);
}
