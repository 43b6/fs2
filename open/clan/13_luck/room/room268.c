inherit ROOM;
void create() {
	set( "short", "���˿����" );
	set( "object", ([
		"amount6"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/dancer/obj/yuawaist",
		"amount1"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/gsword/obj/yuskirt",
		"amount5"  : 1,
		"file7"    : "/open/capital/guard/gring",
		"file4"    : "/open/mogi/castle/obj/lochagem",
		"file1"    : "/open/dancer/obj/maple_ribbon",
		"file5"    : "/open/ping/obj/gold_hand",
		"amount4"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"file3"    : "/open/wu/npc/obj/armband",
	]) );
	set( "owner", "vickey" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room281",
		"south"     : "/open/clan/13_luck/room/room297.c",
	]) );
	set( "build", 10065 );
	set( "light_up", 1 );
	set( "long", @LONG

    ��˵�е����ɣ���̬�������еķ��ߣ�һ���������ܵУ�������
�������壬���ƻ���ľ������ʹ����Ҫ������ֻҪ�����£��Ϳ�����һ
�գ���ȥ���䱨���ˣ����Դ���Ʒ�������Ϳ��Դ򵽵ģ��Ǿ������
��Ŭ�����ɹ������ġ�

LONG);
	setup();
	replace_program(ROOM);
}
