inherit ROOM;
void create() {
	set( "short", "$HIR$红宝石戒指$NOR$存放区" );
	set( "build", 10157 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room39",
	]) );
	set( "long", @LONG
红宝石戒指在当年是许多新手的必备物品,常常有新手喜欢请老玩家帮忙打这样
装备给他,然而随着时代与科技的进步,很多新手已经不大依赖这样装备了,小敏帮主
是从过去走过来的人,所以在建造戒指存放区的时候,特地留了一间红宝石的房间,
让大家缅怀红宝石戒指过去的风光历史

LONG);
	setup();
	replace_program(ROOM);
}
