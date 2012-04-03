// Room : /open/clan/red_fire/room/room41.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$��$HIR$����$HIC$���Ǻ� $HIM$���Ŵ���$HIY$��$NOR$" );
	set( "object", ([
		"file4"    : "/open/killer/weapon/k_boot3",
		"amount5"  : 1,
		"file1"    : "/open/gsword/obj/dragon-sword",
		"amount7"  : 1,
		"file9"    : "/open/ping/obj/neck0",
		"amount2"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file3"    : "/open/dancer/obj/yuawaist",
		"file8"    : "/open/wu/npc/obj/armband",
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"amount10" : 1,
		"amount6"  : 1,
		"file10"   : "/daemon/class/bonze/puty_pullium",
		"file7"    : "/daemon/class/blademan/obj/shield",
		"file5"    : "/open/gsword/obj/yu_cloak",
		"amount8"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "build", 10040 );
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
		"northdown" : "/open/clan/red_fire/room/room50",
		"east"      : "/open/clan/red_fire/room/room40.c",
		"west"      : "/open/clan/red_fire/room/room120",
		"southdown" : "/open/clan/red_fire/room/room48",
]) );
	setup();

	}
