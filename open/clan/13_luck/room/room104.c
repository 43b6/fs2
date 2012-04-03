inherit ROOM;
void create() {
	set( "short", "EMC ����Ӫ��" );
	set( "object", ([
		"amount6"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/tendo/obj/chaosbelt",
		"amount3"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"amount8"  : 1,
		"file8"    : "/open/wu/npc/obj/armband",
		"amount7"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file1"    : "/daemon/class/blademan/obj/iceblade",
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "owner", "wyld" );
	set( "build", 10224 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room75",
		"north"     : "/open/clan/13_luck/room/room111.c",
		"west"      : "/open/clan/13_luck/room/room110.c",
		"east"      : "/open/clan/13_luck/room/room112.c",
		"south"     : "/open/clan/13_luck/room/room109",
	]) );
	set( "long", @LONG
һ��Ӫ��,����һ����������Ӫ�칫��,�Ա߻���Ӫ����,����,��ս�Ҹ������
��һ����һ���Ǿ�е�Ҹ�����ⷿ,��������������ȥ,���ź�����󿨵ĵط�
��Ӫ���Ա�����RE-3000�����ܲ�����,CE-���ܳ���,��һ������RS-����ϰ���
CS-����г�,��һ������ESDը���Ա�����,EFT �𺳽�����,�ȵȸ�ʽ����
LONG);
	setup();
	replace_program(ROOM);
}
