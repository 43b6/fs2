inherit ROOM;
void create() {
	set( "short", "������ļ�" );
	set( "owner", "roboo" );
	set( "object", ([
		"amount9"  : 1,
		"amount1"  : 18,
		"amount3"  : 1,
		"file3"    : "/daemon/class/fighter/ywleg",
		"amount7"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/quests/snake/npc/obj/helmet",
		"amount2"  : 1,
		"file5"    : "/open/quests/snake/npc/obj/snake_gem",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/daemon/class/fighter/ywboots",
		"amount8"  : 1,
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"file8"    : "/open/mogi/dragon/obj/key",
		"file4"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "build", 10108 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room70",
	]) );
	set( "long", @LONG
����һ������$HIW$������$NOR$����أ�ÿ�������ˣ�����ص������Ϣ���ٳ���������һ���������� 
�����գ���͵���⣬��������˵����һ�С�
����ϸһ����ͻȻ�����е�֡��ѵ��ǰ�������������ڶ����𣿣��������ߵ����ߴ���һ��������ͻȻ��һ 
�Ŷ������˳���������ϸһ����ԭ����һֻС��è(Cat)��


LONG);
	setup();
	replace_program(ROOM);
}
