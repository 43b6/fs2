inherit ROOM;
void create() {
	set( "short", "���Ӿ��ҵ�" );
	set( "owner", "roar" );
	set( "object", ([
		"file8"    : "/obj/gift/xiandan",
		"file10"   : "/obj/gift/lingzhi",
		"file2"    : "/obj/gift/bingtang",
		"amount1"  : 1,
		"amount9"  : 1,
		"file7"    : "/obj/gift/xisuidan",
		"file1"    : "/obj/gift/bingtang",
		"amount10" : 1,
		"file5"    : "/obj/gift/xiandan",
		"amount5"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/obj/gift/bingtang",
		"amount2"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10341 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room88",
	]) );
	set( "long", @LONG
������[0;1;31m��[1m��[1m��[1ml[1m��[1m~[1m��[1m��[1m��[1mk[1m��[1m��[0m��ǽ�ϵ�[0;1;30m��[1m��[1m��[1m��[0m�̻��ŵ���[0;1;5;34m��[1;5m��[1;5m��[1;5m][1;5m��[1;5m��[1;5m��[1;5ml[0m��[0;1;31m��[1mT[1m��[1m��[0m��[0;1;33m��[1mM[1m��[1m��[0m��[0;1;32m��[1m��[1m��[1mM[0m
��ս��������[0;1;5;34m��[1;5m��[1;5m��[1;5ml[0m֮����û[0;1;31m��[1m��[1m��[1m��[0m����[0;1;31m��[1mZ[1m��[1mL[0m�����ԭ�������������û��ȫ�⵽��
ԭ����[0;1;5;32m��[1;5mZ[1;5m��[1;5mL[1;5m��[1;5mM[1;5m��[1;5m��[0m֮λ����һ������������ؿ����жϡ�����ŭ�Ե���
                
                ��[0;1;5;31m��[1;5m`[1;5m��[1;5m��[1;5m��[1;5m@[1;5m��[1;5m��[1;5m��[1;5mA[1;5m��[1;5mn[1;5m��[1;5m��[1;5m��[1;5mU[1;5m��[1;5mZ[1;5m��[1;5mL[1;5m��[1;5mA[1;5m��[1;5m��[1;5m��[1;5mV[1;5m��[1;5m��[1;5m��[1;5mC[0m��

LONG);
	setup();
	replace_program(ROOM);
}
