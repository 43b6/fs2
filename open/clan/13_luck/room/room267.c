inherit ROOM;
void create() {
	set( "short", "ҩ��" );
	set( "owner", "konan" );
	set( "object", ([
		"amount9"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file3"    : "/obj/gift/bingtang",
		"amount8"  : 1,
		"file8"    : "/daemon/class/fighter/armband",
		"file10"   : "/obj/gift/hobowdan",
		"amount10" : 1,
		"file5"    : "/obj/gift/lingzhi",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount2"  : 1,
		"file6"    : "/obj/gift/unknowdan",
		"amount7"  : 1,
	]) );
	set( "build", 10521 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room236.c",
		"west"      : "/open/clan/13_luck/room/room283",
	]) );
	set( "long", @LONG

    �����˷��У����Ͼ��Ǿ�޹ޣ����в���һЩ��ҩ����ҩ���滨
��ݡ�����Ҳ���Ǹ���ҽҩ�鼮�ο����ϣ�׿�ϰڷ�����ĥ���߼���
ʽ�ĵ��ߡ������ʳҩ��������غ���֢�ġ�

��Ȼ�ⷿ������˲������ҽ�� �м�

LONG);
	setup();
	replace_program(ROOM);
}
