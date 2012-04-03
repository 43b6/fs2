inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "winder" );
	set( "object", ([
		"amount10" : 1,
		"file6"    : "/open/firedancer/npc/eq/r_boots",
		"amount2"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/firedancer/npc/eq/r_head",
		"file2"    : "/open/firedancer/npc/eq/r_hands",
		"amount4"  : 1,
		"file5"    : "/open/firedancer/npc/eq/r_cape",
		"file4"    : "/open/firedancer/npc/eq/r_cloth",
		"file8"    : "/open/firedancer/npc/eq/r_armbands",
		"file10"   : "/open/firedancer/npc/eq/r_belt",
		"amount8"  : 1,
		"amount7"  : 1,
		"file9"    : "/open/firedancer/npc/eq/r_leg",
		"amount9"  : 1,
		"file3"    : "/open/firedancer/npc/eq/r_finger",
		"amount6"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/firedancer/npc/eq/r_shield",
		"amount1"  : 1,
	]) );
	set( "build", 10164 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room277.c",
		"south"     : "/open/clan/13_luck/room/room318",
		"east"      : "/open/clan/13_luck/room/room305.c",
		"north"     : "/open/clan/13_luck/room/room273.c",
	]) );
	set( "long", @LONG

    ��ɣ���£����䳣�䣬��������ʮ��������������е����˵�Ϊ[0;1;33m��[1m��[0m
[0;1;33m��[1mD[0m����������ʮ������ķ��������˵����涼���Ÿ����ڵķ���������
�������ö���Ϊ��ûʱ�����߸������İ��ڣ����½�����û�������
����û�Լ��ķ�����Խ���һ�¡�

LONG);
	setup();
	replace_program(ROOM);
}
