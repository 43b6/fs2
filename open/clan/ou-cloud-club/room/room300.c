inherit ROOM;
void create() {
	set( "short", "$HIG$�����$NOR$" );
	set( "object", ([
		"amount4"  : 897,
		"amount3"  : 1500,
		"file3"    : "/open/doctor/item/ground_item",
		"file1"    : "/open/doctor/item/ground_item",
		"amount2"  : 1500,
		"file4"    : "/open/doctor/item/ground_item",
		"amount1"  : 1500,
		"file2"    : "/open/doctor/item/ground_item",
	]) );
	set( "owner", "skyent" );
	set( "build", 10416 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room299.c",
		"west"      : "/open/clan/ou-cloud-club/room/room301",
	]) );
	set( "long", @LONG
��������ɽ����Ϊ��������ʥ��֮һ$HIR$��$HIG$�����$HIR$��$NOR$�Ķڻ�֮�أ�
��˵�˲ݾ���$YEL$���$NOR$֮$HIW$����$NOR$���������ܶ������ˣ��ܽ������ܵ�$HIM$�ٶ�
$NOR$��ȫ�������������뾭��ҽ�߾�տ��ҽ�����������ڹ�����������

LONG);
	setup();
	replace_program(ROOM);
}
