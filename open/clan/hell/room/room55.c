inherit ROOM;
void create() {
	set( "short", "$HIY$����$HIM$�����ȯ$NOR$" );
	set( "object", ([
		"amount3"  : 2598959,
		"file3"    : "/open/marksman/obj/arrow-3",
		"amount2"  : 1,
		"file4"    : "/open/doctor/pill/human_pill",
		"amount4"  : 58,
		"amount5"  : 289,
		"amount1"  : 1,
		"file5"    : "/open/doctor/pill/ice_pill",
		"file1"    : "/open/marksman/obj/dragon_bow",
		"file2"    : "/open/marksman/obj/bow-5",
	]) );
	set( "owner", "kalin" );
	set( "build", 10382 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room54.c",
		"west"      : "/open/clan/hell/room/room43",
		"east"      : "/open/clan/hell/room/room50.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

kalin�Դ�����ɽ����...
�Ͱ�һ�����񽻸���ʺ�д��ȥ����..
ƽ��û��..����������
��Ȼ..����Ҳ��Ҫ�б�Ǯ��..
���˿�С�ܴ�ɶ�ʱ�ɹ��ı����ѡ�..
������Ӧ����������..
�������ȯ����...
�����������̨����վ��..
����һλ�������ε�������������ȯ
��Ҫ����..�Ǿ���kalin..
�ǵö���������...
LONG);
	setup();
	replace_program(ROOM);
}
