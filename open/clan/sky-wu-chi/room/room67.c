// Room : /open/clan/sky-wu-chi/room/room67.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "���������" );
	set( "owner", "roboo" );
	set( "object", ([
		"amount10" : 1,
		"file4"    : "/open/ping/obj/chilin_legging",
		"amount9"  : 1,
		"file3"    : "/open/killer/obj/k_ring",
		"file10"   : "/daemon/class/blademan/obj/shield",
		"amount3"  : 1,
		"amount4"  : 1,
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"amount5"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
		"amount2"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"file5"    : "/open/killer/headkill/obj/world_dag",
		"file8"    : "/daemon/class/blademan/obj/six-neck",
		"amount7"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/ping/obj/gold_hand",
		"amount1"  : 1,
		"amount6"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10020 );
	set( "long", @LONG
�������森������ķ��䣬��һ�������Կ�������ֻ��һ��С����...
����������һ̨��������ĵ����ڸ¸������������,��������ǰ����...
ͻȻ������̨���������õ�OS����Apple Computer������Ƴ���MacOS X...
�㲻����������������������һ����������Ʒζ���˰�....

LONG);
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"south"     : "/open/clan/sky-wu-chi/room/room69.c",
]) );
	set( "clan_room", "����޼�" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
