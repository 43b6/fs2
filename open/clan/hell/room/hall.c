 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG



$RED$�������  $NOR$-
    ���Ѿ��������������ڡ���Ȼ����ظ�����һ�ξ��룬�������Ѿ�
���ܵ�����̹ǵ����硣����һƬ����������ȴ��Ӱ������������ߵ�ҹ
�ܻ������ֵģ�Ӧ�ò���û�顣�ϱߺ���������Ǻ���������ͨ�Ĺܵ���
����������һ�����ε�����������������ͬ�����磬����Ҫ������������
��ȥ������ô�򵥵����顣

LONG);
	set( "short", "$HIR$�����ǰһ�ڣ�����ʲôҲ��֪����....$BLK$" );
	set( "object", ([
		"amount9"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/capital/obj/letter",
		"amount6"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
		"file1"    : "/open/tendo/obj/lucloth",
	]) );
	set( "item_desc", ([
		"ú��ڤֽ��ʬ��(corpse)" : @ITEM
����һ������ú��ڤֽ,�������Ѿ�����,ֻʣ��ʬ��������
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 10137 );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room3.c",
		"east"      : "/open/clan/hell/room/room7.c",
		"enter"     : "/open/clan/hell/room/room37.c",
		"west"      : "/open/clan/hell/room/room10.c",
		"up"        : "/open/clan/hell/room/room23.c",
		"south"     : "/open/clan/hell/room/room42",
		"down"      : "/open/clan/hell/room/room8.c",
	]) );
	setup();                                             
	call_other( "/obj/board/hell_b", "???" );
	}
