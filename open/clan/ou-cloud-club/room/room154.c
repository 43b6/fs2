inherit ROOM;
void create() {
	set( "short", "ˮ���涴ǰ��" );
	set( "object", ([
		"file10"   : "/open/ping/obj/gold_hand",
		"file5"    : "/open/scholar/obj/icefan",
		"file1"    : "/daemon/class/blademan/obj/shield",
		"file4"    : "/daemon/class/fighter/armband",
		"amount8"  : 1,
		"file2"    : "/open/dancer/obj/yuawaist",
		"amount1"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"amount9"  : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/ping/obj/ring-2",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"file6"    : "/open/snow/obj/figring",
	]) );
	set( "owner", "issei" );
	set( "build", 10080 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room167",
		"down"      : "/open/clan/ou-cloud-club/room/room18.c",
	]) );
	set( "long", @LONG
����һ�������伫��������ռ�������������ֻ��һƬ�����ı�������Ѩ�ı�
��Ϊ�⻬��Ө���޷��ʸ���ˮ���ұ�......��������С��һ�����͸����Ӽ������
ǧ�����ǰ����ʬ�Ǻ����¼ŵش�����ңԶ�������ˡ��������޵Ĺ��ʹ����
�����󣬲�����ʧ�˽��Ļ�����ص����������ģ֮��......

�·�����Զ��������������������ײ����������Һ�������ڹǹ���������������

һ�ɲ�֪���Ĺ���������ʹ�������������ȥ......

LONG);
	setup();
	replace_program(ROOM);
}








