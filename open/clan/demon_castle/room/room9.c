// Room : /open/clan/demon_castle/room/room9.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "short", "���̲��Ҧ�" );
	set( "build", 1 );
	set( "light_up", 1 );
	set( "object", ([
		"file2"    : "/open/capital/obj/king-boots",
		"file3"    : "/open/capital/obj/king-belt",
		"file5"    : "/open/capital/obj/king-cloth",
		"amount6"  : 1,
		"file7"    : "/open/ping/obj/ring-2",
		"amount2"  : 1,
		"file6"    : "/open/capital/obj/king-cloak",
		"amount7"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/capital/obj/king-ring",
		"file4"    : "/open/capital/guard/gring",
		"amount3"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
	]) );
	set( "owner", "rickshu" );
	set( "long", @LONG
    [0;1m��[1mo[1m��[1m��[1m��[1mO[1;31m��[1mc[1m��[1m][1m��[1m��[1;37m��[1m��[1m��[1m��[1;33m��[1m��[1m��[1m��[1m��[1m��[1;37m��[1mA[1m��[1m��[1m��[1mO[1;31m��[1mc[1m��[1m][1m��[1m��[1;37m��[1m��[1m��[1mH[1m��[1mH[1m��[1mf[1m��[1m��[1m��[1m��[1;36m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;37m��[1mA[1m [0m
[0;1m��[1m��[1m��[1mA[1m��[1m@[1m��[1m��[1m��[1mi[1m��[1m��[1m��[1m��[1m,[1m [1m��[1m@[1m��[1m��[1m��[1m��[1m��[1mX[1;32m��[1m��[1m��[1m��[1m��[1mp[1m��[1m��[1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m}[1m��[1mf[1m,[1m [1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mn[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1m��[1m��[1m��[1mp[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mO[1m��[1m_[1m��[1m��[1m��[1mB[1m,[1m [1m��[1m��[1m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1mp[1m��[1m��[1;37m��[1m��[1m��[1mm[1m��[1m��[1m��[1mw[1m��[1m��[1m��[1m��[1m��[1mN[1m,[1m [1m��[1m��[1m��[1mA[1m��[1mY[1;31m��[1m��[1m��[1m��[1;37m��[1m��[1m��[1mF[1m [0m
[0;1m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1mp[1m��[1m��[1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;35m��[1m��[1m��[1m��[1m��[1m��[1m��[1md[1m��[1ml[1;37m,[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mn[1;32m��[1m��[1m��[1m��[1m��[1mp[1m��[1m��[1;37m��[1my[1m��[1ma[1m��[1mW[1m��[1m��[1;33m��[1m_[1m��[1m��[0m
LONG);
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/demon_castle/room/room5",
]) );
	set( "clan_room", "��ħ��" );
	setup();

	}
