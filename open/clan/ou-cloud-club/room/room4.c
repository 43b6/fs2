// Room : /open/clan/ou-cloud-club/room/room4.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG

$HIY$                                 �y �z �{ �| �} �| �{ �z �y �x
                               �� ������������������������������
                               ������������������������������������
                              ��������������������������������������
              �q�z�z�z�z�z�z�����Ȩ����� ������������������������������
               �������������������������� ������������������������������
               ����������������������������������������������������������
                  ��      ��������������������������������������������������
                            ������������ ����������������������������������
                            ��������������������������������������������
                          ������������ ������������������������������
                     �� ��������������������������������������������
                    �������������� ������������������������������
                               �� ������������������������������
                                 ��  ��  ��  ��  ��  ��  ��$NOR$

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 1 */
		"west"      : "/open/clan/ou-cloud-club/room/room101.c",
		"north"     : "/open/clan/ou-cloud-club/room/room209",
		"east"      : "/open/clan/ou-cloud-club/room/room119.c",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "short", "$HIG$����$HIC$����$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"amount9"  : 1,
		"file2"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount4"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"file7"    : "/open/love/obj/shield",
		"amount5"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"amount1"  : 1,
		"file4"    : "/open/wu/npc/obj/armband",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"amount3"  : 1,
		"file1"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount8"  : 1,
	]) );
	set( "owner", "skyent" );
	set( "build", 10089 );
	set( "light_up", 1 );
	setup();

	}
