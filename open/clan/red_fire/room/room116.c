inherit ROOM;
void create() {
	set( "short", "$HIC$����$NOR$��$HIW$�Է�$NOR$" );
	set( "object", ([
		"file2"    : "/open/gsword/obj/dragon-cloth",
		"file8"    : "/open/gsword/obj/dragon-sword",
		"amount1"  : 1,
		"amount5"  : 1,
		"file9"    : "/open/dancer/obj/yuawaist",
		"file5"    : "/daemon/class/scholar/obj/gold_pen",
		"amount8"  : 1,
		"file7"    : "/open/ping/obj/cloud",
		"amount7"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"amount4"  : 1,
		"amount3"  : 24,
		"file4"    : "/open/main/obj/et_sword",
		"file1"    : "/open/main/obj/et_sword",
		"file3"    : "/open/ping/obj/poison_pill",
		"amount9"  : 1,
		"amount2"  : 1,
	]) );
	set( "build", 10526 );
	set( "item_desc", ([
		"���ʵĴ�" : @ITEM
����һ�����ʵĴ�
ITEM,
	]) );
	set( "owner", "welo" );
	set( "exits", ([
		"out"       : "/open/clan/red_fire/room/room117",
		"east"      : "/open/clan/red_fire/room/room115",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

����$HIC$����$NOR$�ճ�������ӵĵط������ʵ�$HIW$����$NOR$���������
��$HIM$�ޱ�$NOR$��$HIY$��ͷ$NOR$������һ��������ȥ���ɿ�����ͷ������
��һ��С$HIR$��̨$NOR$������Ϊ�˽�ʿ$HIC$����$NOR$˯��ǰϲ������Ļ�
ϰ�ߡ��Է��Ĳ��ù�Ȼ�������ط���һ����������$HIY$��ܰ$NOR$
�ĸо�����ů��$HIM$ɫ��$NOR$���㲻�������ķ������飬������
���ּ�Ĵ��ɱɱ֮��$HIC$����$NOR$��������������ǻص���
���úõ�˯��һ�����Ա��и�$HIB$��ش�$NOR$�������Ǹ�����ֲ
���$HIW$��̨$NOR$��


LONG);
	setup();
	replace_program(ROOM);
}
