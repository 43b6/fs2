inherit ROOM;
void create() {
	set( "short", "С�ͼ�" );
	set( "owner", "sznn" );
	set( "object", ([
		"file7"    : "/open/tendo/obj/shoe",
		"amount9"  : 1,
		"amount5"  : 1,
		"amount10" : 1,
		"file6"    : "/open/ping/obj/neck0",
		"amount6"  : 1,
		"amount4"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"amount7"  : 1,
		"file1"    : "/open/killer/obj/k_ring",
		"file8"    : "/open/scholar/obj/icefan",
		"amount8"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/sky/obj1/thunder_emblem",
		"file10"   : "/open/ping/obj/gold_hand",
		"amount1"  : 1,
		"amount3"  : 62,
	]) );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room231",
	]) );
	set( "build", 10326 );
	set( "light_up", 1 );
	set( "long", @LONG

    ��һ����������ض�Ѩ�����ϱ��ĵ��׺ݵ�Ŀ�������ţ�С��һ
����ԭ������ֻ�ػ�ʥ�ޣ��ֱ���[0;1;32m��[1mC[1m��[1ms[0m���׻���[0;1;31m��[1m��[1m��[1m��[0m��[0;1;36m��[1m��[1m��[1mZ[0m��ס��Ѩ
�����ܣ�С�ĵ��ػ����������������ˣ��������ͷʱ���Ѿ�̫����
����ֻʥ���Ѿ������Χס�ˡ�


LONG);
	setup();
	replace_program(ROOM);
}
