inherit ROOM;
void create() {
	set( "short", "С�����Ŀ���" );
	set( "object", ([
		"file3"    : "/open/main/obj/firesword",
		"amount10" : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/magic-manor/obj/magic-sign",
		"file1"    : "/open/killer/obj/s_pill",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount1"  : 373,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"amount3"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount7"  : 1,
	]) );
	set( "owner", "acelan" );
	set( "build", 11029 );
	set( "item_desc", ([
		"����" : @ITEM
һֻ��ɫ���е��ë�Ĳ�˹�ͽ������ֵĿɰ�����
�ſ�ڽ���˯��������ʱ��׷����ֽ��ɵ���������ȥ
��һֻ�����ɰ���Сè��� ^_^
ITEM,
	]) );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room127",
		"west"      : "/open/clan/hell/room/room125",
	]) );
	set( "long", @LONG
С�����Ŀ����������񷿼䣬�����Ǹ���Բ�㳡����Χ��������
����ǿ�ҵ����������ڹ㳡�ڵ�������Ʒ�������������������ܶ���
�����ģ��������û��������ӣ��濴�������Ÿ�����Ҫ������Ӵ���
�ˡ��ڽ���ſ��һֻè�䣬��С�����İ�è(����)...
LONG);
	setup();
	replace_program(ROOM);
}
