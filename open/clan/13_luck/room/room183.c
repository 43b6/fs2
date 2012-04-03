inherit ROOM;
void create() {
	set( "short", "С�ڹ�ķ���" );
	set( "object", ([
		"amount10" : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/port/obj/wolf_ring",
		"amount5"  : 1,
		"file4"    : "/open/dancer/obj/yuawaist",
		"amount7"  : 1,
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount9"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/dancer/obj/maple_ribbon",
		"amount1"  : 1,
		"file8"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"file10"   : "/daemon/class/blademan/obj/ublade",
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
	]) );
	set( "owner", "turtle" );
	set( "build", 10561 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room369",
		"south"     : "/open/clan/13_luck/room/room101.c",
	]) );
	set( "long", @LONG

    ���ý������ȣ�ǰ��ɽϪ���¹���Ϫˮ�峺�쳣��ɽ����һ�����ٲ�
���������գ��������£�����һ���峺�쳣�Ĵ���С��ٲ�ע�봦��ˮ��
����ֻ����ٲ�ʮ���ɣ���ˮ��һ�羵���������У�����Ҳ��һ�����
Բ�¡��ڹ�ɽ�����˳�����ı��˫���˳�ᢾ�ʤǧ��������������
�ף����𺳵���Ч�ڹ���ʽ���Ц���ڹ궯�����顣����������Ԫ��
���ڹ����������������޵й��վ�����ǰ����

LONG);
	setup();
	replace_program(ROOM);
}
