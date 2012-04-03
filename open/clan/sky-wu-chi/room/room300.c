inherit ROOM;
void create() {
	set( "short", "������" );
	set( "object", ([
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"file10"   : "/open/mogi/castle/obj/fire_book",
		"amount9"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"amount4"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 11703 );
	set( "light_up", 1 );
	set( "owner", "holeman" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room305",
	]) );
	set( "long", @LONG
�����ⷿ������������ڣ���Ϊ�ⷿ����ȫû�а��裬ȡ
����֮���������ɸ���������ɵ�ǽ�ڣ�����Щ��Ӳ��ǽ��
��ȴ�����������ĵ��ۡ�������������һ������ʱ��û�뵽
���Ժ���ͻȻ���ֳ�һ������������һʽ���У�ԭ����Щ��
���϶�������ÿһʽ���еĵ��⡣��û�뵽��Щ����ȴ̫��
�����������ô�����޷�ץ�����еľ��裬������Щ��
�е�����һ����λ�������˰���
LONG);
	setup();
	replace_program(ROOM);
}
