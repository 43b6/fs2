inherit ROOM;
void create() {
	set( "short", "����" );
	set( "owner", "dancer" );
	set( "object", ([
		"amount10" : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file5"    : "/open/capital/obj/blade2",
		"amount2"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/dancer/obj/maple_ribbon",
		"file4"    : "/open/capital/guard/gring",
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"amount1"  : 1,
		"amount4"  : 1,
		"file10"   : "/open/capital/obj/blade2",
		"amount8"  : 1,
		"file6"    : "/open/doctor/pill/sky_pill",
		"file1"    : "/open/capital/obj/blade2",
		"file3"    : "/open/badman/obj/badhelmet",
		"file9"    : "/open/capital/obj/blade2",
		"amount6"  : 339,
		"file8"    : "/open/capital/obj/blade2",
		"amount5"  : 1,
	]) );
	set( "build", 10082 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room119",
	]) );
	set( "long", @LONG
��ǰһƬ�����޼ʵĻ�������,���ܾ���ά�ֺ���С����������
����Դ,���Ĵ�������һ�·���ǰ��Ļ����и��ֻ������з�ʽ
�ƺ����������а�������ϵ�,ֹʱ�㷢���ڻ�������������һ
�����������,����������ܿ����㲻�����������컨��,�����
������ֻС���Ŀ�����ֹ���õ������.

LONG);
	setup();
	replace_program(ROOM);
}
