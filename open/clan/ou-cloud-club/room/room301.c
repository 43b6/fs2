inherit ROOM;
void create() {
	set( "short", "$HIG$天灵草$NOR$" );
	set( "object", ([
		"amount4"  : 740,
		"amount3"  : 1500,
		"file3"    : "/open/doctor/item/sky_item",
		"file1"    : "/open/doctor/item/sky_item",
		"amount2"  : 1500,
		"file4"    : "/open/doctor/item/sky_item",
		"amount1"  : 1500,
		"file2"    : "/open/doctor/item/sky_item",
	]) );
	set( "owner", "skyent" );
	set( "build", 10028 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room300.c",
		"west"      : "/open/clan/ou-cloud-club/room/room297",
	]) );
	set( "long", @LONG
此乃昆仑山上最为出名的三圣草之一$HIR$「$HIG$天灵草$HIR$”$NOR$的囤积之地，
传说此草尽吸$HIC$天地$NOR$之$HIM$灵气$NOR$，对于身受内创的人，能将其所受的内创
完全消除，但此物须经过医者精湛的医术配其特殊内功方可提炼。

LONG);
	setup();
	replace_program(ROOM);
}
