inherit ROOM;
void create() {
	set( "short", "$HIW$【$HIC$兰刀$HIR$隐阁$HIW$】$NOR$" );
	set( "light_up", 1 );
	set( "build", 862 );
	set( "item_desc", ([
		"檀香正在炉中冉冉地烧着" : @ITEM
檀香正在炉中冉冉地烧着
ITEM,
	]) );
	set( "owner", "eniss" );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
房内此刻灯火正光明万钻兰刀放在尾端一张紫檀方桌上。故老相传，这万钻兰刀
乃是元世祖忽必烈汗底定中原后，命宫中匠人以碧玉雕叶、苍玉为瓣、碧玺刻成刀
型，嵌在一座黑釉瓷拟成的土基上，做成一朵兰花的模样，不知为何竟在此出现。
接着映入你眼帘的是排列整齐的各式刀剑，隐隐散发出嗜血的魔气，令你不禁运气
调息，避免心绪大受干扰，如此邪气逼迫你不得不放弃待在此处的念头。

LONG);
	setup();
	replace_program(ROOM);
}
