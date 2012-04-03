inherit ROOM;
void create() {
	set( "short", "��а��" );
	set( "object", ([
		"amount10" : 1,
		"amount3"  : 1,
		"file5"    : "/daemon/class/fighter/armband",
		"amount9"  : 1,
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"amount2"  : 1,
		"amount7"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/gsword/obj/yuskirt",
		"file3"    : "/open/mogi/castle/obj/fire-king-head",
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"file8"    : "/open/ping/obj/gold_hand",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 10434 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room179",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��[0;1;33m��[1m][1m��[1m��[1m��[1m��[0m������ֱ�ߣ�����Ե���˴����б���[0;1;32m��[1m][1m��[1m��[1m��[1mL[0m�Ĺ�����
�գ�����о������ƺ�û��ôΣ�գ������ۼ���㷢��Զ����������
��[0;1;35m��[1mJ[1m��[1m��[0m����Ʒ��˲������������һ��ͷ��������Ҫ����һ�ΰɣ�����
��[0;1;32m��[1m][1m��[1m��[1m��[1mL[0m�Ŀֲ����飬�����������ĺ����ģ�Զ����Щ[0;1;35m��[1mJ[1m��[1m��[0m���ǵ�
ħ������˵����������������ֻ����ǧ���ܼ�����Ϊ�������˴�
��û��������


LONG);
	setup();
	replace_program(ROOM);
}
