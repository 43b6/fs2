// Room : /open/clan/ou-cloud-club/room/room15.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 3 */
		"north"     : "/open/clan/ou-cloud-club/room/room14.c",
		"east"      : "/open/clan/ou-cloud-club/room/room148",
		"west"      : "/open/clan/ou-cloud-club/room/room17.c",
		"south"     : "/open/clan/ou-cloud-club/room/room135.c",
]) );
	set( "long", @LONG
这里是傲云山庄的高手们所居住的地方，傲云山庄内的
人都居住于此，拥有浓烈的肃杀味道，所以，在这里你要特
别的的小心谨慎，以免进入了不该进入的房间。

左边是紫云蝶(mekyn)的房间，右边则是涟漪(amdxp)之房．

LONG);
	set( "no_transmit", 1 );
	set( "clan_room", "傲云山庄" );
	set( "short", "$HIY$傲$HIC$云$NOR$居$NOR$" );
	set( "owner", "win" );
	set( "build", 11145 );
	setup();

	}
