inherit ROOM;
void create() {
	set( "short", "$HIC$$BWHT$�����׵�װ����$NOR$" );
	set( "owner", "hild" );
	set( "object", ([
		"amount4"  : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"amount6"  : 1,
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"file3"    : "/open/dancer/obj/yuawaist",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file2"    : "/open/dancer/obj/yuawaist",
		"amount3"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/ping/obj/gold_hand",
		"file6"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 33701 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room110",
	]) );
	set( "long", @LONG
��һ����$HIR$������$NOR$��$HIB$װ����$NOR$֮һ��������˸�ʽ������������
���ߡ��ⶼ��$HIR$������$NOR$��������ȥ���˱�����ǳ�����ʱ����
��������ʤ��Ʒ��װ�����Ƿ���$HIY$����$NOR$���$HIR$������$NOR$��������
������Щװ������$HIR$������$NOR$��������������ֻ���ʺ���
����ʹ���ˣ�������Ҫ������Щװ�������ϼ��ѡ�
LONG);
	setup();
	replace_program(ROOM);
}
