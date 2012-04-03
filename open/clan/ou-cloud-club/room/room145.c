inherit ROOM;
void create() {
	set( "short", "$HIC$���䳡$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount4"  : 1,
		"file10"   : "/daemon/class/fighter/armband",
		"amount10" : 1,
		"file1"    : "/open/capital/guard/gring",
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"file5"    : "/open/dancer/obj/yuawaist",
		"file9"    : "/open/prayer/obj/boris-cloth",
		"amount2"  : 1,
		"file7"    : "/open/scholar/obj/s_hands",
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"file8"    : "/open/scholar/obj/icefan",
		"amount9"  : 1,
		"amount5"  : 1,
	]) );
	set( "owner", "enter" );
	set( "light_up", 1 );
	set( "build", 10933 );
	set( "exits", ([
		"enter"     : "/open/clan/ou-cloud-club/room/room146",
		"down"      : "/open/clan/ou-cloud-club/room/room144.c",
	]) );
	set( "long", @LONG
�˴��ǰ�������������ѧ֮�أ��ش��⽣��֮�Ϸ������Ŵ˼�
����һ�������е����ޣ������ܷ⽣���ڵ�ʮ�������â���ƣ�һ
ֱ�޷��ӳ��˼䣬������Ҳ�����ô���������ϰ��ѧ���������ϲ
�����˹ۿ����ʴ˼�һֱ����ֹ�κ����ܽ���ģ�

LONG);
	setup();
	replace_program(ROOM);
}
