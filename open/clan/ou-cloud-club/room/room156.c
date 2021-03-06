inherit ROOM;
void create() {
	set( "short", "$HIW$封印之城$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/mogi/castle/obj/fire_book",
	]) );
	set( "light_up", 1 );
	set( "build", 11218 );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/room163.c",
		"west"      : "/open/clan/ou-cloud-club/room/room158.c",
		"north"     : "/open/clan/ou-cloud-club/room/room222.c",
		"ghost"     : "/open/clan/ou-cloud-club/room/room264.c",
	]) );
	set( "long", @LONG

    残破的支柱,古老的建筑,显示出这边是有深远历史的古城,由城内种种
遗迹的文化程度判断,显示此城就是封印着上古神器的封印之城,传说千年前
在神话时代中所爆发的魔大战中,神界于战争末期被魔族全面攻陷,仓皇逃出
的众神,来到人间天国交界的此处,以初代战神的遗体,配合珍贵圣兽的体质,
制作出毁天灭地的十二神器,藉此十二神器之助,终于逆转战局,击溃焚天火王
的大军,战后,鉴于十二神器威力过大,不宜再度使用,遂封印于此城...

LONG);
	setup();
	replace_program(ROOM);
}
