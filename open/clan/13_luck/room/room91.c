inherit ROOM;
void create() {
	set( "short", "绿茶园" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "build", 12006 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room90.c",
		"enter"     : "/open/clan/13_luck/room/room92",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

千  此  人  不  转  何  高  我  不  明  苏
里  事  有  应  朱  似  处  欲  知  月  轼
共  古  悲  有  阁  在  不  乘  天  几  
婵  难  欢  恨      人  胜  风  上  时  水
娟  全  离      低  间  寒  归  宫  有  调
        合  何  绮          去  阙      歌
    但      事  户      起          把  头
    愿  月  长          舞  又  今  酒
    人  有  向  照      弄  恐  夕  问
    长  阴  别  无      清  琼  是  青
    久  晴  时  眠      影  楼  何  天
        圆  圆              玉  年
        缺                  宇

LONG);
	setup();
	replace_program(ROOM);
}
