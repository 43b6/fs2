// fire_3.c by ACKY

inherit ROOM;
#include <ansi.h>
#include <fire.msg>

void create()
{
	set( "short", HIR"������Ȧ�"NOR );
	set( "long", (: print_msg :) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );    
        set( "exits", ([ /* sizeof() == 2 */
		"west"  : __DIR__"fire_2",
		"south" : __DIR__"fire_6",
	]));
        setup();
}

