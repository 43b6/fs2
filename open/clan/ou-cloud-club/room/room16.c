// Room : /open/clan/ou-cloud-club/room/room16.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
�����ǰ���ɽׯ�ĸ���������ס�ĵط�������ɽׯ�ڵ�
�˶���ס�ڴˣ�ӵ��Ũ�ҵ���ɱζ�������ԣ���������Ҫ��
��ĵ�С�Ľ�������������˲��ý���ķ��䡣

�������(neonn)�ļң��ұ����Ƿ���(devil)֮��������

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	set( "clan_room", "����ɽׯ" );
	set( "short", "$HIY$��$HIC$��$NOR$��" );
	set( "object", ([
		"file8"    : "/open/killer/obj/bellstar",
		"file6"    : "/open/killer/obj/bellstar",
		"amount6"  : 99999,
		"amount3"  : 99999,
		"amount5"  : 99999,
		"amount1"  : 99999,
		"amount4"  : 99999,
		"file1"    : "/open/killer/obj/bellstar",
		"file3"    : "/open/killer/obj/bellstar",
		"file7"    : "/open/killer/obj/bellstar",
		"amount7"  : 99999,
		"amount10" : 99999,
		"file9"    : "/open/killer/obj/bellstar",
		"amount9"  : 99999,
		"amount8"  : 99335,
		"file10"   : "/open/killer/obj/bellstar",
		"file5"    : "/open/killer/obj/bellstar",
		"file4"    : "/open/killer/obj/bellstar",
		"amount2"  : 99999,
		"file2"    : "/open/killer/obj/bellstar",
	]) );
	set( "build", 10619 );
	set( "exits", ([ /* sizeof() == 1 */
		"west"      : "/open/clan/ou-cloud-club/room/room140",
		"north"     : "/open/clan/ou-cloud-club/room/room18",
		"east"      : "/open/clan/ou-cloud-club/room/room139.c",
		"south"     : "/open/clan/ou-cloud-club/room/room122.c",
]) );
	set( "light_up", 1 );
	setup();

	}
