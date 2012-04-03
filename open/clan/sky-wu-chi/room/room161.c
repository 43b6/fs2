inherit ROOM;
void create() {
	set( "short", "���ĺ���" );
	set( "owner", "bor" );
	set( "light_up", 1 );
	set( "build", 10160 );
	set( "object", ([
		"amount10" : 1,
		"amount3"  : 1,
		"file5"    : "/open/firedancer/npc/eq/r_hands",
		"amount9"  : 1,
		"file2"    : "/open/magic-manor/water/obj/water-ribbon",
		"amount7"  : 1,
		"amount2"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/daemon/class/fighter/figring",
		"amount1"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/u/c/cgy/boots1",
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"file3"    : "/open/firedancer/npc/eq/r_pants",
		"file9"    : "/open/firedancer/npc/eq/r_boots",
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "exits", ([
		"down"      : "/open/clan/sky-wu-chi/room/room315.c",
		"north"     : "/open/clan/sky-wu-chi/room/room217",
	]) );
	set( "long", @LONG
������һ������----$MAG$�λ����$NOR$----���ӱ����ĵط���������
�����صĿ���֮���λ��������е������ն������Ѳ⡣ͬ
ʱҲ�����ѧ�ĺ�����ġ���������ڴˣ�������������ȫ��
Ͷ�����и��������ѧ��������ѧ����������һ����
LONG);
	setup();
	replace_program(ROOM);
}
