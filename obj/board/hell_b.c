inherit BULLETIN_BOARD;
void create()
{
	set_name( "���ܵظ�������", ({ "board", "board" }) );
	set( "long", "���ܵظ���������\n" );
	set( "board_id", "hell" );
	set( "capacity", 100 );
	set( "location", CLAN_D->clan_query( "hell", "home" ) );
	set( "master", ({ CLAN_D->clan_query( "hell", "master" ) }) );
	setup();
}
