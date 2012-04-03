inherit ROOM;
void create() {
	set( "short", "������" );
	set( "object", ([
		"amount10" : 1,
		"amount3"  : 1,
		"file5"    : "/open/firedancer/npc/eq/r_head",
		"amount9"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/firedancer/npc/eq/r_hands",
		"amount2"  : 1,
		"file7"    : "/open/firedancer/npc/eq/r_boots",
		"file4"    : "/open/firedancer/npc/eq/r_leg",
		"amount1"  : 1,
		"file10"   : "/open/firedancer/npc/eq/r_cape",
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/firedancer/npc/eq/r_shield",
		"file6"    : "/open/firedancer/npc/eq/r_armbands",
		"file3"    : "/open/firedancer/npc/eq/r_neck",
		"file9"    : "/open/firedancer/npc/eq/r_cloth",
		"amount6"  : 1,
		"file8"    : "/open/firedancer/npc/eq/r_finger",
		"amount5"  : 1,
	]) );
	set( "build", 11700 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room305.c",
		"south"     : "/open/clan/13_luck/room/room316",
		"east"      : "/open/clan/13_luck/room/room303.c",
		"north"     : "/open/clan/13_luck/room/room266.c",
	]) );
	set( "long", @LONG

    ��ɣ���£����䳣�䣬��������ʮ��������������е����˵�Ϊ[0;1;31m��[1m��[0m
[0;1;31m��[1mD[0m����������ʮ������ķ��������˵����涼���Ÿ����ڵķ���������
�������ö���Ϊ��ûʱ�����߸������İ��ڣ����½�����û�������
����û�Լ��ķ�����Խ���һ�¡�

LONG);
	setup();
	replace_program(ROOM);
}
