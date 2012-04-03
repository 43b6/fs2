/*
 * File    : mudlist_a.c
 * Creator : Pinkfish@Discworld
 *         : Grendel@Tmi-2
 * When    : 93-08-15
 *
 * This file is part of the tmi mudlib.  Please keep this header intact.
 *
 * This protocol is used to send a mudlist in response to mudlist_q.
 */

// Ported to ES2 mudlib by Annihilator@ES2 (06/15/95)

#include <mudlib.h>
#include <net/dns.h>
#include <net/macros.h>

inherit F_CLEAN_UP;

int have_mudlist = 0;

void create() {	seteuid(ROOT_UID); }

// Someone replyed to our query and has sent us their mudlist.
void incoming_request(mapping info)
{
	string *junk;

	if(!ACCESS_CHECK(previous_object())) return;

	// the keys to info are number identifying each mud
	junk = keys(info);
	if(sizeof(junk)) have_mudlist = 1;

	filter_array(junk, "process_list", this_object(), info);
}

int process_list(string idx, mapping info)
{
	string *inf, name, value;
	int j;
	mapping newmud, oldmud;

	if(previous_object() != this_object()) return 0;

	// each entry consists of '|' separated fields
	inf = explode(info[idx], "|");

	// build up the mapping for the individual muds
	newmud = ([ ]);
	j = sizeof(inf);
	while (j--) if (sscanf(inf[j], "%s:%s", name, value) == 2)
		newmud[name] = value;
	if(!newmud["NAME"]) return 0;

	// make sure the name is in the proper form
	name = htonn( newmud["NAME"] );
	while( name[strlen(name)-1] == '.' )
		name = name[ 0..strlen(name)-2 ];
	newmud["ALIAS"] = nntoh(newmud["NAME"]);

	// already know about ourselves
	if (newmud["NAME"] == Mud_name()) return 0;

	// if we have an entry, we update it, otherwise we add the new entry
	oldmud = DNS_MASTER->query_mud_info(name);

	// if it is a static mud we delete the entry
	if(!DNS_MASTER->dns_mudp(name)) oldmud = 0;

	if (!oldmud) DNS_MASTER->set_mud_info(name, newmud);
	else {
		inf = keys(newmud);
		j = sizeof(inf);
		while (j--) oldmud[inf[j]] = newmud[inf[j]];
		DNS_MASTER->set_mud_info(name, oldmud);
	}
	return 0;
}

// these is used by the dns master to find out if we have a mudlist
int clear_db_flag()
{
	if(ACCESS_CHECK(previous_object()))
		have_mudlist = 0;
}

int query_db_flag() { return have_mudlist; }
