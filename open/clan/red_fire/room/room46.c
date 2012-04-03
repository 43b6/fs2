// Room : /open/clan/red_fire/room/room46.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$��$HIR$���� $HIM$����$HIC$����$HIY$��$NOR$" );
	set( "object", ([
		"amount10" : 1,
		"file6"    : "/open/mogi/dragon/obj/sunblade",
		"file9"    : "/open/mogi/castle/obj/fire_book",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"file5"    : "/open/gsword/obj/dragon-sword",
		"amount4"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/ping/obj/chilin_legging",
		"file7"    : "/open/ping/obj/gold_hand",
		"amount3"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"file10"   : "/open/mogi/castle/obj/fire_book",
		"amount6"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/main/obj/et_sword",
		"amount8"  : 1,
		"file1"    : "/daemon/class/blademan/obj/iceblade",
		"file4"    : "/open/gsword/obj/spsword-1",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "build", 10377 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "long", @LONG
��������һ���������𣬷׷�����¯�����֮ǰ������ٶ�����
��������$HIR$��õ$NOR$�����밲��������еĽ���......��������������¶�����
ʹ�����ã���������$HIR$��$HIG$��$HIY$��$BLU$Ǩ$NOR$�������ǵ��������ʹ�������ݺ������һ
��������ǰȥ�Ӳ첢�ڴ�������վ�Է��³�ͻȻ......��


LONG);
	set( "clan_room", "������" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 1 */
  "down" : "/open/clan/red_fire/room/room40.c",
]) );
	setup();

	}
