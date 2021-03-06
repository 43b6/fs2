inherit ROOM;
void create() {
	set( "short", "$HIY$傲$HIC$云$HIR$龙鳞藏$NOR$" );
	set( "object", ([
		"amount5"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
	]) );
	set( "build", 10207 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room224",
		"south"     : "/open/clan/ou-cloud-club/room/room262.c",
	]) );
	set( "long", @LONG
$HIY$傲$HIC$云$NOR$山庄内大量存有魔界守护神兽的鳞甲，此乃圣
火教之$HIY$ζ$HIW$天焰武神$HIY$ζ$NOR$「$HIR$舍身入魔$NOR$”$HIC$冰焰$NOR$单凭一人之力力
挑魔界神兽$HIY$黄金甲龙$NOR$后从甲龙身上所得的龙鳞甲，据闻
此$HIY$魔龙鳞$NOR$具有通往魔界某处之效．

LONG);
	setup();
	replace_program(ROOM);
}
