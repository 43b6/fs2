inherit ROOM;
void create() {
	set( "short", "'$HIY$$HBGRN$������$NOR$" );
	set( "owner", "butthead" );
	set( "object", ([
		"amount2"  : 1,
		"amount3"  : 20,
		"amount8"  : 40,
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"file10"   : "/open/ping/obj/poison_pill",
		"amount7"  : 200,
		"file1"    : "/open/mogi/castle/obj/sspill",
		"amount4"  : 18,
		"file6"    : "/open/fire-hole/obj/k-pill",
		"amount9"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/doctor/pill/human_pill",
		"file3"    : "/open/fire-hole/obj/r-pill",
		"amount10" : 7,
		"file5"    : "/open/snow/obj/dragon-sword",
		"file4"    : "/open/doctor/pill/human_pill",
		"amount6"  : 4,
		"file8"    : "/open/ping/obj/poison_pill",
		"file2"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "light_up", 1 );
	set( "build", 11043 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room110",
		"north"     : "/open/clan/hell/room/room93.c",
		"west"      : "/open/clan/hell/room/room49.c",
	]) );
	set( "long", @LONG
$HIG$$HBBLU$
������ѱ���...���BB CALL������һ��������..����������..
�����...
��������ˬ��...

͹ -,-
͹ @,@
͹ >,Q

������.....��ʱ��ͷ�����ܿ��ڨ˨�...??!!
���ǵ����ⵯ���ҵ�С��������....
�����ǲ���Ҳ��һ�ŵʹ����ר��...���ܸ�ʮ�˶���һ��..�ٺ�

$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
