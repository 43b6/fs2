// ice_6.c by ACKY

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
		"north" : __DIR__"ice_3",
		"west"  : __DIR__"ice_5",
		"south" : __DIR__"ice_9",
	]));
        setup();
}

