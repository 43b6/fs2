inherit ROOM;
void create() {
	set( "short", "�ش���" );
	set( "owner", "rue" );
	set( "light_up", 1 );
	set( "object", ([
		"amount3"  : 829,
		"amount2"  : 99,
		"amount7"  : 261,
		"amount4"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/doctor/pill/ice_pill",
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/open/doctor/pill/human_pill",
		"file8"    : "/open/doctor/pill/sky_pill",
		"amount5"  : 1,
		"file7"    : "/open/doctor/pill/gnd_pill",
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount8"  : 262,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file5"    : "/obj/gift/hobowdan",
		"amount9"  : 1,
	]) );
	set( "build", 10452 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room308.c",
		"north"     : "/open/clan/sky-wu-chi/room/room268.c",
		"west"      : "/open/clan/sky-wu-chi/room/room95.c",
	]) );
	set( "long", @LONG
ԶԶ�ر��Ƽ��������̽�ġ����ֻش����ĸ����֣���
����������Ҷ����������������������������Ѷ��ߵ�
ǽ��ױ������Ҷ�֮����������ҩ�֣��񖟺�����Ÿ�����
��������ߡ����Q�����ѡ���ܺ�ȵȸ�ʽҩ�ģ�ҩ������ʹ
�㾫����������
LONG);
	setup();
	replace_program(ROOM);
}
