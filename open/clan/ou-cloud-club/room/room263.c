inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIC$��$HIR$���۲�$NOR$" );
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
$HIY$��$HIC$��$NOR$ɽׯ�ڴ�������ħ���ػ����޵��ۼף�����ʥ
���֮$HIY$��$HIW$��������$HIY$��$NOR$��$HIR$������ħ$NOR$��$HIC$����$NOR$��ƾһ��֮����
��ħ������$HIY$�ƽ����$NOR$��Ӽ����������õ����ۼף�����
��$HIY$ħ����$NOR$����ͨ��ħ��ĳ��֮Ч��

LONG);
	setup();
	replace_program(ROOM);
}
