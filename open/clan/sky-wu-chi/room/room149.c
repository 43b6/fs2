inherit ROOM;
void create() {
	set( "short", "�ۺ�ˮ�����" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "object", ([
		"file3"    : "/open/killer/obj/kill_yar_head",
		"amount2"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount10" : 1,
		"file9"    : "/open/gblade/obj/sa-head",
		"amount6"  : 1,
		"amount1"  : 11,
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"amount9"  : 1,
	]) );
	set( "owner", "sski" );
	set( "light_up", 1 );
	set( "build", 12000 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room50.c",
		"west"      : "/open/clan/sky-wu-chi/room/room147.c",
		"south"     : "/open/clan/sky-wu-chi/room/room166.c",
		"east"      : "/open/clan/sky-wu-chi/room/room150.c",
	]) );
        set( "long", @LONG�˵س���, ����һ�
���߽�������,���������ǰͻȻ��һ�ɹ�����������ɹ�����
���Խ��Խ��,ҲԽ��Խǿ����ҫ��....ͻȻ���㷢�������ͷ����
��һ������̫������ˮ������������...ͻȻ���㷢�����ڷۺ��
���ߵ�����֮��,����������������ε��������������������Ҫ��
��ȴ�Ӳ��������������
LONG);
        setup();
        replace_program(ROOM);
}

