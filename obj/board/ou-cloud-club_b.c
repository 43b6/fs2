inherit BULLETIN_BOARD;
void create()
{
	set_name( "����ɽׯ������", ({ "board", "board" }) );
	set( "long", "����ɽׯ��������\n" );
	set( "board_id", "ou-cloud-club" );
	set( "capacity", 100 );
	set( "location", CLAN_D->clan_query( "ou-cloud-club", "home" ) );
	set( "master", ({ CLAN_D->clan_query( "ou-cloud-club", "master" ) }) );
	setup();
}
