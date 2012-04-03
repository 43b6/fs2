// Room : /open/clan/sky-wu-chi/room/room53.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "$HIY$寒风山庄$HIW$--$HIG$绿荫大道$NOR$" );
	set( "long", @LONG
当你清幽的行走于$HIY$寒风山庄$NOR$时，一阵刀气呼萧而过，你被这突乎
其来的刀气吓的胆战心惊，抬头一看，一个匾额写着$HIW$【$HIC$神谷活心流$HIW$】$NOR$
，原来你走到了由绯村剑心与神谷薰所指导的道馆，看到此刀气如此
的锐利，看来挥刀者的功力不斐。
LONG);
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/sky-wu-chi/room/room8",
]) );
	set( "no_clean_up", 0 );
	set( "clan_room", "天道无极" );
	set( "cmkroom", 1 );
	setup();

	}
