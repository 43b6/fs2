inherit ROOM;
void create() {
	set( "short", "$HIR$������ϵ$NOR$" );
	set( "owner", "lord" );
	set( "light_up", 1 );
	set( "object", ([
		"file6"    : "/open/scholar/obj/icefan",
		"file2"    : "/open/prayer/obj/boris-cloth",
		"amount3"  : 1,
		"file8"    : "/daemon/class/fighter/figring",
		"amount2"  : 1,
		"file9"    : "/open/dancer/obj/yuawaist",
		"amount10" : 1,
		"amount4"  : 1,
		"file3"    : "/open/capital/obj/gold_pill",
		"file4"    : "/open/gsword/obj/may_ring",
		"file1"    : "/obj/gift/xisuidan",
		"file10"   : "/open/scholar/obj/icefan",
		"amount1"  : 1,
		"amount6"  : 1,
		"amount7"  : 1,
		"amount8"  : 1,
		"amount9"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file5"    : "/open/mogi/castle/obj/fire_book",
	]) );
	set( "build", 10103 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room239",
	]) );
	set( "long", @LONG
�����Ǵ�˵�� ���صĻþ� ������ϵ

$HIR$������һ������������������ĵط���ÿһ���������
������һ���ſ������ķ��䣬���������Ƿ�ֹ����͵͵��
�����涫�������ӡ����ܹ�ɫ����Ĳ��á����һ�����һ
��ŨŨ�Ĺ������������Ŀ�������$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
