inherit ROOM;
void create() {
	set( "short", "ƤƤ�ļ�" );
	set( "object", ([
		"amount3"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/wind-rain/obj/sun_red_cloth",
		"file7"    : "/open/ping/obj/ring-2",
		"amount4"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/ping/obj/gold_hand",
		"file3"    : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/mogi/village/obj/mogi_ring",
		"file4"    : "/open/ping/obj/iceger",
		"amount8"  : 1,
		"amount2"  : 1,
	]) );
	set( "owner", "kris" );
	set( "build", 9231 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room92",
	]) );
	set( "long", @LONG
�����������ƤƤ���ҵļң�����İ���ʮ�ֵļ򵥣���������
�����ӣ�����һ�������Ƴɵķ��������������һ��С���ԣ���
��֮��Ϳյ����ģ���ν��ͽ��赣���ش˴�������һ��ûʲô
��ͷ��  ����������߿��Իص��̲�԰��ǰͥ��
LONG);
	setup();
	replace_program(ROOM);
}
