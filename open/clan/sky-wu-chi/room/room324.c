inherit ROOM;
void create() {
	set( "short", "miffy ��¥2-4" );
	set( "object", ([
		"file5"    : "/open/killer/obj/dagger",
		"amount2"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/killer/obj/dagger",
		"file2"    : "/open/killer/obj/dagger",
		"file3"    : "/open/killer/obj/dagger",
		"amount4"  : 1,
		"file4"    : "/open/killer/obj/dagger",
		"amount1"  : 1,
	]) );
	set( "build", 10023 );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
�������Ϸ�����,������������������miffy ���������Ѱ�æ�ռ�����
��Ϊ����ذ������ȡ��,���Ը��Եô����������ܿɹ�,���ɴ˳�ȥ������
Ҳ���ܹ������������Ĺ���,�Ƶл���,��˴˴�¥��������������Ҳ���൱֮�߸ߵ�
���������ĵز�...

LONG);
	setup();
	replace_program(ROOM);
}
