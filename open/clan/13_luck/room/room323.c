inherit ROOM;
void create() {
	set( "short", "����������" );
	set( "object", ([
		"amount6"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"file5"    : "/open/firedancer/npc/eq/r_cloth",
		"file4"    : "/open/firedancer/npc/eq/r_finger",
		"amount8"  : 1,
		"file3"    : "/open/firedancer/npc/eq/r_hands",
		"file2"    : "/open/firedancer/npc/eq/r_cape",
		"file7"    : "/open/firedancer/npc/eq/r_belt",
		"file1"    : "/open/port/obj/wolf_ring",
		"amount4"  : 1,
		"amount2"  : 1,
		"file8"    : "/open/firedancer/npc/eq/r_armbands",
		"amount7"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/firedancer/npc/eq/r_boots",
	]) );
	set( "owner", "vickey" );
	set( "build", 10392 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room297",
	]) );
	set( "long", @LONG

    ������[0;1;35m��[1mN[1m��[1m��[1m��[1mm[1m��[1m��[1m��[1md[1m��[1m��[0m��ר��Ϊ��û�з�����½������������ģ���
�����������ʣ����½��İ����и�����ȥ�ĵط�����Ϣ�ĵط���ʹ����
����Ϊʮ�������ս����һ��Ϊ���ɵ�δ����Ŭ����һͬ��ƴ������
ȫƾ�����������߶��������ģ�ϣ����Ϊ���µ�һ����������

LONG);
	setup();
	replace_program(ROOM);
}
