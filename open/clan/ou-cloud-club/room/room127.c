// Room : /open/clan/ou-cloud-club/room/room127.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
������ˮ�м�����Ϊ���ʵ�������,�������㷢���˲���
����������ȥ,��������а��ĳǱ�֮��,���ǻ���һЩ�Ƚ�
�����������,Ȼ���������,��Щ�������С����ȴ�ƺ���
�����Щ�����,�������������д���������ƽ���������!
LONG);
	set( "cmkroom", 1 );
	set( "short", "$HIR$��ħ��$HIW$����ˮ��$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/daemon/class/blademan/obj/gold-blade",
		"amount9"  : 1,
		"file3"    : "/open/killer/obj/k_ring",
		"file10"   : "/open/dancer/obj/yuawaist",
		"file8"    : "/open/ping/obj/gold_hand",
		"amount5"  : 1,
		"file5"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/dancer/obj/yuawaist",
		"file9"    : "/open/capital/room/king/obj/dagger1",
		"file2"    : "/open/prayer/obj/boris-cloth",
		"amount1"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount10" : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/capital/room/king/obj/dagger1",
		"amount2"  : 1,
	]) );
	set( "build", 10004 );
	set( "light_up", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room128.c",
  "west" : "/open/clan/ou-cloud-club/room/room112",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
