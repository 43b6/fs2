inherit ROOM;
void create() {
	set( "short", "$HBCYN$�쾧���$NOR$" );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room29",
	]) );
	set( "object", ([
		"file5"    : "/open/ping/questsfan/obj/diamond_armor",
		"amount9"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount6"  : 1,
		"file1"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount3"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
		"file3"    : "/open/ping/questsfan/obj/diamond_belt",
		"file4"    : "/open/ping/questsfan/obj/diamond_hands",
		"file6"    : "/open/ping/questsfan/obj/diamond_boots",
		"file2"    : "/open/ping/questsfan/obj/diamond_armor",
		"file10"   : "/open/ping/questsfan/obj/diamond_boots",
		"amount1"  : 1,
		"amount5"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10347 );
	set( "long", @LONG
��˵��������õ�װ��,�羧װ��ȫ��,��Ȼ�����������Ƶ�,����ʵ��������
������˵,��ʵҲ�ǲ���ķ���װ��.���԰���ƽʱ�ر�׼�����״���װ��,���ڴ˽�
����,�ð�����͵�����ǽ�����ʱ�����������ȡ,���Ķ��˿��Ű����Ķ���,ϣ��
����ʹ��������Զ��黹

LONG);
	setup();
	replace_program(ROOM);
}
