inherit ROOM;
void create() {
	set( "short", "$HIG$�����$NOR$" );
	set( "object", ([
		"amount4"  : 740,
		"amount3"  : 1500,
		"file3"    : "/open/doctor/item/sky_item",
		"file1"    : "/open/doctor/item/sky_item",
		"amount2"  : 1500,
		"file4"    : "/open/doctor/item/sky_item",
		"amount1"  : 1500,
		"file2"    : "/open/doctor/item/sky_item",
	]) );
	set( "owner", "skyent" );
	set( "build", 10028 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room300.c",
		"west"      : "/open/clan/ou-cloud-club/room/room297",
	]) );
	set( "long", @LONG
��������ɽ����Ϊ��������ʥ��֮һ$HIR$��$HIG$�����$HIR$��$NOR$�Ķڻ�֮�أ�
��˵�˲ݾ���$HIC$���$NOR$֮$HIM$����$NOR$�����������ڴ����ˣ��ܽ������ܵ��ڴ�
��ȫ�������������뾭��ҽ�߾�տ��ҽ�����������ڹ�����������

LONG);
	setup();
	replace_program(ROOM);
}
