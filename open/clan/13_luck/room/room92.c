inherit ROOM;
void create() {
	set( "short", "�̲�԰ǰͥ" );
	set( "object", ([
		"file6"    : "/open/gblade/obj/sa-head",
		"file7"    : "/obj/gift/xiandan",
		"amount1"  : 1,
		"file8"    : "/obj/gift/bingtang",
		"amount3"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/obj/gift/hobowdan",
		"file5"    : "/open/capital/obj/gold_pill",
		"file3"    : "/obj/gift/unknowdan",
		"file2"    : "/open/capital/obj/gold_pill",
		"amount9"  : 1,
		"file9"    : "/obj/gift/hobowdan",
		"amount2"  : 1,
		"amount7"  : 1,
		"file4"    : "/obj/gift/lingzhi",
		"amount5"  : 1,
		"amount6"  : 1,
	]) );
	set( "owner", "kris" );
	set( "build", 13097 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room187.c",
		"west"      : "/open/clan/13_luck/room/room190",
		"out"       : "/open/clan/13_luck/room/room91.c",
		"south"     : "/open/clan/13_luck/room/room189.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��������̲�԰��ǰͥ������һ���ϱ������ʯ�����ϣ�������
�����������Ļ���ͥԺ������Χ��һ�Ÿߴ����������Χ��
�����е������������˵���Ϣ�������붺���ڴˡ�  ������ͨ��
�̲�԰�Ĵ�����������ȥ�����һƬ�����ɵĸо�����������ͨ
���̲�԰�Ĳ����� 
LONG);
	setup();
	replace_program(ROOM);
}
