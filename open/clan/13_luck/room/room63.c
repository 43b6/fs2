inherit ROOM;
void create() {
	set( "short", "����ͤ" );
	set( "owner", "mad" );
	set( "object", ([
		"amount4"  : 1,
		"file10"   : "/obj/poison/dark_poison",
		"file9"    : "/open/main/obj/et_sword",
		"amount6"  : 429,
		"amount2"  : 1,
		"file1"    : "/open/doctor/obj/feather",
		"amount1"  : 1,
		"amount8"  : 812,
		"amount9"  : 1,
		"amount7"  : 682,
		"file4"    : "/open/doctor/obj/feather",
		"amount5"  : 235,
		"amount10" : 100,
		"file3"    : "/open/doctor/obj/d-mark",
		"file6"    : "/obj/poison/rose_poison",
		"file8"    : "/obj/poison/dark_poison",
		"file7"    : "/obj/poison/five_poison",
		"file5"    : "/obj/poison/rose_poison",
		"amount3"  : 1,
		"file2"    : "/open/doctor/obj/feather",
	]) );
	set( "build", 11094 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room62",
	]) );
	set( "long", @LONG

    ��������������������滨��ܣ�һ�����������죬�����ػ�
�������ͤ�����ڴˣ���ϸһ����ͤ��Բ�����У��׻���״������ʯ
����������ͤ�ڣ�ʯ�ʽ��ɴ����մ�������ɣ��Ĵ�ʯ���Ϸֱ����
��ȸ�ڿ�֮�������ˣ�ͤ��С���������ϸ�������߲�ľ��ӳ����
�����У����ܾ����续�����㲻��������ͤ��ϸ��������������

LONG);
	setup();
	replace_program(ROOM);
}
