inherit ROOM;
void create() {
	set( "short", "$RED$$HBGRN$�����׵Ļ�԰$NOR$" );
	set( "owner", "amei" );
	set( "object", ([
		"amount4"  : 1,
		"file3"    : "/open/ping/questsfan/obj/diamond_armor",
		"file9"    : "/open/gblade/obj/sa-head",
		"amount2"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/gblade/obj/sa-head",
		"file1"    : "/open/ping/questsfan/obj/diamond_cloak",
		"file6"    : "/open/ping/questsfan/obj/diamond_skirt",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"file10"   : "/open/ping/questsfan/obj/diamond_belt",
		"file7"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount8"  : 1,
		"file5"    : "/open/ping/questsfan/obj/diamond_boots",
		"file2"    : "/open/ping/questsfan/obj/diamond_legging",
		"file4"    : "/open/ping/questsfan/obj/diamond_hands",
		"amount10" : 1,
	]) );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "build", 10480 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room209",
		"south"     : "/open/clan/sky-wu-chi/room/room251.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�˵ػ���������˲����������磬ԭ��������$HIR$������$NOR$
�ĺ�԰����԰�ӵĶ���滨��ݣ���ȻҲ��$CYN$������$NOR$���ز�
��$HIG$��ʿɽ�ز�$NOR$��Ϊ��Ҫ����һ���о��زݵĹ��ã�����$HIR$����
��$NOR$�ص���$HIR$Ҷ��ɱ$NOR$��ʾ��������ֲ���˴����ֵģ��Ա�����һ
�շ����ܸ�׳��$CYN$������$NOR$�ķ�����

LONG);
	setup();
	replace_program(ROOM);
}
