inherit ROOM;
void create() {
	set( "short", "���ж�Ȯ" );
	set( "object", ([
		"file6"    : "/obj/gift/unknowdan",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"file9"    : "/obj/gift/shenliwan",
		"file5"    : "/obj/gift/xiandan",
		"file2"    : "/open/mogi/castle/obj/sspill",
		"amount4"  : 1,
		"amount6"  : 1,
		"file8"    : "/obj/gift/xiandan",
		"amount7"  : 1,
		"amount3"  : 125,
		"file1"    : "/open/mogi/castle/obj/blood-water",
		"amount5"  : 1,
		"file7"    : "/obj/gift/shenliwan",
		"file4"    : "/obj/gift/lingzhi",
		"amount1"  : 7,
		"amount8"  : 1,
		"amount9"  : 1,
		"amount2"  : 471,
	]) );
	set( "owner", "roar" );
	set( "build", 10427 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room83.c",
		"enter"     : "/open/clan/13_luck/room/room88",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
����̤����ط��ͱ����ĸ����ŵ��ˡ�[0;1;33m��[1m��[1m��[1m��[1m��[1mc[1m��[1m��[0m���������룬�Լ�һ
�����߽�����ʲô����û���������⡱[0;1;33m��[1m��[1m��[1m��[1m��[1mc[1m��[1m��[0m����ָʲô�أ��Լ�ʼ��
���������ʣ���������һ����������ʱ�ܳ�һֻ����С�Ĺ������Ƽ�Ϊ��
�������̲�סȥ��������������[0;1;5;36m��[1;5mD[1;5m��[1;5mD[0m��ԭ������������Ҫ��İ���˵Ĵ�
��
LONG);
	setup();
	replace_program(ROOM);
}
