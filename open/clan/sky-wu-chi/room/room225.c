inherit ROOM;
void create() {
	set( "short", "$HIW$练功房$NOR$" );
	set( "owner", "timekiller" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room242",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
此地为$HIW$霹雳猫$NOR$专属的练功区，里面住着超强的怪物供其练功，
突然之间，眼前出现了传说中火龙幻界里的白光火龙，听闻其龙极为凶恶
只要敢出现在他眼前的人，他将杀无赦，若不是拥有$HIR$猫王神功$HIW$九重天$NOR$者
或是没有三头六臂之人，切勿进来此地～～～～～

LONG);
	setup();
	replace_program(ROOM);
}
