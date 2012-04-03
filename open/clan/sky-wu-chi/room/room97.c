inherit ROOM;
void create() {
	set( "short", "$HIW$����һ��$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/tendo/obj/chaosbelt",
		"file6"    : "/open/capital/obj/king-boots",
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"file5"    : "/open/ping/obj/gold_hand",
		"amount7"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"amount9"  : 1,
		"file10"   : "/obj/gift/bingtang",
		"amount3"  : 1,
		"file3"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"amount10" : 1,
	]) );
	set( "build", 10152 );
	set( "owner", "herozero" );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"out"       : "/open/clan/sky-wu-chi/room/room26.c",
		"north"     : "/open/clan/sky-wu-chi/room/room96.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�����Ǵ�˵�е�ʥ�ء�����һ�ߡ�����˵��˵�е���ʥ��ס���⣬
����ʵ�ʵĵص�ȴʼ�ո��գ���˵�в�����Ϊ��Ѱ����ʥ�������⣬��
��������޹��������������������ľ�ɫ��������������Ŀ�⣬Ҳ��
��һ����С�ľ������ҵ���˵�е���ʥ� :>
LONG);
	setup();
	replace_program(ROOM);
}
