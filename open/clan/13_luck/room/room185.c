inherit ROOM;
void create() {
	set( "short", "����������" );
	set( "object", ([
		"file5"    : "/obj/gift/xisuidan",
		"file2"    : "/open/gblade/obj/dragon_book",
		"file9"    : "/obj/gift/unknowdan",
		"file6"    : "/open/magic-manor/wood/obj/wood-sword",
		"amount5"  : 1,
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"file1"    : "/obj/gift/xisuidan",
		"amount6"  : 1,
		"file10"   : "/obj/gift/xisuidan",
		"amount4"  : 1,
		"file3"    : "/obj/gift/xisuidan",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"file4"    : "/obj/gift/unknowdan",
		"amount10" : 1,
		"amount7"  : 13,
		"amount8"  : 1,
		"file7"    : "/open/ping/obj/poison_pill",
	]) );
	set( "owner", "roar" );
	set( "build", 10035 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room186",
	]) );
	set( "long", @LONG
��صı���������������������������һ�������ط������Ǳ�صĵ���ȴ��
�˿��ܣ���������Ҳ֪���ⲻ���棬Ȼ����������ȥ��ȴ����һ�����������С�
[0;1;32m��[1mi[1m��[1mC[1m��[1m��[0m����˵���ԡ�[0;1;35m��[1mH[1m��[1m��[1m��[1m��[1m��[1m��[0m����������Ҫ���Ķ��������ñ��Ƕ����õ�������
��ʱ�㷢����һ˫��������������һ��������˫�ָ߾ٵĽ��£�

LONG);
	setup();
	replace_program(ROOM);
}
