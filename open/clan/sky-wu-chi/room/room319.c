inherit ROOM;
void create() {
	set( "short", "miffy 大楼1-2" );
	set( "object", ([
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
	]) );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "build", 10017 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room318",
	]) );
	set( "long", @LONG
这里是miffy 大楼的第一层偏厅,这里存放的东西是属于比较普通的总类
而这里又是称为miffy 平常出去战斗时的换装房,与他相同的另一个房
间则是miffy 大楼第一层之2
这里正是miffy 在换装时的第二房间,两间房间加起来的eq 刚好就是一整套
的战斗装..
LONG);
	setup();
	replace_program(ROOM);
}
