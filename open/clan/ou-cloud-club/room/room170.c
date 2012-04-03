inherit ROOM;
void create() {
	set( "short", "�ؽ���" );
	set( "owner", "wcy" );
	set( "object", ([
		"file4"    : "/open/fire-hole/obj/w-pill",
		"file2"    : "/open/ping/obj/chilin_legging",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"amount4"  : 4,
		"file7"    : "/daemon/class/fighter/armband",
		"amount9"  : 1,
		"file3"    : "/open/fire-hole/obj/b-pill",
		"amount7"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/gsword/obj/dragon-sword",
		"file9"    : "/open/scholar/obj/icefan",
		"file1"    : "/open/capital/guard/gring",
		"file6"    : "/open/ping/obj/cloud_fan",
		"file5"    : "/open/ping/obj/gold_hand",
		"amount5"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11040 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room172",
	]) );
	set( "long", @LONG
������٫���������ݸ��غ��ղر���ĵط�, ����ı��ﶼ�൱���
������������ʯ������ķ�����Ϊ����, ��˵���ϴ˷��ߵ�٫�������ܵ�,
������Ĵ���䲢������һ��٫�Ƶ�Ӣ��, �ұߵ�ǽ�ڵ����������ʽ,
��������������٫�Ƴ���������������ʽ
LONG);
	setup();
	replace_program(ROOM);
}
