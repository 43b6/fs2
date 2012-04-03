inherit ROOM;
void create() {
	set( "short", "���ħ-���Ӿ�" );
	set( "object", ([
		"amount5"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"file1"    : "/obj/gift/lingzhi",
		"amount4"  : 1,
		"amount1"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"file5"    : "/daemon/class/bonze/puty_pullium",
		"amount7"  : 1,
		"file9"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file2"    : "/obj/gift/xisuidan",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"file3"    : "/daemon/class/bonze/puty_pullium",
		"amount8"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/obj/gift/xiandan",
		"amount10" : 1,
		"amount6"  : 1,
	]) );
	set( "owner", "roar" );
	set( "build", 10302 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room184",
		"south"     : "/open/clan/13_luck/room/room88.c",
		"east"      : "/open/clan/13_luck/room/room185.c",
	]) );
	set( "long", @LONG
��̤���˵أ����������֡�[0;1;34m��[1mg[1;36m��[1m��[1;31m��[1m][0m-[0;1;35m��[1m��[1m��[1ml[1m��[1m~[0m��ֻ�������з���һ��Ī
���Ŀ־壬��ʱ�뵽��[0;1;35m��[1m��[1m��[1ml[1m��[1m~[0m ������֪��ԭ������[0;1;5;34m��[1;5m��[1;5m��[1;5ml[0m�ĵ��̣�����[0;1;34m��[1m��[0m
[0;1;34m��[1m][1m��[1m��[1m��[1ml[0m�ķ��䣬������Χ����ʲô������ֻ��һ����ȥ���Կ�������ͷ��
�����ߵ������һ��ǽʱ������ǽ�϶���[0;1;7;30m��[1;7mM[1;7m��[1;7m��[0m���ɴ˿�֪[0;1;5;34m��[1;5m��[1;5m��[1;5ml[0m��[0;1;36m��[1m\[1m��[1mO[0m��Ϊ
[0;1;31m��[1mT[1m��[1m��[0m��[0;1;33m��[1mM[1m��[1m��[0m��[0;1;32m��[1m��[1m��[1mM[0m�����µ�Ŭ����


LONG);
	setup();
	replace_program(ROOM);
}
