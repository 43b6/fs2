inherit ROOM;
void create() {
	set( "short", "ħ������" );
	set( "object", ([
		"file2"    : "/open/dancer/obj/yuawaist",
		"file4"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/ping/obj/ring-2",
		"file9"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/wu/npc/obj/armband",
		"amount3"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount10" : 1,
		"amount4"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
	]) );
	set( "owner", "sznking" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room313",
		"south"     : "/open/clan/13_luck/room/room302.c",
	]) );
	set( "build", 10137 );
	set( "light_up", 1 );
	set( "long", @LONG

    ��Ϊħ����������Ī�޳�����ϱ��ħ���ı�̬�ǿ���ռ��г�
���ģ��ο���ʦ�����ģ�����������ħ�����򵽲��ܶ�������ħ������
���Ǳ����еĺݽ�ɫ����ն��Ԫ����ն�����߰��㣬�ȼ��͵���ң���
��������̲�Ȼ�Բ����ȥ��С��С���ݲ���..

LONG);
	setup();
	replace_program(ROOM);
}
