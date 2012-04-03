 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG



$RED$阴曹入口  $NOR$-
    你已经来到了阴间的入口。虽然距离地府还有一段距离，但是你已经
感受到阵阵刺骨的阴风。四周一片荒凉，但是却鬼影幢幢，看来这边的夜
总会蛮热闹的，应该不愁没伴。南边和上面好像是和人世间相通的管道，
不过好像有一股无形的力量隔开这两个不同的世界，看来要从这两个方向
回去不是那么简单的事情。

LONG);
	set( "short", "$HIR$你的眼前一黑，接着什么也不知道了....$BLK$" );
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
		"煤油冥纸的尸体(corpse)" : @ITEM
这是一代猪神煤油冥纸,但是他已经死了,只剩下尸体在这里
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
