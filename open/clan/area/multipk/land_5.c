// land_5.c by ACKY

inherit ROOM;
#include <ansi.h>
#include <land.msg>

void create()
{
	set( "short", HIG"������ԭ��"NOR );
	set( "long", (: print_msg :) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );    
        set( "exits", ([ /* sizeof() == 2 */
		"north" : __DIR__"land_2",
		"south" : __DIR__"land_8",
		"east"  : __DIR__"land_6",
		"west"  : __DIR__"land_4",
	]));
        setup();
}

