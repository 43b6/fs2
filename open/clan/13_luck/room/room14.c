inherit ROOM;
void create() {
	set( "short", "��ȸ��" );
	set( "owner", "aman" );
	set( "object", ([
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/gblade/obj/sa-head",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount7"  : 1,
		"file4"    : "/daemon/class/fighter/armband",
		"amount5"  : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"amount10" : 1,
		"file8"    : "/open/mogi/village/obj/mogi_ring",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/tendo/obj/chaosbelt",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount3"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "build", 19190 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room15",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ����ȸ�õ����ڲ�����æ��æ���Ĺ����������ǹ�ʮ�����������
���ģ�������������ҵ��й�ʮ��������¼������ᣬ����������ǰ��
�͵���ʷ�ʹ���ʮ������ʱǰ�˵�Ϊ�裬����������ȥ�벻��������
��һ�㣬��ϣ�����������˼̳����˵���־��

LONG);
	setup();
	replace_program(ROOM);
}
