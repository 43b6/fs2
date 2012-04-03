// Room : /open/clan/red_fire/room/room43.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$��$HIR$����$HIC$���Ǻ� $HIM$���Ŵ���$HIY$��$NOR$" );
	set( "owner", "reuben" );
	set( "object", ([
		"file4"    : "/open/ping/obj/poison_pill",
		"amount5"  : 20000,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/dancer/obj/magicbook",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/doctor/pill/ice_pill",
		"amount10" : 20000,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"file10"   : "/open/killer/obj/bellstar",
		"amount6"  : 1,
		"file5"    : "/open/killer/obj/bellstar",
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"amount8"  : 216,
		"file6"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 4,
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "build", 10083 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "long", @LONG
��վ��$HIM$����$NOR$����������$HIC$���Ǻ�$NOR$�����峺�ĺ�ˮ�����ɣ�....�ӵ׺���
����һЩ$HIW$��$NOR$�����գ�����˭����ô�������Ǳ���ˮ�п�$HIW$��$NOR$������������
ȥ��һ��......�ǺǺǣ�......$HIY$�ϱ�$NOR$���߶���Ү��������һ�߰�����....
..����ȥ���������......�����ģ�������˵����


LONG);
	set( "clan_room", "������" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 3 */
		"west"      : "/open/clan/red_fire/room/room42.c",
		"northdown" : "/open/clan/red_fire/room/room52",
		"southdown" : "/open/clan/red_fire/room/room49",
]) );
	setup();

	}
