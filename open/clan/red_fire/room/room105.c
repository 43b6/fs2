inherit ROOM;
void create() {
	set( "short", "$HIC$--������ķ���--$NOR$" );
	set( "owner", "dungaii" );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"file10"   : "/open/scholar/obj/icefan",
		"file1"    : "/open/prayer/obj/boris-cloth",
		"amount8"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount2"  : 1,
		"file3"    : "/daemon/class/fighter/figring",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/dancer/obj/yuawaist",
		"file8"    : "/open/mogi/castle/obj/lochagem",
		"amount6"  : 1,
		"amount5"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"amount9"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
	]) );
	set( "build", 10197 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room86.c",
	]) );
	set( "long", @LONG
�����ǵ�����ķ��䣬����Ĳ��ּ�Ϊ�򵥡�һ�Ŵ���
һ�����ӣ�������һ̨���������䰮��$HIW$$HBCYN$����$NOR$��û������̨��
�ԣ�������Ͳ�����$HIC$�ƣ�$NOR$�ʹ��һ��ð���ˣ������Ա߰���
һ�ܹ�ɫ�������ܣ���������˵�����Ŀǰ��ϰ��������
��֮�ĵã�


LONG);
	setup();
	replace_program(ROOM);
}
