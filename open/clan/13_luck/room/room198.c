inherit ROOM;
void create() {
	set( "short", "无敌战龙" );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room199",
	]) );
	set( "long", @LONG

这里是无敌战龙的龙尾部份，你是否已经准备好组合无敌战龙了，若
是，请将龙末插入这条龙的龙尾吧！！！！你将九龙的魂魄引进无敌
战龙的躯壳里，龙脑放至战龙的头部，龙心放置战龙的心窝，龙气引
至战龙体内，在将枫岩放置战龙嘴巴。  
瞬间雷声大作　地动山摇　无敌战龙将要现世了　武林将是一场浩劫 

LONG);
	setup();
	replace_program(ROOM);
}
