inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIC$��$HIR$���۲�$NOR$" );
	set( "object", ([
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file8"    : "/open/mogi/dragon/obj/scale",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount6"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"amount10" : 1,
		"amount9"  : 1,
	]) );
	set( "build", 10074 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room223",
		"south"     : "/open/clan/ou-cloud-club/room/room258.c",
		"north"     : "/open/clan/ou-cloud-club/room/room260.c",
	]) );
	set( "long", @LONG
$HIY$��$HIC$��$NOR$ɽׯ�ڴ�������ħ���ػ����޵��ۼף�����ʥ
���֮$HIY$��$HIW$��������$HIY$��$NOR$��$HIR$������ħ$NOR$��$HIC$����$NOR$��ƾһ��֮����
��ħ������$HIY$�ƽ����$NOR$��Ӽ����������õ����ۼף�����
��$HIY$ħ����$NOR$����ͨ��ħ��ĳ��֮Ч��

LONG);
	setup();
	replace_program(ROOM);
}
