inherit ROOM;
void create() {
	set( "short", "miffy ��¥2-9" );
	set( "object", ([
		"amount3"  : 1,
		"file5"    : "/open/firedancer/npc/eq/r_boots",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount7"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
		"file7"    : "/open/firedancer/npc/eq/r_pants",
		"amount1"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/firedancer/npc/eq/r_hands",
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "build", 11040 );
	set( "exits", ([
		"northeast" : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
���������Ϸ�������,������������������miffy ���������Ѱ�æ�ռ�����
��Ϊ����������ȡ��,���Ը��Եô����������ܿɹ�,���ɴ˳�ȥ������
Ҳ���ܹ������������Ĺ���,�������,��˴˴�¥������ͷ��Ҳ���൱֮�߸ߵ�
���������ĵز�...
LONG);
	setup();
	replace_program(ROOM);
}
