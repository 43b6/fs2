inherit ROOM;
void create() {
	set( "short", "��ڣ" );
	set( "object", ([
		"file2"    : "/open/wind-rain/obj/bird-blade",
		"amount3"  : 1,
		"amount2"  : 1,
		"file6"    : "/daemon/class/bonze/puty_pullium",
		"amount6"  : 1,
		"file7"    : "/daemon/class/blademan/obj/gold-blade",
		"amount8"  : 1,
		"file4"    : "/open/ping/obj/gold_hand",
		"file5"    : "/open/ping/obj/chilin_legging",
		"amount5"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/scholar/obj/icefan",
		"file8"    : "/open/port/obj/wolf_ring",
		"file3"    : "/open/killer/obj/k_ring",
		"amount7"  : 1,
		"amount1"  : 1,
	]) );
	set( "owner", "blader" );
	set( "build", 11826 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room352",
		"north"     : "/open/clan/13_luck/room/room342.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ������Сͨ����������һ���޴�Ķ�Ѩ֮�У�ֻ�����ܵ�����
����������С��һ�ķ�Ĺ������һ�����ķ�Ĺ�ϲ���һ������а��
�ĵ��з���Ĺ����(stone)�ƺ��ж������������˷ܵ������(check)
                                 
                            (��)
                             ��
                   (��)��    ��    ��(ľ)
                            (��)
                          ��������
                         (ˮ)  (��)

LONG);
	setup();
	replace_program(ROOM);
}
