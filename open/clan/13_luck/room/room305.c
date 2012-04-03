inherit ROOM;
void create() {
	set( "short", "����ľ��" );
	set( "object", ([
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/killer/headkill/obj/f_dag",
		"file6"    : "/open/killer/headkill/obj/w_dag",
		"file4"    : "/open/killer/headkill/obj/bluekill",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"amount1"  : 1,
		"file9"    : "/open/killer/obj/dagger",
		"file5"    : "/open/killer/headkill/obj/e_dag",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/killer/headkill/obj/i_dag",
		"amount10" : 1,
	]) );
	set( "owner", "pigdevil" );
	set( "build", 10524 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room306.c",
		"south"     : "/open/clan/13_luck/room/room317",
		"east"      : "/open/clan/13_luck/room/room304.c",
		"north"     : "/open/clan/13_luck/room/room274.c",
	]) );
	set( "long", @LONG

    ��ɣ���£����䳣�䣬��������ʮ��������������е����˵�Ϊ[0;1m��[1m��[0m
[0;1m��[1mD[0m����������ʮ������ķ��������˵����涼���Ÿ����ڵķ���������
�������ö���Ϊ��ûʱ�����߸������İ��ڣ����½�����û�������
����û�Լ��ķ�����Խ���һ�¡�

LONG);
	setup();
	replace_program(ROOM);
}
