inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "owner", "mad" );
	set( "object", ([
		"file2"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file4"    : "/daemon/class/blademan/obj/ublade",
		"amount5"  : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"amount8"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"file10"   : "/open/wu/npc/obj/armband",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount2"  : 1,
		"amount10" : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
	]) );
	set( "build", 15238 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room20.c",
		"up"        : "/open/clan/13_luck/room/room22",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ������һ��ʱ�䣬���ڿ������յ���ڲ�Զ�������˷ܵĲ�������
��������������˵����ǰֱ�壬һ�������������ţ�����ȫ�����˰���
�������˾ͺ���Ư���ڿ��У�������˵�����Ŀ��֣��ڴ���һ��ʮ����
����������ࡣ

LONG);
	setup();
	replace_program(ROOM);
}
