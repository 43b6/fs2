inherit ROOM;
void create() {
	set( "short", "$HIG$�����$NOR$" );
	set( "object", ([
		"amount3"  : 1025,
		"file3"    : "/open/doctor/item/human_item",
		"file1"    : "/open/doctor/item/human_item",
		"amount2"  : 1500,
		"amount1"  : 1500,
		"file2"    : "/open/doctor/item/human_item",
	]) );
	set( "owner", "skyent" );
	set( "light_up", 1 );
	set( "build", 10178 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room300",
	]) );
	set( "long", @LONG
��������ɽ����Ϊ��������ʥ��֮һ$HIR$��$HIG$�����$HIR$��$NOR$�Ķڻ�֮�أ�
��˵�˲ݿɴ�������$YEL$���$NOR$��$HIW$ʬ���ľ���$NOR$������$HIR$��Σ$NOR$���ˣ�����$HIR$����
����$NOR$֮�ܣ��������뾭��ҽ�߾�տ��ҽ�����������ڹ�����������

LONG);
	setup();
	replace_program(ROOM);
}
