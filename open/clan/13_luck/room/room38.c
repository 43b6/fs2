inherit ROOM;
void create() {
	set( "short", "虚拟海洋" );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room39.c",
		"north"     : "/open/clan/13_luck/room/room33",
		"east"      : "/open/clan/13_luck/room/room37.c",
		"south"     : "/open/clan/13_luck/room/room52.c",
	]) );
	set( "long", @LONG

    向着四周望去尽眼力能看到最远的地方，也似乎看不见陆地，只
看见一大片的蓝蓝大海，喝着小酒吃着小菜，尽兴的欣赏。过了许久
不知船开的方向对不对，向着远方望去还是看不到任何一块空地，心
理想着是不是迷路了。

LONG);
	setup();
	replace_program(ROOM);
}
