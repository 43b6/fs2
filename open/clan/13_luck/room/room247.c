inherit ROOM;
void create() {
	set( "short", "���һ��֡� " );
	set( "owner", "poll" );
	set( "object", ([
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"file2"    : "/open/killer/headkill/obj/e_dag",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mogi/castle/obj/blood-water",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
		"amount10" : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file10"   : "/open/mogi/dragon/obj/power",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"amount8"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
		"file6"    : "/open/killer/weapon/k_torch",
	]) );
	set( "build", 10008 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room261",
		"north"     : "/open/clan/13_luck/room/room105.c",
	]) );
	set( "long", @LONG
���ܳ�����Ũ�ܵ��һ����о��Ϻ����Ư��������һ���ãã���һ���
����֪��Ҫ������ȥ��ֻ����ϡ����Զ������һЩ�������ƺ����˵�������
ֻ�Ƿ�������ȥ����Ƭ�����һ������������ʴӣ����ܽ��ŵĿ�������Ľ�
�����������࣬һ��һ�������һ��ֵ����ȥ��
LONG);
	setup();
	replace_program(ROOM);
}
