inherit ROOM;
void create() {
	set( "short", "����˫��������" );
	set( "object", ([
		"amount4"  : 1,
		"file3"    : "/open/scholar/obj/icefan",
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/mogi/village/obj/mskirt",
		"file1"    : "/open/dancer/obj/maple_ribbon",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/daemon/class/fighter/figring",
		"amount8"  : 1,
		"file5"    : "/daemon/class/fighter/ywhand",
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"amount10" : 1,
		"file4"    : "/open/dancer/obj/yuawaist",
	]) );
	set( "build", 10366 );
	set( "light_up", 1 );
	set( "owner", "miho" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room317",
		"west"      : "/open/clan/sky-wu-chi/room/room181.c",
	]) );
	set( "long", @LONG
һ�߽����������Կ�������˫����æ������Ѫ���ء��Աߵĵ���������������ʮ����̣���С�輸�ϻ��ڷ���һЩ�̾ߣ�������������˶�������������������������ʱ����ע�⵽��������һ�ŷ���˫�޴�ѩ��˪����Ƭ����Ƭ��ĺ�ѩ��˪������ʮ�ֵ�����ء�
LONG);
	setup();
	replace_program(ROOM);
}
