#include <ansi.h>

inherit ROOM;

void create()
{
	set( "short", "��"HIB"����ʯ��"NOR"��" );
	set( "long", "
		"HIW"[ FS server ]"NOR"

	CPU P3 700  MainBoard  RAM PC-100 128MB ( by cgy )

	HD maxtor 8.4G ( by mad )

	VGA Card ( by perth )

	Case (12/23/2001)

	Power SevenTeam 250w (09/03/2001)

	Network Card (09/03/2001)

	CPU Fan (09/03/2001)

	Keyboard ( by del )

" );
	set( "no_fight", 1 );
	set( "exits", ([
		"east" : "/open/wiz/donate",
"west" : "/open/wiz/donate_4",
	]) );

	setup();
}
