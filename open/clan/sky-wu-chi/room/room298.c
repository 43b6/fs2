inherit ROOM;
void create() {
	set( "short", "后花园" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "object", ([
		"file7"    : "/open/ping/questsfan/obj/dagger1",
		"file9"    : "/open/ping/questsfan/obj/dagger1",
		"file1"    : "/open/ping/questsfan/obj/dagger1",
		"amount5"  : 1,
		"file10"   : "/open/ping/questsfan/obj/dagger1",
		"amount8"  : 1,
		"amount4"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/ping/questsfan/obj/dagger1",
		"file6"    : "/open/ping/questsfan/obj/dagger1",
		"file5"    : "/open/ping/questsfan/obj/dagger1",
		"amount9"  : 1,
		"amount7"  : 1,
		"amount10" : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"file8"    : "/open/ping/questsfan/obj/dagger1",
		"file2"    : "/open/ping/questsfan/obj/dagger1",
		"amount2"  : 1,
		"file4"    : "/open/ping/questsfan/obj/dagger1",
	]) );
	set( "light_up", 1 );
	set( "build", 11121 );
	set( "owner", "holeman" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room295.c",
		"east"      : "/open/clan/sky-wu-chi/room/room294",
		"south"     : "/open/clan/sky-wu-chi/room/room305.c",
	]) );
	set( "long", @LONG
在这里你可以感受到之前所没有感受到的宁静感，或许
这里是这个血痕居最平静的地方吧！微风的轻抚、清脆的鸟
鸣、花团锦簇的景色、这些种种交织成一首宁静的乐章，令
你想要待在此处，暂时远离纷纷扰扰的江湖路。在这宁静的
后花园中你四处观望了一下，在你左手边有一处专门在饲养
马的马厩，而在你的右手边则有着一间看似普通但却散发着
无比霸气的房间，以自己本身的江湖历练你判断该房子的主
人应该就在里面了。
LONG);
	setup();
	replace_program(ROOM);
}
