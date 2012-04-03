inherit ROOM;
void create() {
	set( "short", "����" );
	set( "owner", "jenny" );
	set( "object", ([
		"amount7"  : 1,
		"file9"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount10" : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file2"    : "/open/ping/obj/cloud_fan",
		"file1"    : "/daemon/class/fighter/figring",
		"file7"    : "/open/wu/npc/obj/armband",
		"file8"    : "/open/ping/questsfan/obj/diamond_legging",
		"amount3"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/ping/questsfan/obj/diamond_skirt",
		"file6"    : "/open/scholar/obj/icefan",
		"amount5"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"file10"   : "/open/ping/obj/gold_hand",
	]) );
	set( "build", 10041 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room57",
		"east"      : "/open/clan/red_fire/room/room83.c",
	]) );
	set( "long", @LONG

��̤����һ��ܺ����Ĵ������ذ����������ɫ�ĵ�̺�������Ľ���
��һ����¯�����ܵĻ����ڻ�¯��ȼ�գ������м�������ߴ�ɳ����
������һ��ǽ����һ������ȫ�Ҹ���Ƭ���ڻ�¯��бǰ����һ����
�ϵ���ܣ�������˼������صĹ��顣


LONG);
	setup();
	replace_program(ROOM);
}
