inherit ROOM;
void create() {
	set( "short", "$HIR$藏$NOR$Φ$HIY$妖幻披肩$NOR$" );
	set( "object", ([
		"amount3"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "light_up", 1 );
	set( "build", 23587 );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/room264",
		"east"      : "/open/clan/ou-cloud-club/room/room207.c",
	]) );
	set( "long", @LONG
强烈的腐蚀妖气朝着你迎面扑来，使你不得不运起全力抵挡这吞噬生命
的惊人杀气，这里封印的神器，原本属于背叛天界，堕落至凡间的千年树妖
--舞风扬所有，当他于千年前败于天将之后，遭妖魂遗弃的肉身，被众神调
制成为十二神器中少数具有妖气的绝世装备．

LONG);
	setup();
	replace_program(ROOM);
}
