inherit BULLETIN_BOARD;
void create()
{
	set_name( "十三吉祥布告栏", ({ "board", "board" }) );
	set( "long", "十三吉祥布告栏。\n" );
	set( "board_id", "13_luck" );
	set( "capacity", 100 );
	set( "location", CLAN_D->clan_query( "13_luck", "home" ) );
	set( "master", ({ CLAN_D->clan_query( "13_luck", "master" ) }) );
	setup();
}
