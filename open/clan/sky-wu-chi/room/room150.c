inherit ROOM;
void create() {
	set( "short", "���Ű���" );
	set( "owner", "herozero" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room96",
	]) );
	set( "object", ([
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file1"    : "/daemon/class/blademan/obj/shield",
		"amount8"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/obj/gift/bingtang",
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"amount7"  : 1,
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"amount2"  : 1,
		"file10"   : "/open/dancer/obj/maple_ribbon",
		"amount4"  : 1,
		"amount3"  : 1,
		"file8"    : "/open/mogi/castle/obj/blood-water",
		"amount9"  : 1,
		"amount5"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10095 );
	set( "long", @LONG
�ӳ��˽�磬��Զ���ƺ��м�С�ݣ������ּ��������ĵط�����
ס������̫�����ˣ��㲻���ӿ��˽Ų������ȥһ̽��������������
�����ܵľ���ͻȻ�����˴�仯������˲Ϣ���Ļ������㲻���亹
ֱ�������ˣ�������ô��ô�����뿪�˽�磬ȴ�Ƚ��˴�˵�е�����
����
LONG);
	setup();
	replace_program(ROOM);
}
