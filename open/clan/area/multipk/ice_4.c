// ice_4.c by ACKY

inherit ROOM;
#include <ansi.h>
#include <ice.msg>

void create()
{
	set( "short", HIW"����������"NOR );
	set( "long", (: print_msg :) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );    
        set( "exits", ([ /* sizeof() == 2 */
		"north" : __DIR__"ice_1",
		"east"  : __DIR__"ice_5",
		"south" : __DIR__"ice_7",
	]));
        setup();
}

