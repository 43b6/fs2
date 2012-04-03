inherit ROOM;
void create() {
	set( "short", "$RED$�������$NOR$" );
	set( "owner", "cong" );
	set( "object", ([
		"amount7"  : 1,
		"amount10" : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"file4"    : "/open/magic-manor/obj/water-ball",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mogi/dragon/obj/key",
		"file2"    : "/open/magic-manor/wood/obj/wood-sword",
		"amount4"  : 1,
		"file9"    : "/obj/gift/xisuidan",
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"amount8"  : 1,
		"file8"    : "/obj/gift/lingzhi",
		"file6"    : "/open/killer/island/obj/luamulet",
	]) );
	set( "build", 10161 );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room99",
	]) );
	set( "long", @LONG


   ���Ѿ��������������ڡ���Ȼ����ظ�����һ�ξ��룬�������Ѿ�
���ܵ�����̹ǵ����硣����һƬ����������ȴ��Ӱ������������ߵ�ҹ
�ܻ������ֵģ�Ӧ�ò���û�顣�ϱߺ���������Ǻ���������ͨ�Ĺܵ���
����������һ�����ε�����������������ͬ�����磬����Ҫ������������
��ȥ������ô�򵥵����顣

LONG);
	setup();
	replace_program(ROOM);
}
