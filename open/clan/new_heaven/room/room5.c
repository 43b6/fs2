// Room : /open/clan/new_heaven/room/room5.c
 inherit "/open/clan/claneqshop.c";

void create()
{
        seteuid(getuid());
	set( "short", "新天堂武器防具室" );
	set( "no_clean_up", 1 );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	set( "long", @LONG
新天堂帮众的武器防具寄放室, 你可以(look post)来获得
使用方法
LONG);
	set( "eqroom", 1 );
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/new_heaven/room/hall",
]) );
	set( "item_desc", ([ /* sizeof() == 1 */
  "post" : "
  在此eq室，你可以用 list <武器种类> 来知道有什么你想要的武器，
                  用 list <防具种类> 来知道有什么你想要的护具，
                  用 list <another>  来知道有什么你想要的杂物，
                  用 take + 物品名   来取得你想要的物品，
                  用 put  + 物品名   来存放你不要的物品 .
",
]) );
	set( "cmkroom", 1 );
	set( "clan_room", "新天堂" );
	set( "have_reborn", 1 );
	setup();

	}
