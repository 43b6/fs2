// thunder_1.c by ACKY

inherit ROOM;
#include <ansi.h>
#include <thunder.msg>

void create()
{
	set( "short", HIY"�dѸ�׷�d"NOR );
	set( "long", (: print_msg :) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );    
        set( "exits", ([ /* sizeof() == 2 */
		"south" : __DIR__"thunder_4",
		"east"  : __DIR__"thunder_2",
	]));
        setup();
}

