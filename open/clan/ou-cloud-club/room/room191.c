inherit ROOM;
void create() {
	set( "short", "����ڣ" );
	set( "object", ([
		"file4"    : "/open/wind-rain/obj/sun_red_cloth",
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount3"  : 1,
		"amount5"  : 1,
		"file3"    : "/daemon/class/fighter/armband",
		"amount7"  : 1,
		"file9"    : "/open/tendo/obj/chaosbelt",
		"amount4"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/daemon/class/fighter/figring",
		"amount8"  : 1,
		"amount6"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/daemon/class/blademan/obj/shield",
	]) );
	set( "build", 10332 );
	set( "item_desc", ([
		"girl" : @ITEM
��͸������΢���������������ڷ������ٵ�С�Ҵ�������
����ڣ��ҩ�ס���֪�ڶ�С��ʱ�������ɽ�����������
��ʱ���Ͻ�����һ�����С��¡��ֵ����壬ֱ����ҹ���צ�
��ʮ���������ͣ�������ÿɰ���������Ϊ��Ů��
ITEM,
	]) );
	set( "light_up", 1 );
	set( "owner", "del" );
	set( "exits", ([
		"north"     : "/open/clan/ou-cloud-club/room/room201",
		"west"      : "/open/clan/ou-cloud-club/room/room147.c",
	]) );
	set( "long", @LONG
��Խ���������ľ��֮��������һ��������ɳ�Ŀյ�
��������һ�����˸ߵ����ѣ�����ǰ�п�ʯ�������ּ�����
ģ����������һ���Ͼɵ�С��ͤ���������������Ÿ�һ��ʯ
�������߽�һ�������ϻ�����һ��ֻ���˰�ֵ����̸�һ��
Ũ������衣����֮����һλСŮ��(girl)��������΢Ц��
��
LONG);
	setup();
	replace_program(ROOM);
}
