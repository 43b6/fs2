// Room : /open/clan/sky-wu-chi/room/room14.c
inherit ROOM;
void create(){
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "long", @LONG
�����ǻ����Ūһ�ţ����Ե���С��
�Ĺ��ѣ�������СС�ģ���ʵ�Ǹ���լԺ
������С�¼ҵ�����ס�ķ��䣬ƽ������
С�¼ҵ��˶����ڣ����Կ������տյ���
�ģ�������ϸһ�ƣ����������������
ֻ����С�¼ҵ��˶���˯���ԡ�

LONG);
	set( "short", "$HIC$��$NOR$С�¼Ҵ���$HIC$��$NOR$С����" );
	set( "owner", "eric" );
	set( "object", ([
		"amount7"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/scholar/obj/icefan",
		"amount10" : 1,
		"file8"    : "/open/dancer/obj/yuawaist",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/prayer/obj/boris-cloth",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"file2"    : "/open/port/obj/wolf_ring",
		"amount8"  : 1,
		"file9"    : "/open/wu/npc/obj/armband",
		"file10"   : "/open/mon/obj/ghost-claw",
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount5"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "build", 10043 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room8.c",
		"out"       : "/open/clan/sky-wu-chi/room/room112",
		"enter"     : "/open/clan/sky-wu-chi/room/room154.c",
	]) );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
