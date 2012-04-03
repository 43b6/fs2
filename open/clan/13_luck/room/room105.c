inherit ROOM;
void create() {
	set( "short", "$HIY$С����Ϣ��$NOR$" );
	set( "owner", "poll" );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
		"amount3"  : 1,
		"file1"    : "/open/ping/obj/poison_pill",
		"amount4"  : 1,
		"file5"    : "/open/killer/weapon/k_torch",
		"file4"    : "/open/scholar/obj/icefan",
		"file8"    : "/daemon/class/fighter/armband",
		"file9"    : "/open/gsword/obj/yuskirt",
		"amount8"  : 1,
		"amount9"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/killer/obj/k_ring",
		"file3"    : "/open/killer/obj/s_pill",
		"amount6"  : 1,
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount5"  : 1,
		"amount1"  : 6,
	]) );
	set( "build", 10422 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room78.c",
		"south"     : "/open/clan/13_luck/room/room247",
		"out"       : "/open/clan/13_luck/room/room89.c",
		"north"     : "/open/clan/13_luck/room/room106.c",
	]) );
	set( "long", @LONG
$HIW$������һ������ʵ���Ϣ�ң�һ��Բ���������Ÿ���õĲ裬
���������Ӵ���ӳ�䵽�ذ��ϣ������ô���ʵĻ����������м���
һ�Ŵ󴲣����˾������̲�ס����ȥ��һ�ɣ��������ζ����������
����ȷ��һ���൱�ʺϸ�æµһ������ι�����Ϣ�ķ��䡣$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
