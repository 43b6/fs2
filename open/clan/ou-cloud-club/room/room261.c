inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIC$��$HIR$���۲�$NOR$" );
	set( "build", 10023 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room222",
		"north"     : "/open/clan/ou-cloud-club/room/room262",
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
