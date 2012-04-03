inherit ROOM;
void create() {
	set( "short", "С��ͷ�ļ�" );
	set( "owner", "pighead" );
	set( "object", ([
		"amount6"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount4"  : 1,
		"file10"   : "/open/tendo/obj/chaosbelt",
		"file1"    : "/open/mogi/castle/obj/lochagem",
		"amount10" : 1,
		"amount1"  : 1,
		"file2"    : "/daemon/class/fighter/figring",
		"file9"    : "/daemon/class/fighter/armband",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file8"    : "/open/gsword/obj/may_ring",
		"amount9"  : 1,
		"amount5"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11194 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room90",
		"enter"     : "/open/clan/13_luck/room/room127",
	]) );
	set( "long", @LONG

    ������Ǵ�˵�е�[0;1;33m��[1mQ[1m��[1mT[1m��[1mN[1m��[1m��[0m�����ͷ��[0;1;36m��[1mi[1m��[1mR[1m��[1mp[1m��[1m��[1m��[1mY[0m�ļң�������
��[0;1;33m��[1mQ[1m��[1mT[1m��[1mN[1m��[1m��[0m��λǰ���İ�æ��С��ͷ���ܳ����Ϊ����ͷ���ڴ���һ
��Ҳ�ܺ�ǰ��һ��������������������޵��֣����Ұ������ڵĻ��
�ǣ�����ǰ����������С��ͷһ������[0;1m��[1mQ[1m��[1mT[1m��[1mN[1m��[1m��[0m��Ϊ��һ����ɡ�


LONG);
	setup();
	replace_program(ROOM);
}
