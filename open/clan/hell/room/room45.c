inherit ROOM;
void create() {
	set( "short", "$HIR$密室$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount2"  : 1,
		"file2"    : "/open/main/obj/et_sword",
	]) );
	set( "item_desc", ([
		"黑轮雕像" : @ITEM
这是传说中ㄉ黑轮
这是传说中ㄉ黑轮
[31m这是传说中ㄉ黑轮[0m
ITEM,
	]) );
	set( "build", 11515 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room56",
	]) );
	set( "long", @LONG
走到这里，你敏锐的身体感觉到了空气的凝重每
向前一步，就仿佛将被撕裂一般，越是运功抗衡，越
是痛苦，这不是一般人能待的地方阿．

             [0;1;35m□[1mr[1;31m□[1mC[1m□[1m][1;35m□[1mr[0m [0;1m□[1m□[1m□[1m□[0m

               [0;1m□[1mi[1;36m□[1mm[1m□[1m□[1m□[1m□[1;37m□[1mj[0m


LONG);
	setup();
	replace_program(ROOM);
}
