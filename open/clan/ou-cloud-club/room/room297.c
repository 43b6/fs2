inherit ROOM;
void create() {
	set( "short", "$HIG$ҩ�Ķڻ���$NOR$" );
	set( "object", ([
		"file6"    : "/open/doctor/item/human_item",
		"amount8"  : 271,
		"amount5"  : 1500,
		"file2"    : "/open/doctor/item/sky_item",
		"file5"    : "/open/doctor/item/ground_item",
		"amount1"  : 1500,
		"amount6"  : 1500,
		"file8"    : "/open/doctor/item/sky_item",
		"file7"    : "/open/doctor/item/ground_item",
		"amount2"  : 1500,
		"file3"    : "/open/doctor/item/ground_item",
		"amount4"  : 1500,
		"file9"    : "/open/doctor/item/human_item",
		"file4"    : "/open/doctor/item/sky_item",
		"amount7"  : 237,
		"amount3"  : 1500,
		"amount9"  : 266,
		"file1"    : "/open/doctor/item/human_item",
	]) );
	set( "build", 19095 );
	set( "light_up", 1 );
	set( "owner", "skyent" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room301",
		"down"      : "/open/clan/ou-cloud-club/room/room209",
	]) );
	set( "long", @LONG
������ҽ��$HIW$��$HIR$��$HIM$ɽ$HIG$��$NOR$������ҩ�ĵ����ڣ�Ҳ�ǰ���ɽׯ��
����Ҫ���صص㣬�ݽ��������������ɽ���˵�������ҽ����
�ߵ�һ�ˣ�ֻ������������������ҩ��Ҳ������ܵ�������
����ͬ�õ��ۺ죬��������ҩҩ�ľ�˵���ڴ˴�������������
��û���κ�����֮�

LONG);
	setup();
	replace_program(ROOM);
}
