// Room : /open/clan/ou-cloud-club/room/room130.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����ɽׯ" );
	set( "light_up", 1 );
	set( "exits", ([ /* sizeof() == 1 */
		"east"      : "/open/clan/ou-cloud-club/room/room196",
		"west"      : "/open/clan/ou-cloud-club/room/room14",
]) );
	set( "short", "$HIY$��$HIC$��$HIR$һ��$NOR$" );
	set( "object", ([
		"file3"    : "/open/fire-hole/obj/r-pill",
		"file6"    : "/open/ping/obj/ring-2",
		"file9"    : "/open/dancer/obj/maple_ribbon",
		"file5"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/mon/obj/ghost-claw",
		"file10"   : "/open/dancer/obj/yuawaist",
		"amount6"  : 1,
		"amount4"  : 292,
		"amount10" : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"amount3"  : 25,
		"file1"    : "/open/fire-hole/obj/w-pill",
		"amount5"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 76,
		"amount8"  : 1,
		"amount9"  : 1,
		"amount2"  : 1,
	]) );
	set( "owner", "flyindance" );
	set( "build", 10387 );
	set( "long", @LONG
����ʮ���޵��ϴ����顳��ס�������Ŵ���
�ǰ���������ʱ�Ĵ�磬��ѧ�ƺ����ڰ�������֮
�ϣ���ȴ�����ڴˣ����˷�װ�θ�Ϊ���ӣ�ֻ��һ
�Ŵ���������˯������ֻ���������õ�ľ��������
���ѣ�ǽ�ǵ��ǰ��Ų�����ߣ�

LONG);
	set( "cmkroom", 1 );
	setup();

	}
