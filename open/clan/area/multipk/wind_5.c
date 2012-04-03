// wind_5.c by ACKY

inherit ROOM;
#include <ansi.h>
#include <wind.msg>

void create()
{
	set( "short", HIC"�������¦�"NOR );
	set( "long", (: print_msg :) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );    
        set( "exits", ([ /* sizeof() == 2 */
		"north" : __DIR__"wind_2",
		"south" : __DIR__"wind_8",
		"east"  : __DIR__"wind_6",
		"west"  : __DIR__"wind_4",
	]));
        setup();
}
