inherit ROOM;
void create() {
	set( "short", "逍遥居" );
	set( "object", ([
		"amount2"  : 1,
		"amount3"  : 1,
		"file3"    : "/obj/gift/bingtang",
		"amount1"  : 1,
		"file1"    : "/obj/gift/bingtang",
		"file2"    : "/obj/gift/xisuidan",
	]) );
	set( "owner", "bor" );
	set( "build", 6567 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room161.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
一进门就可以看到门上高高挂起的牌匾写着逍遥居三个偌大ㄉ字
想必是杨逍的居所,里面庄严的气氛令人觉得有点可怕
且散发着一股令人窒息的空气像是内力深厚的高手就在里面
原来是杨消息日练功留下的余劲若是没有深厚的内功恐怕
一进去就会被这股深厚的内力所震伤

LONG);
	setup();
	replace_program(ROOM);
}
