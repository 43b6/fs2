// Room : /open/clan/red_fire/room/room45.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIC$������$HIM$��$HIY$С��$NOR$" );
	set( "owner", "bebo" );
	set( "object", ([
		"amount4"  : 45490,
		"file7"    : "/open/port/obj/wolf_ring",
		"amount1"  : 1508,
		"file2"    : "/open/wu/npc/obj/armband",
		"file3"    : "/open/killer/obj/knife",
		"file6"    : "/open/killer/obj/s_pill",
"amount3"  : 90000,
		"file5"    : "/open/killer/obj/lustar",
		"amount7"  : 1,
		"amount2"  : 1,
		"amount5"  : 68826,
		"file4"    : "/open/killer/obj/knief2",
		"file1"    : "/open/killer/obj/hate_knife",
		"amount6"  : 12,
	]) );
	set( "build", 10039 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "long", @LONG

������$HIC$������$NOR$��$HIY$С��$NOR$����˵���۰���$HIM$����$NOR$����
�����Ի��úö�����һ��$HIR$��$NOR$һ�������ζ�����
���Գ�Ϊ$HIC$������$NOR$....����������$HIY$С��$NOR$��������
һ���ӵ�$HIM$����$NOR$����֪��������οᰮ�����↪
����Ȼ��$HIW$����$NOR$���Ǹ߼���$HIB$ˮ��$NOR$����������Ӿ�
��$HIM$����$NOR$һ��ĺ��е��ԣ����㿴��������ȥ��
һ��....��


LONG);
	set( "clan_room", "������" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 1 */
		"west"      : "/open/clan/red_fire/room/room72.c",
]) );
	setup();

	}
