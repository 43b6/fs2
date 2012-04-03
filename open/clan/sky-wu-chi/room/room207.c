inherit ROOM;
void create() {
	set( "short", "白素贞的家" );
	set( "owner", "roboo" );
	set( "object", ([
		"amount9"  : 1,
		"amount1"  : 18,
		"amount3"  : 1,
		"file3"    : "/daemon/class/fighter/ywleg",
		"amount7"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/quests/snake/npc/obj/helmet",
		"amount2"  : 1,
		"file5"    : "/open/quests/snake/npc/obj/snake_gem",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/daemon/class/fighter/ywboots",
		"amount8"  : 1,
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"file8"    : "/open/mogi/dragon/obj/key",
		"file4"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "build", 10108 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room70",
	]) );
	set( "long", @LONG
这是一个属于$HIW$白素贞$NOR$的天地，每当他累了，都会回到这里，休息，再出发。这是一个充满了浪 
漫气氛，柔和的烛光，好似在诉说她的一切。
你仔细一看，突然觉得有点怪。难道是白素贞回来，正在冬眠吗？？于是你走到床边大力一翻开床单突然有一 
团东西冲了出来。你仔细一看，原来是一只小白猫(Cat)。


LONG);
	setup();
	replace_program(ROOM);
}
