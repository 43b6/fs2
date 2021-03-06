inherit ROOM;
void create() {
	set( "short", "$HIY$傲$HIC$云$HIR$龙鳞藏$NOR$" );
	set( "object", ([
		"file10"   : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount6"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount2"  : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount10" : 1,
		"amount4"  : 1,
	]) );
	set( "build", 10016 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room222",
		"north"     : "/open/clan/ou-cloud-club/room/room259.c",
	]) );
	set( "long", @LONG
$HIY$傲$HIC$云山庄$NOR$内大量存有魔界守护神兽的鳞甲，此乃圣
火教之$HIY$ζ$HIW$天焰武神$HIY$ζ$NOR$「$HIR$舍身入魔$NOR$”$HIC$冰焰$NOR$单凭一人之力力
挑魔界神兽$HIY$黄金甲龙$NOR$后从甲龙身上所得的龙鳞甲，据闻
此$HIY$魔龙鳞$NOR$具有通往魔界某处之效．

LONG);
	setup();
	replace_program(ROOM);
}
