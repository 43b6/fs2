// Room : /open/clan/ou-cloud-club/room/room112.c
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
		"file10"   : "/open/tendo/obj/chaosbelt",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/mogi/castle/obj/lochagem",
		"file7"    : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"amount8"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"file9"    : "/daemon/class/fighter/figring",
		"file1"    : "/open/gsword/obj/may_ring",
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount7"  : 1,
		"amount10" : 1,
		"amount9"  : 1,
	]) );
	set( "owner", "freaky" );
	set( "light_up", 1 );
	set( "build", 10158 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room127.c",
  "west" : "/open/clan/ou-cloud-club/room/room111",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
