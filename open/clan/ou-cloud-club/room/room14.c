// Room : /open/clan/ou-cloud-club/room/room14.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	set( "light_up", 1 );
	set( "exits", ([ /* sizeof() == 4 */
		"north"     : "/open/clan/ou-cloud-club/room/room118",
		"west"      : "/open/clan/ou-cloud-club/room/room107.c",
		"east"      : "/open/clan/ou-cloud-club/room/room130.c",
		"south"     : "/open/clan/ou-cloud-club/room/room15.c",
]) );
	set( "cmkroom", 1 );
	set( "short", "$HIY$��$HIC$��$NOR$��" );
	set( "object", ([
		"file5"    : "/open/gsword/obj/dragon-cloth",
		"amount2"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/port/obj/wolf_ring",
		"file1"    : "/daemon/class/fighter/armband",
		"amount10" : 1,
		"amount9"  : 1,
		"file10"   : "/open/ping/obj/ring-2",
		"file4"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/scholar/obj/icefan",
		"file3"    : "/open/prayer/obj/kylin-belt",
		"amount5"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file8"    : "/open/ping/obj/gold_hand",
		"amount3"  : 1,
	]) );
	set( "owner", "ltiger" );
	set( "build", 10357 );
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�ĵط�������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

����ǵ�а��������(moblade)�ķ��䣬�ұ���������(koi)֮���ң�

LONG);
	setup();

	}
