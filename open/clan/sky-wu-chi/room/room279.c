inherit ROOM;
void create() {
	set( "short", "�ƶ���" );
	set( "owner", "biwem" );
	set( "object", ([
		"file8"    : "/open/killer/weapon/k_head3",
		"amount1"  : 1,
		"amount5"  : 2341,
		"file2"    : "/open/killer/weapon/k_head3",
		"file5"    : "/obj/poison/rose_poison",
		"file4"    : "/obj/poison/five_poison",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/obj/poison/dark_poison",
		"amount6"  : 1,
		"amount4"  : 2550,
		"amount2"  : 1,
		"file1"    : "/open/magic-manor/fire/obj/fire-fan",
		"file6"    : "/obj/gift/unknowdan",
		"amount3"  : 2419,
		"amount7"  : 1,
		"amount8"  : 1,
	]) );
	set( "build", 10468 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room175",
	]) );
	set( "long", @LONG
���ǻ�����һ�Ũ������ƶ���
�������Ż�����һ�Ũɰ��Ʒ
�����������ֵ�һ�Ũɴ�����
������Զ����������������Ʒ
��������Ը��ȴ�����������
��������Ը��ȴ�����������
�������������˰������Ը��

���������ܵШɶ�ҩ������ҩ
LONG);
	setup();
	replace_program(ROOM);
}
