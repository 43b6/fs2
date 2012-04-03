inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "sir" );
	set( "light_up", 1 );
	set( "build", 10482 );
	set( "object", ([
		"file6"    : "/open/mogi/castle/obj/fire-king-head",
		"file9"    : "/open/killer/headkill/obj/world_dag",
		"file4"    : "/open/killer/memory/static",
		"file1"    : "/open/magic-manor/obj/soil-ball",
		"amount2"  : 1,
		"amount10" : 1,
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"amount9"  : 1,
		"file8"    : "/open/killer/memory/static",
		"file3"    : "/open/magic-manor/fire/obj/fire-fan",
		"amount1"  : 1,
		"amount4"  : 1,
		"amount7"  : 7406,
		"amount3"  : 1,
		"amount6"  : 1,
		"amount8"  : 1,
		"file7"    : "/open/killer/obj/hate_knife",
	]) );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room158.c",
	]) );
    set("long",@LONG
�����ǰ����������ֵķ���, ����������ط����˵�֪
������ȴ��һ�ſ��ʵ���, ���������Ե�������ǰ, ����ȴ
��������Ψһ���ԺͰ������۵���, ������������֪��, ֻ
֪�������ֵĵط��ض���Ѫ, ���˳���Ϊ ɱ   ��

LONG);
        set("no_transmit",1);
        set("cmkroom",1);
        setup();
        replace_program(ROOM);
}
