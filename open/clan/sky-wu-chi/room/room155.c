inherit ROOM;
void create() {
	set( "short", "$HBGRN$$HIB$�����׵Ĵ���$NOR$" );
	set( "owner", "hild" );
	set( "object", ([
		"amount4"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file3"    : "/open/capital/room/king/obj/dagger1",
		"file7"    : "/open/killer/obj/dagger",
		"amount3"  : 1,
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"file5"    : "/open/killer/headkill/obj/world_dag",
		"amount1"  : 398,
		"amount5"  : 1,
		"file1"    : "/open/killer/obj/black",
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"file6"    : "/open/killer/obj/dagger",
		"file8"    : "/open/killer/headkill/obj/f_dag",
	]) );
	set( "light_up", 1 );
	set( "build", 11366 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room167.c",
		"north"     : "/open/clan/sky-wu-chi/room/room110",
	]) );
	set( "long", @LONG
������������������ŷ�ɥ���ġ�$CYN$������ɱ��$NOR$��$HIR$����$NOR$��
��ס����������������С��������������˿ɱ���ô������
��������ɱ��֮���������ڸ���$CYN$��������Ż�����$NOR$��$HIR$��Զ�$NOR$
������һЩ�ش����ܣ��ƺ�Ҫ��������������һ���ȷ�Ѫ��
������ȴ���������ǵĻ��ԭ����������ɱ�ֵ������ڹ�
ͨ��
LONG);
	setup();
	replace_program(ROOM);
}
