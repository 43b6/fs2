// Room : /open/clan/ou-cloud-club/room/room8.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
ͨ����ħ�ǵĵ�·���ǰ���ɽׯ�ڵ���Ҫ��·����
�ߵ�ǽ������$HIC$�����$NOR$������ɵģ���ʱ͸����һ����͸
���⣬��Ѹ����Ի����þ��ڵ�$HIR$������$NOR$��ȼ����˵����
����Ϩ�𣮶��ذ�����ʹ���޼᲻�ݵĽ��ʯ�������
�ɣ�һ����ȥ��â��ǧ��

LONG);
	set( "short", "���Ƶ�" );
	set( "owner", "jet" );
	set( "object", ([
		"file10"   : "/daemon/class/fighter/armband",
		"amount8"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file7"    : "/open/wind-rain/obj/sun_red_cloth",
		"file9"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/doctor/pill/gnd_pill",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"amount10" : 1,
		"amount1"  : 1,
		"amount3"  : 296,
		"amount7"  : 1,
		"file8"    : "/daemon/class/fighter/figring",
		"file2"    : "/open/doctor/pill/sky_pill",
		"amount2"  : 275,
		"file4"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "build", 10777 );
	set( "cmkroom", 1 );
	set( "clan_room", "����ɽׯ" );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/ou-cloud-club/room/room20.c",
		"south"     : "/open/clan/ou-cloud-club/room/room7.c",
]) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	setup();

	}
