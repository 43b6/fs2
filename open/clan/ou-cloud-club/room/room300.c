inherit ROOM;
void create() {
	set( "short", "$HIG$地灵草$NOR$" );
	set( "object", ([
		"amount4"  : 897,
		"amount3"  : 1500,
		"file3"    : "/open/doctor/item/ground_item",
		"file1"    : "/open/doctor/item/ground_item",
		"amount2"  : 1500,
		"file4"    : "/open/doctor/item/ground_item",
		"amount1"  : 1500,
		"file2"    : "/open/doctor/item/ground_item",
	]) );
	set( "owner", "skyent" );
	set( "build", 10416 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room299.c",
		"west"      : "/open/clan/ou-cloud-club/room/room301",
	]) );
	set( "long", @LONG
此乃昆仑山上最为出名的三圣草之一$HIR$「$HIG$地灵草$HIR$”$NOR$的囤积之地，
传说此草尽吸$YEL$大地$NOR$之$HIW$精华$NOR$，对于身受毒害的人，能将其所受的$HIM$百毒
$NOR$完全消除，但此物须经过医者精湛的医术配其特殊内功方可提炼。

LONG);
	setup();
	replace_program(ROOM);
}
