inherit ROOM;
void create() {
	set( "short", "miffy ��¥2-5" );
	set( "object", ([
		"file4"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file2"    : "/open/firedancer/npc/eq/r_pants",
		"file3"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount3"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/firedancer/npc/eq/r_shield",
		"amount2"  : 1,
		"amount1"  : 1,
	]) );
	set( "build", 10014 );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
�����Ǳ�������ذ��,������������������miffy ���������Ѱ�æ�ռ�����
��Ϊ����ذ������ȡ��,���Ը��Եô����������ܿɹ�,���ɴ˳�ȥ������
Ҳ���ܹ������������Ĺ���,��������,��˴˴�¥������ɱ��Ҳ���൱֮�߸ߵ�
���������ĵز�...
LONG);
	setup();
	replace_program(ROOM);
}
