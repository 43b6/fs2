inherit ROOM;
void create() {
	set( "short", "$HIC$�����$NOR$" );
	set( "owner", "ashin" );
	set( "object", ([
		"file5"    : "/open/gsword/obj/dragon-cloth",
		"amount6"  : 1,
		"amount7"  : 100,
		"file4"    : "/open/fire-hole/obj/r-pill",
		"file9"    : "/open/common/obj/liz_meat",
		"file8"    : "/open/gsword/obj/dragon-sword",
		"amount5"  : 1,
		"file6"    : "/open/gsword/obj1/bball",
		"file7"    : "/open/mogi/castle/obj/ninepill",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 169,
		"amount9"  : 1,
		"amount8"  : 1,
		"amount4"  : 150,
		"amount10" : 1,
		"amount2"  : 100,
		"file2"    : "/open/mogi/castle/obj/ninepill",
		"file1"    : "/open/fire-hole/obj/y-pill",
		"file10"   : "/open/gsword/obj/dragon-sword",
		"amount3"  : 98,
	]) );
	set( "build", 10285 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/hell/room/room12.c",
		"up"        : "/open/clan/hell/room/room9.c",
		"east"      : "/open/clan/hell/room/room118",
		"west"      : "/open/clan/hell/room/room57.c",
	]) );
	set( "long", @LONG
    ������$HIR$���ܵظ�$NOR$�е�����Ľ���磬����˵�����
���ǽ��񣬶���Ҫ�� �� ���Ǹ�$HIR$SM$NOR$�����������˺۵���
���治֪������ô����Ű�ġ�����

$HIR$ι������������Ļ������·����ˡ�
����������㣬��������$NOR$

  ����һ��ץ��ʬ��(Corpse)
LONG);
	setup();
	replace_program(ROOM);
}
