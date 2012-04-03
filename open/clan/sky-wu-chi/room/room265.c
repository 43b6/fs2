inherit ROOM;
void create() {
	set( "short", "$HIW$��$HIR$��$HIB$ڣ$NOR$" );
	set( "owner", "mudu" );
	set( "object", ([
		"amount3"  : 33,
		"amount8"  : 6,
		"file9"    : "/obj/gift/xisuidan",
		"file7"    : "/open/ping/obj/poison_pill",
		"amount10" : 7,
		"amount7"  : 18,
		"file6"    : "/open/fire-hole/obj/r-pill",
		"amount6"  : 220,
		"file4"    : "/open/fire-hole/obj/y-pill",
		"amount2"  : 20,
		"amount9"  : 1,
		"amount4"  : 80,
		"file2"    : "/open/fire-hole/obj/b-pill",
		"file10"   : "/open/mogi/castle/obj/blood-water",
		"file1"    : "/open/fire-hole/obj/k-pill",
		"file8"    : "/open/mogi/castle/obj/sspill",
		"amount1"  : 10,
		"amount5"  : 9,
		"file3"    : "/open/fire-hole/obj/w-pill",
		"file5"    : "/open/fire-hole/obj/p-pill",
	]) );
	set( "build", 10113 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room246",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
̤��˴�������һ����ɱ�����ߣ����ϲ����˸�ʽ�����ĶϽ�
�������·���һ����ڣ���ڲ�Զ������һ��ʯ��������д�Ŵ���
��ʥ=>(�森��ͷ)���ὣ֮�أ���������֮�����ڴ˴����ش���
��ʯ��Ϊ֮����������ž���������Ϊ�˸е���׳�����ա�
LONG);
	setup();
	replace_program(ROOM);
}
