// Room : /open/clan/sky-wu-chi/room/room74.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIM$��С���СС�ѡ�$NOR$" );
	set( "owner", "peiyi" );
	set( "object", ([
		"file1"    : "/open/capital/obj/king-cloak",
		"file6"    : "/open/capital/obj/king-boots",
		"file10"   : "/open/mogi/dragon/obj/key",
		"file4"    : "/open/capital/obj/king-belt",
		"file3"    : "/open/capital/room/king/obj/dagger1",
		"amount5"  : 1,
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"amount1"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"file5"    : "/open/capital/obj/king-cloth",
		"file7"    : "/open/capital/obj/king-ring",
		"file9"    : "/open/scholar/obj/icefan",
		"amount8"  : 1,
		"amount10" : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11523 );
	set( "long", @LONG
������С���������ס�����������ֱ���һ��СС��������������С����
��ССЬ���ƹ�һ��СС�����磬������С����������ӵ�СС�ط��������СС
�ط����һ��СС����һ��СС��ױ�����ڷۺ�СС�����Ա���С�����СС��
����������СС���·�����СС����СС�����м��СС�յأ���С���峣��
��ϰ�����СС�ط���
LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
		"north"     : "/open/clan/sky-wu-chi/room/room226.c",
		"south"     : "/open/clan/sky-wu-chi/room/room285.c",
		"east"      : "/open/clan/sky-wu-chi/room/room309",
		"out"       : "/open/clan/sky-wu-chi/room/room23.c",
]) );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	setup();

	}
