inherit ROOM;
void create() {
	set( "short", "$HIC$���㺣$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"amount3"  : 1,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount10" : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file4"    : "/daemon/class/fighter/figring",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"file2"    : "/open/tendo/obj/chaosbelt",
		"amount2"  : 1,
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/daemon/class/blademan/obj/shield",
		"amount8"  : 1,
		"amount9"  : 1,
		"file6"    : "/open/wu/npc/obj/armband",
	]) );
	set( "build", 10063 );
	set( "light_up", 1 );
	set( "owner", "bobe" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room253",
		"west"      : "/open/clan/ou-cloud-club/room/room246.c",
	]) );
	set( "long", @LONG
���Ǿ������Ϣ�أ��洦�����Կ����ܶྨ���
����������Կ����ܶྨ���ڴ�������ȥ����������
�������������ŵ�Ȼ����һֻ���ľ�����Ҳ�����
�����ڴ������ţ�ϣ��ÿһ���˶���������֣���
�ұ���������Щϡ�ж��

LONG);
	setup();
	replace_program(ROOM);
}
