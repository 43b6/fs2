inherit ROOM;
void create() {
	set( "short", "��֮Ѩ" );
	set( "owner", "fighter" );
	set( "object", ([
		"file8"    : "/obj/gift/xisuidan",
		"amount8"  : 1,
		"file3"    : "/open/magic-manor/obj/maun-shadow-blade",
		"amount7"  : 1,
		"amount9"  : 1,
		"file7"    : "/obj/gift/xisuidan",
		"file9"    : "/obj/gift/hobowdan",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file10"   : "/obj/gift/hobowdan",
		"amount1"  : 1,
		"file1"    : "/obj/gift/hobowdan",
		"amount6"  : 1,
		"amount2"  : 1,
		"file2"    : "/obj/gift/xiandan",
		"amount3"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/gblade/obj/dragon_book",
		"amount10" : 1,
	]) );
	set( "build", 10194 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room348",
		"out"       : "/open/clan/13_luck/room/room265.c",
		"south"     : "/open/clan/13_luck/room/room324.c",
	]) );
	set( "long", @LONG

    �򵥵�ʯ��������ʯ��ʯ�������漸�����书�鼮ɢ�ҷ��ã���
���������ѧ�ľ������硣�Ա߾ͷ���һЩ�������������·����ߣ�
�Ա߻��м�ֻ�����С��������Ϸ��ˣ�ţ�����С��򣬲�ʱ������
���У�����ż����������СС�Ļ��棬�᲻���������еĴ������ީ�
[0;1;32m��[1mt[1m��[1m~[0m��[0;1;31m��[1mW[0m


LONG);
	setup();
	replace_program(ROOM);
}
