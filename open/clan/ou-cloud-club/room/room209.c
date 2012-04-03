inherit ROOM;
void create() {
	set( "short", "$HIG$ҩ$HIR$֮$HIC$��$NOR$" );
	set( "owner", "skyent" );
	set( "object", ([
		"amount6"  : 1146,
		"file4"    : "/open/doctor/pill/human_pill",
		"amount2"  : 1,
		"file2"    : "/open/capital/guard/gring",
		"amount7"  : 522,
		"amount10" : 677,
		"amount8"  : 1,
		"file6"    : "/open/doctor/pill/gnd_pill",
		"amount1"  : 1000,
		"file10"   : "/open/mogi/castle/obj/sspill",
		"file5"    : "/open/fire-hole/obj/y-pill",
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount3"  : 219,
		"amount5"  : 1866,
		"file3"    : "/open/fire-hole/obj/b-pill",
		"amount4"  : 1083,
		"file8"    : "/open/ping/questsfan/obj/diamond_belt",
		"file7"    : "/open/doctor/pill/sky_pill",
	]) );
	set( "build", 10735 );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/ou-cloud-club/room/room297",
		"south"     : "/open/clan/ou-cloud-club/room/room4",
	]) );
	set( "long", @LONG
�˴����ǵ���ʥ���մ͸�����ɽׯ�Ĵ�����ҽ��$HIW$��$HIR$��$HIM$ɽ$HIG$��$NOR$����
��ҩ��������˷�ֻ�������˱Ƕ����Ĵ̱�ζ������������ǰ����
����Ҳ���ǵ������ּ�Ϊ����������ҩ���������ĵ�ҩ������
��Ĵ���У���������һ������������д����$BRED$$HIW$͵ҩ�ߣ�ɱ���⣡��$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
