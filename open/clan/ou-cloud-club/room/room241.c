inherit ROOM;
void create() {
	set( "short", "$HIR$��  $HIM$��  $HIB$��$NOR$" );
	set( "object", ([
		"file9"    : "/open/killer/obj/hate_knife",
		"file6"    : "/open/scholar/obj/icefan",
		"amount9"  : 14744,
		"amount8"  : 1,
		"amount10" : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/daemon/class/fighter/armband",
		"amount4"  : 1,
		"file7"    : "/open/dancer/obj/yuawaist",
		"amount7"  : 1,
		"file10"   : "/open/prayer/obj/boris-cloth",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/ping/obj/gold_hand",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "owner", "ripken" );
	set( "build", 10837 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room215.c",
		"west"      : "/open/clan/ou-cloud-club/room/room242",
		"up"        : "/open/clan/ou-cloud-club/room/room256.c",
	]) );
	set( "long", @LONG
һ��ѩ ���������� ��Ը�����±��������
����İ��� ���������� ����ǧ���ٽٶ����ܼ��
                                                                                
���˲�Ҫ˵ ̫�Ҵ����� ����Ӧ�늅���������Ǳ�
�ֲ��弾�� ��������� ��ǰ������ ��ɫ���Ծ���
                                                                                
���˲�Ҫ˵ ̫�Ҵ����� ����Ӧ�늅���������Ǳ�
�ֲ��弾�� ��������� ���ǲ�Ҫ˵�ټ� ����������

LONG);
	setup();
	replace_program(ROOM);
}
