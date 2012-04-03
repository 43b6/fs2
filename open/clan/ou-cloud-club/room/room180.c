inherit ROOM;
void create() {
	set( "short", "$HIM$���鷿$NOR$" );
	set( "owner", "enter" );
	set( "object", ([
		"amount4"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/capital/guard/gring",
		"file2"    : "/open/capital/obj/gold_pill",
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"file7"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount1"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/ping/questsfan/obj/diamond_armor",
		"file6"    : "/open/doctor/obj/d-mark",
		"file1"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount10" : 1,
		"amount5"  : 1,
		"amount2"  : 1,
		"file4"    : "/open/killer/headkill/obj/world_dag",
	]) );
	set( "light_up", 1 );
	set( "build", 10149 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room13.c",
		"north"     : "/open/clan/ou-cloud-club/room/room144.c",
	]) );
	set( "long", @LONG
���������鷿��ǽ�Ϲ�����һ����ǧ�ŵĹ�
��ƴͼ���ұ�ǽ�ǰ��Ÿ�ʽ��������ܷ��ð���
����ѧ�ĵü����ţ��м��������ľ��׮��ͭ
���Թ������ڴ˷�����֮�ã�ֻ��������������
��Ļ�����ľͭ�ˣ���˵����һ��ɴ��ϰٵ�
ľ��׮��ͭ����

LONG);
	setup();
	replace_program(ROOM);
}
