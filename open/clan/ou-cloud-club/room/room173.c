inherit ROOM;
void create() {
	set( "short", "ƽ�����������" );
	set( "object", ([
		"amount3"  : 1,
		"amount2"  : 1,
		"amount8"  : 1,
		"amount5"  : 365,
		"file9"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file10"   : "/open/mon/obj/ghost-claw",
		"file1"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 295,
		"amount9"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/ping/obj/cloud",
		"file3"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount10" : 1,
		"file5"    : "/open/doctor/pill/human_pill",
		"file4"    : "/open/doctor/pill/ice_pill",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"file2"    : "/open/magic-manor/obj/hwa-je-icer",
	]) );
	set( "owner", "slayer" );
	set( "light_up", 1 );
	set( "build", 10061 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room176",
	]) );
	set( "long", @LONG
�������ܣ����صİ��裬�������ĸ�֣���ʵ���Ǹ�ƽ
����������ڣ������ˣ������ʥ������  ������������ڡ�
�����Ǹ��������û��֪�������书�����ж���������
������չ¶�Լ����书��������ˣ�û�˲���֪�����������
��һ������ϰ��ʥ��Ķ��ž�ѧ�ҳ�Ϊ���к�����������ɡ�
��������ƽ������ľ������㲻��һ̾��������ʵ����׽����
LONG);
	setup();
	replace_program(ROOM);
}
