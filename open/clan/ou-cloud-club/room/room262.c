inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIC$��$HIR$���۲�$NOR$" );
	set( "object", ([
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
	]) );
	set( "build", 10387 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room223",
		"south"     : "/open/clan/ou-cloud-club/room/room261",
		"north"     : "/open/clan/ou-cloud-club/room/room263.c",
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
