inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIC$��$NOR$��$HIM$��ͥ$NOR$" );
	set( "owner", "miko" );
	set( "object", ([
		"amount2"  : 150,
		"file2"    : "/open/fire-hole/obj/g-pill",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"amount9"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"amount6"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 2,
		"file7"    : "/open/mogi/castle/obj/sspill",
		"amount5"  : 1,
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"amount1"  : 13,
		"file9"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/capital/guard/gring",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"amount3"  : 100,
		"amount8"  : 1,
		"file1"    : "/open/fire-hole/obj/w-pill",
	]) );
	set( "build", 10617 );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/ou-cloud-club/room/room203.c",
		"jump"      : "/open/clan/ou-cloud-club/room/room313",
		"southdown" : "/open/clan/ou-cloud-club/room/hall.c",
		"north"     : "/open/clan/ou-cloud-club/room/room122.c",
		"northup"   : "/open/clan/ou-cloud-club/room/room119.c",
		"south"     : "/open/clan/ou-cloud-club/room/room14.c",
		"west"      : "/open/clan/ou-cloud-club/room/room142.c",
		"down"      : "/open/clan/ou-cloud-club/room/room87.c",
		"east"      : "/open/clan/ou-cloud-club/room/room244.c",
	]) );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�ĵط�������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

�����Ļ�������(long)�ķ�������ӣ��ұ����Ǻ�ҹ����(del)֮����ڣ��

LONG);
	setup();
	replace_program(ROOM);
}
