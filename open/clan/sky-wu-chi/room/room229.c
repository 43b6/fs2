inherit ROOM;
void create() {
	set( "short", "小喵道具房" );
	set( "object", ([
		"file6"    : "/open/fire-hole/obj/b-pill",
		"file7"    : "/open/fire-hole/obj/w-pill",
		"amount1"  : 294,
		"file8"    : "/open/fire-hole/obj/p-pill",
		"amount3"  : 165,
		"amount4"  : 186,
		"file5"    : "/open/mogi/castle/obj/sspill",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount8"  : 103,
		"file1"    : "/open/fire-hole/obj/g-pill",
		"file3"    : "/open/fire-hole/obj/r-pill",
		"file2"    : "/open/fire-hole/obj/k-pill",
		"amount7"  : 106,
		"file9"    : "/open/fire-hole/obj/y-pill",
		"amount9"  : 69,
		"amount2"  : 10,
		"amount10" : 1,
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount5"  : 64,
		"amount6"  : 79,
	]) );
	set( "build", 10307 );
	set( "owner", "cong" );
	set( "exits", ([
		"down"      : "/open/clan/sky-wu-chi/room/room99",
	]) );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "long", @LONG
这是一小喵专用的道具间 , 这里放着各式各样的道具 , 为
世界道具最为齐全之地 , 你看到各种奇怪的道具 , 所谓工欲善
其事 ,必先利其器 , 看来 ,你也该为自己选把像样的道具 , 好
闯荡江湖 .你可以看看(list)参观一下这里的防具 ?

LONG);
	setup();
	replace_program(ROOM);
}
