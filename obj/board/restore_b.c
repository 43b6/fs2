
inherit BULLETIN_BOARD;
#include <ansi.h>

void create()
{
	set_name( HIR"������"NOR, ({ "unjust death book", "board" }) );
	set( "location", "/open/wiz/restore" );
	set( "board_id", "restore_b" );
	set( "long", "���� bug ��������, �������� post ���� restore" );
	setup();
	set( "capacity", 300 );
}
