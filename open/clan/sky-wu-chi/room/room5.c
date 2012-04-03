inherit ROOM;
void create() {
	set( "short", "$HIC$交谊室$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/sky-wu-chi/room/hall",
		"west"      : "/open/clan/sky-wu-chi/room/room2",
		"up"        : "/open/clan/sky-wu-chi/room/room7.c",
	]) );
	set( "long", @LONG
这里是天道无极帮下帮众所休息，闲聊的场所，
要是你觉得累了,可以在此地稍做休息,与人聊一聊天
,大家都会很欢迎你的.不论你是新帮众或是老一辈的
玩家，在此休息绝对是你最佳的选择。除了休息。往
上也是通往帮中人员房间的道路。

LONG);
	setup();
	replace_program(ROOM);
}
