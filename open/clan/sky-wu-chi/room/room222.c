inherit ROOM;
void create() {
	set( "short", "$HIW$����԰$NOR$" );
	set( "owner", "timekiller" );
	set( "object", ([
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 17195,
		"file8"    : "/open/killer/obj/hate_knife",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 90,
		"file9"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount1"  : 1,
		"amount7"  : 854,
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"amount4"  : 1,
		"file10"   : "/open/killer/obj/black",
		"amount6"  : 80,
		"file6"    : "/open/doctor/pill/sky_pill",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"file7"    : "/open/killer/obj/s_pill",
		"amount2"  : 1,
	]) );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room223",
	]) );
	set( "build", 10950 );
	set( "long", @LONG
�ۣ��������������޼��еĶ���԰�ˣ��ٺ١����벻����
���ﾹȻ����ѵģ�����������Ķ���Ҳ̫��ֻ�˰ɣ�
ֻ������ֻС����Сè���ѣ����У�����԰��ô��ª��ô�У�
����������$HIW$Diamond$NOR$������������ɣ�
�����´βŻ��и���Ķ����

LONG);
	setup();
	replace_program(ROOM);
}
