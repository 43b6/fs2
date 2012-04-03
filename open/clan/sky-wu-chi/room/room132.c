inherit ROOM;
void create() {
	set( "short", "$HIC$˼��֮��$HIW$�ڷ�$NOR$" );
	set( "light_up", 1 );
	set( "build", 29146 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room312",
		"west"      : "/open/clan/sky-wu-chi/room/room41",
	]) );
	set( "object", ([
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/ping/obj/gold_hand",
		"file5"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"amount4"  : 1,
		"amount9"  : 1,
		"amount7"  : 1,
		"file3"    : "/open/dancer/obj/yuawaist",
		"amount8"  : 1,
		"file10"   : "/open/doctor/pill/human_pill",
		"file4"    : "/open/mogi/castle/obj/sspill",
		"amount10" : 33,
		"amount3"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"amount6"  : 1,
		"file9"    : "/open/ping/obj/chilin_legging",
		"file2"    : "/open/dancer/obj/linrboots",
		"amount2"  : 1,
	]) );
	set( "owner", "salicili" );
	set( "long", @LONG
���ڰ���$HIG$��ľ��������������÷����$NOR$,
............$HIR$��ľ�������������ƹĶ�$NOR$,
............$HIW$�ڰ���Ƕ������֦ľСԲ��$NOR$,
��˵$HIW$˼��$NOR$ֻ�Ǹ�СС������,
�ⷿ�ڵİ��ü�ֱ�ɱȵ���֮�ҵĻ�����,
һ��Ų������ж���,
��˭,��Ȼû��˼��ͬ�����д���,
ԭ�����ϴ�$HIC$����$NOR$,
����һ������,���������������ļҾ�̵��Ų�����,
���˰���,���ڻع������ȵ�{����!������ö���? *_*}
LONG);
	setup();
	replace_program(ROOM);
}
