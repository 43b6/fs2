inherit ROOM;
void create() {
	set( "short", "$YEL$$HBBLU$�������ˮ����$NOR$" );
	set( "owner", "amei" );
	set( "object", ([
		"amount9"  : 3,
		"amount1"  : 1,
		"file4"    : "/open/doctor/obj/gneedle",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"amount5"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file10"   : "/open/doctor/obj/feather",
		"file5"    : "/open/doctor/obj/gneedle",
		"amount3"  : 1,
		"amount4"  : 1,
		"file9"    : "/open/doctor/pill/gnd_pill",
		"amount2"  : 1,
		"file7"    : "/open/dancer/obj/yuawaist",
		"amount10" : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount8"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "build", 10632 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room208",
		"west"      : "/open/clan/sky-wu-chi/room/room218.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
$HIG$һ�����˵أ�ӡ����������һ�������$HIB$���$HIG$��ԭ�����
$HIR$������$HIG$ϲ��������������ص���������һ��$HIB$���$HIG$��$HIB$���$HIG$���
ʽ������������У�$HIR$������$HIG$�ڸ��ﲼ����ˮ�ݣ��ٴ�������
�۵�$WHT$�չ��$HIG$�����㲻�������ʱ����������ֻ������ڸ���
����������������ճ�һ�ְ���֮�ģ�ÿ��$HIR$������$HIG$�в���
��֮�£�����������˵�������顣$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
