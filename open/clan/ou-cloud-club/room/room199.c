inherit ROOM;
void create() {
	set( "short", "$HIC$��ħ$HIM$���Ƶ�$NOR$" );
	set( "object", ([
		"file10"   : "/open/gsword/obj1/sball",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/prayer/obj/boris-cloth",
		"file1"    : "/open/fire-hole/obj/w-pill",
		"amount1"  : 3,
		"amount8"  : 1,
		"amount9"  : 1,
		"amount7"  : 1,
		"file4"    : "/open/ping/obj/gold_hand",
		"amount5"  : 1,
		"amount10" : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/gsword/obj/dragon-sword",
		"file8"    : "/open/port/obj/wolf_ring",
		"file7"    : "/open/prayer/obj/kylin-belt",
		"file5"    : "/open/ping/obj/gold_hand",
		"amount3"  : 1,
		"file2"    : "/open/mogi/castle/obj/ninepill",
	]) );
	set( "owner", "mekyn" );
	set( "build", 10066 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room17",
	]) );
	set( "long", @LONG

    �߽��˵أ���ǰһƬ��˼�������ҡҷ���ƺ����ڻ�ӭ���ĵ���
����ʯ��ϸ����˿�����߲�ʱ������������趯֮�����·��˼�����
��ϸһ������˼�������Ʈ�ݲ������紵�嶯��˿˿͸¶�����ް���
����ν��˼���г���˼����Ҷ��紵��˼�������ġ�

LONG);
	setup();
	replace_program(ROOM);
}
