inherit BULLETIN_BOARD;
void create()
{
	set_name( "������", ({ "board", "board" }) );
	set( "long", "��������\n" );
	set( "board_id", "red_fire" );
	set( "capacity", 100 );
	set( "location", CLAN_D->clan_query( "red_fire", "home" ) );
	set( "master", ({ CLAN_D->clan_query( "red_fire", "master" ) }) );
	setup();
}
