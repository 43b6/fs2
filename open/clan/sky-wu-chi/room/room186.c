inherit ROOM;
void create() {
	set( "short", "������" );
	set( "object", ([
		"amount1"  : 1,
		"amount6"  : 5,
		"file2"    : "/open/fire-hole/obj/y-pill",
		"amount2"  : 10,
		"file3"    : "/obj/gift/xisuidan",
		"file5"    : "/open/mogi/castle/obj/ninepill",
		"file1"    : "/obj/gift/lingzhi",
		"file7"    : "/open/fire-hole/obj/w-pill",
		"file9"    : "/obj/gift/xiandan",
		"amount7"  : 1,
		"file4"    : "/open/mogi/castle/obj/sspill",
		"amount10" : 1,
		"file10"   : "/obj/gift/xiandan",
		"amount5"  : 67,
		"file8"    : "/obj/gift/hobowdan",
		"amount3"  : 1,
		"amount9"  : 1,
		"amount8"  : 1,
		"amount4"  : 4,
		"file6"    : "/open/fire-hole/obj/r-pill",
	]) );
	set( "build", 10006 );
	set( "owner", "jsa" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room188",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�˴�������Ϊ�������Ƶ����ң�ֽ����ͼ������
��Ұ�ף�����������ֻ���������ȴ����������
����裬����������һʯ�������ϵ����������·����
�Ӻ��糵�����棬��ˮ���ɵ����ӻ���΢΢���Σ���
�ڶ�ɫ����ɫ��Ϊ������¹��ԭ�������Ǽ��Ź��ӵ���
�ţ��Ա��м���С����������������
LONG);
	setup();
	replace_program(ROOM);
}
