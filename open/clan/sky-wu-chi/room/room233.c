inherit ROOM;
void create() {
	set( "short", "���鵤ҩ��" );
	set( "object", ([
		"amount10" : 1,
		"file10"   : "/daemon/class/blademan/obj/ublade",
		"file2"    : "/open/magic-manor/obj/master_snake_head",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount3"  : 10,
		"amount2"  : 1,
		"file4"    : "/open/doctor/item/sky_item",
		"amount6"  : 17,
		"file3"    : "/open/doctor/pill/gnd_pill",
		"amount5"  : 14,
		"file7"    : "/open/quests/snake/npc/obj/snake_gem",
		"amount8"  : 1,
		"file8"    : "/open/quests/snake/npc/obj/helmet",
		"amount1"  : 1,
		"file6"    : "/open/doctor/item/ground_item",
		"file5"    : "/open/doctor/item/human_item",
		"amount4"  : 15,
		"file1"    : "/open/magic-manor/obj/master_snake_head",
		"file9"    : "/daemon/class/blademan/obj/shield",
	]) );
	set( "build", 10024 );
	set( "owner", "amei" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room293",
	]) );
	set( "long", @LONG
������AMEI�����־�����ҩ֮�е����鵤�ĵط����������Ч
�����ָܻ����е�״̬������Ҫ������һЩ����ֵֹ�״̬��
��û�취�ˣ�������Ψһ��ȱ�㵫���Դӳ�ɳ��ĳ����ɵ�ͣ��ʱ
��ȴ����������ֵĵ�ҩO�������㶳�˻�������Ҫ�Ͽ�üǵ���
��AMEI�õ����鵤ȥ�԰ɣ�
LONG);
	setup();
	replace_program(ROOM);
}
