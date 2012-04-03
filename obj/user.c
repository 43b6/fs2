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
	set_name("ʹ�������", ({ "user object", "user", "object" }) );
}

void terminal_type(string term_type)
{
	set_temp("terminal_type", term_type);
	message("system", "�ն˻���̬�趨Ϊ " + term_type + "��\n", this_object());
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
	if (query("һ��") < 833360000) {
	  set("һ��", time());
	  set("һ������ʱ��", 0);
	}
	if (time()-query("һ��") > 604800) {	// ����, һ��
	  set("һ��", time());
	  set("һ������ʱ��", 0);
	}
	else
	  add("һ������ʱ��", time()-last_age_set);
  /* if(query("һ������ʱ��") > 234000) {
	  if ((count = (count+1)%20) == 0)
	    write ("С����, ��һ����̫�ò����, �����б�������.\n");
	  else if (query("һ������ʱ��") > 252000) {
	    write ("ͬһ������̫�������, �����б�������.\n");
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
			tell_room( environment(), query("name") + "���߳��� "
				+ NET_DEAD_TIMEOUT/60 + " ���ӣ��Զ��˳�������硣\n");
//���߱�quit by bss
            set_temp("must_be_quit",1);
			command("quit");
			break;
		case DUMP_IDLE:
			tell_object( this_object(), "�Բ������Ѿ��������� " 
				+ idle_time_out/60 + " �����ˣ����´�������\n");
			tell_room( environment(), "һ��紵�����������е�" + query("name")
				+ "��Ϊһ�ѷɻң���ʧ�ˡ�\n", ({this_object()}));
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
	  tell_room(environment(), query("name") + "�����ˡ�\n", this_object());
	  message("sys", 
	  	"��ϵͳ��"+query("name")+"("+query("id")+")�����ˡ�\n",
		filter_array(users(), "wizards", this_object())
	  );
	  // CHANNEL_D->do_channel(this_object(), "sys",
	  //	"��ϵͳ��"+query("name")+"("+query("id")+")�����ˡ�\n");
 
	  log_file("quit", 
                sprintf("%s(%s)�� %s ���ߡ�\n������һ�������� '%s'\n"
			"�������ڵ������� '%s'\n",
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
	tell_object(this_object(), "����������ϡ�\n");
}

int wizards(object who)
{
  return wizardp(who);
}
