inherit ROOM;
void create() {
	set( "short", "$HIW$����֮��$NOR$" );
	set( "owner", "atropos" );
	set( "object", ([
		"amount2"  : 1,
		"file4"    : "/open/ping/obj/poison_pill",
		"amount8"  : 1,
		"file5"    : "/open/ping/obj/chilin_legging",
		"file3"    : "/open/ping/obj/gold_hand",
		"file1"    : "/open/scholar/obj/icefan",
		"amount9"  : 100,
		"amount3"  : 1,
		"amount7"  : 1,
		"amount4"  : 10,
		"file6"    : "/open/dancer/obj/yuawaist",
		"file9"    : "/open/doctor/pill/sky_pill",
		"file8"    : "/open/love/obj/shield",
		"file7"    : "/open/mogi/castle/obj/fire-king-head",
		"file2"    : "/daemon/class/bonze/puty_pullium",
		"amount10" : 1,
		"amount1"  : 1,
		"file10"   : "/obj/gift/bingtang",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10056 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room21.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "long", @LONG
{����֮��������������,
ÿ���˶���������,
��֪�����������,
�������������η�,
���������ǿ��,
�����վ�ֻ�ܾ���������......}
���е����С�������ϵ�֯������֮˿...
��Ϊ������������Ů��֮��  $HIC$�����岣˿$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
