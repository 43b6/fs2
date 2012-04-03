// FORM: ��� by ACKY

#include <ansi.h>

inherit PAL;
inherit F_SAVE;

void create()
{
	set_name( "���", ({"pal"}) );
	restore();
	setup();
	set_name( query("name"), ({query("id")}) );
	if( query("go") )
		set_temp( "go", query("go") );
	set_temp( "roared", 1 );
	set( "no_clean_up", 1 );
	set( "no_exp", 1 );
}

string query_save_file()
{
	string id;

	id = geteuid();
	if( !id )
		id = getuid();
	if( !stringp(id) )
		return "/u/a/acky/record/pal";
	return sprintf( DATA_DIR"pal/%c/%s", id[0], id );
}

void init()
{
	if( !query_heart_beat(this_object()) )
		set_heart_beat(1);
}

