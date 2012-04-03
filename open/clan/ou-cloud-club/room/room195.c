inherit ROOM;
void create() {
	set( "short", "$HIR$ͨ��$HIC$С$YEL$��$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"amount10" : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount5"  : 1,
		"amount7"  : 1,
		"file7"    : "/daemon/class/fighter/armband",
		"file9"    : "/open/prayer/obj/boris-boots",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file6"    : "/open/dancer/obj/yuawaist",
		"file2"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "build", 10206 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room194.c",
		"west"      : "/open/clan/ou-cloud-club/room/room239",
		"north"     : "/open/clan/ou-cloud-club/room/room238.c",
	]) );
	set( "owner", "nickm" );
	set( "long", @LONG
��ǰ���Ϸ�������һ������ϸһ������������бб����д��
��$HIR$ͨ��$HIC$С$YEL$��$NOR$�����֣��̻����£���������֮�����Щ�֣�˵��
���ڹ����ģ��಻Ϊ��������������β��մ��ī֭�����ϴ�ת��
�������Ƶģ�����������޷�����������������������ڹ���
���֣��ҳ������ˣ����Ƿ��ӣ����Ҳ�е���������Ŀ��˰ɣ�
LONG);
	setup();
	replace_program(ROOM);
}
