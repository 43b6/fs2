inherit ROOM;
void create() {
	set( "short", "[1;34m���뵺[0m" );
	set( "owner", "xraistlin" );
	set( "object", ([
		"file10"   : "/open/dancer/obj/yuawaist",
		"amount3"  : 1,
		"file8"    : "/daemon/class/fighter/armband",
		"amount5"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
		"file6"    : "/open/killer/weapon/k_head3",
		"file2"    : "/daemon/class/bonze/puty_pullium",
		"file1"    : "/open/port/obj/wolf_ring",
		"file5"    : "/open/ping/obj/gold_hand",
		"amount4"  : 1,
		"amount10" : 1,
		"file4"    : "/open/gsword/star/obj/starlegging",
		"amount1"  : 1,
		"file9"    : "/daemon/class/blademan/obj/shield",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/mogi/village/obj/mamulet",
		"amount8"  : 1,
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10190 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"north"     : "/open/clan/sky-wu-chi/room/room252",
		"east"      : "/open/clan/sky-wu-chi/room/room253.c",
		"west"      : "/open/clan/sky-wu-chi/room/room254.c",
	]) );
	set( "long", @LONG
������������,�͸е�һ�ɹ��������
��ϸһ��,��������ܶ������˴��СС�ĵ���
�����������������,��˵�е�������������
��������簲��Ů��[1;32m����ͫ[0m[1;35m�ӻ�����[0m[1;36m��ϣ��[0m[1;31mʸ������[0m
LONG);
	setup();
	replace_program(ROOM);
}
