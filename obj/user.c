// user.c

#include <origin.h>
#include <user.h>

inherit CHARACTER;
inherit F_ALIAS;
inherit F_EDIT;
inherit F_MESSAGE;
inherit F_MORE;
inherit F_AUTOLOAD;

static int last_age_set, count=0;

void create()
{
	::create();
	set_name("使用者物件", ({ "user object", "user", "object" }) );
}

void terminal_type(string term_type)
{
	set_temp("terminal_type", term_type);
	message("system", "终端机型态设定为 " + term_type + "。\n", this_object());
}

void reset()
{
//	if( origin()!=ORIGIN_DRIVER ) return;

	if( (int)query("potential") - (int)query("learned_points") < 100 )
		add("potential", 1);
}

// This is used by F_SAVE to determine the filename to save our data.
string query_save_file()
{
	string id;

    if(this_object()->query("bss/cp_user"))
    id=this_object()->query("id");
    else
	id = geteuid();
	if( !id ) id = getuid();
	if( !stringp(id) ) return 0;
	return sprintf(DATA_DIR "user/%c/%s", id[0], id);
}

int save()
{
	int res;

	save_autoload();
	res = ::save();
	clean_up_autoload();		// To save memory
	return res;
}

// This function updates player's age, called by heart_beat()
void update_age()
{
	if( !last_age_set ) last_age_set = time();
	add("mud_age", time() - last_age_set);
	set("age", 14+(int)query("age_modify")+((int)query("mud_age")/86400));
	if (query("一周") < 833360000) {
	  set("一周", time());
	  set("一周上线时间", 0);
	}
	if (time()-query("一周") > 604800) {	// 七天, 一周
	  set("一周", time());
	  set("一周上线时间", 0);
	}
	else
	  add("一周上线时间", time()-last_age_set);
  /* if(query("一周上线时间") > 234000) {
	  if ((count = (count+1)%20) == 0)
	    write ("小朋友, 你一周玩太久不好喔, 请自行保重身体.\n");
	  else if (query("一周上线时间") > 252000) {
	    write ("同一周上线太常不好喔, 请自行保重身体.\n");
	    if (!wizardp(this_object()))
	      command("quit");
      }
    }  */ 
	last_age_set = time();
}

void setup()
{
	// We want set age first before new player got initialized with
	// random age.
	update_age();

	::setup();
	restore_autoload();
}

private void user_dump(int type, int idle_time_out)
{
	switch(type) {
		case DUMP_NET_DEAD:
			tell_room( environment(), query("name") + "断线超过 "
				+ NET_DEAD_TIMEOUT/60 + " 分钟，自动退出这个世界。\n");
//断线必quit by bss
            set_temp("must_be_quit",1);
			command("quit");
			break;
		case DUMP_IDLE:
			tell_object( this_object(), "对不起，您已经发呆超过 " 
				+ idle_time_out/60 + " 分钟了，请下次再来。\n");
			tell_room( environment(), "一阵风吹来，将发呆中的" + query("name")
				+ "化为一堆飞灰，消失了。\n", ({this_object()}));
            set_temp("must_be_quit",1);
			command("quit");
			break;
		default: return;
	}
}

// net_dead: called by the gamedriver when an interactive player loses
// hir network connection to the mud.
private void net_dead()
{
	object link_ob;
	string	*channels;
	int	i;

	set_heart_beat(0);
	if( objectp(link_ob = query_temp("link_ob")) ) {
		link_ob->save();
		destruct(link_ob);
	}

	set_temp("netdead", 1);
	if( userp(this_object()) ) {
	  call_out("user_dump", NET_DEAD_TIMEOUT, DUMP_NET_DEAD);
	  tell_room(environment(), query("name") + "断线了。\n", this_object());
	  message("sys", 
	  	"【系统】"+query("name")+"("+query("id")+")断线了。\n",
		filter_array(users(), "wizards", this_object())
	  );
	  // CHANNEL_D->do_channel(this_object(), "sys",
	  //	"【系统】"+query("name")+"("+query("id")+")断线了。\n");
 
	  log_file("quit", 
                sprintf("%s(%s)于 %s 断线。\n他的上一个命令是 '%s'\n"
			"他的现在的命令是 '%s'\n",
                  query("name"),
                  query("id"),
                  ctime(time()),
                  query_temp("last_input"), query_temp("current_input"))
	  );
	  save();
	}
	else {
		command("quit");
	}
}

// reconnect: called by the LOGIN_D when a netdead player reconnects.
void reconnect()
{
	set_heart_beat(1);
	set_temp("netdead",0);
	remove_call_out("user_dump");
	tell_object(this_object(), "重新连线完毕。\n");
}

int wizards(object who)
{
  return wizardp(who);
}
