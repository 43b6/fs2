// Room : /open/clan/demon_castle/room/room7.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "short", "��С�ϱչ��Ҧ�" );
	set( "owner", "son" );
	set( "build", 10206 );
	set( "long", @LONG

[0;1m [1m [1m [1m [1;37m��[1m��[1mF[1mS[1m��[1m��[1m��[1m��[1m��[1md[1m��[1ms[1m��[1m@[1m��[1m~[1m��[1mC[1m��[1m��[1m��[1m��[1m��[1m}[1m��[1m��[1m��[1mA[1;32m��[1mp[1m��[1mn[1;37m��[1mN[1m��[1mU[1m��[1mw[1m��[1mM[1m��[1m��[1m��[1mn[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m~[1m��[1m��[1m��[1m��[0m
[0;1;37m��[1mN[1m��[1mb[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mm[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1mv[1m��[1m��[1;31m��[1m��[1m��[1m��[1m��[1m��[1m��[1m\[1;37m��[1m��[1m��[1m��[1m��[1m��[1m��[1mF[1m��[1mL[1m��[1mi[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mC[0m
[0;1;37m��[1m��[1m��[1mX[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mD[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1m��[1m��[1m^[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m}[1m��[1mb[1m��[1m��[1m��[1m^[1m��[1m��[1m��[1mU[1;35m��[1mZ[1m��[1mL[1m��[1m��[1m��[1mD[1;37m��[1m��[1m��[1m��[1m��[1mA[0m
[0;1;37m��[1mM[1m��[1mo[1m��[1m��[1m��[1mU[1m��[1m��[1m��[1m��[1;33m��[1mO[1m��[1ms[1m��[1mM[1;36m��[1m��[1m��[1m��[1m��[1mC[1;37m��[1mA[1m��[1m��[1m��[1mi[1;34m��[1m��[1m��[1mO[1m��[1m��[1m��[1mU[1;37m��[1mA[1;31m��[1m��[1m��[1m��[1m��[1mW[1m��[1mL[1;37m.[1m.[1m.[1m.[0m

LONG);
	set( "exits", ([ /* sizeof() == 1 */
		"enter"     : "/open/clan/demon_castle/room/room18",
		"north"     : "/open/clan/demon_castle/room/room5.c",
]) );
	set( "clan_room", "��ħ��" );
	setup();

	}
