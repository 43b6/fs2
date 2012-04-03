inherit ROOM;
void create() {
	set( "short", "$HIC$�� �� �� ��$NOR$" );
	set( "owner", "roboo" );
	set( "object", ([
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/capital/obj/blade2",
		"file5"    : "/daemon/class/dancer/bee_flute",
		"file6"    : "/open/capital/guard/gring",
		"amount6"  : 1,
		"amount10" : 1,
		"amount4"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10887 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room25.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
���ڰ���$HIR$��ľ��������������÷����$NOR$,
$HIC$��ľ�������������ƹĶ�$NOR$,
$HIW$�ڰ���Ƕ������֦ľСԲ��$NOR$,
�ⷿ�ڵİ��ü�ֱ�ɱȵ���֮�ҵĻ�����,
��˵$HIW$˼��$NOR$ֻ�Ǹ�СС������,
����һ���ȵ�{����!������ö���? *_*}
LONG);
	setup();
	replace_program(ROOM);
}
