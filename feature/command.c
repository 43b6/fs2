// command.c ���� by babe

#include <login.h>
#include <ansi.h>
#include <command.h>
#include <dbase.h>
#include <origin.h>

// Let command path be static, thus we can make sure no one can get command
// path directly from restore_object().
static string *path;

// Leave this to allow other objects can search your commands such as
// help, which...
string find_command( string verb )
{
	return (string)COMMAND_D->find_command( verb, path );
}

int do_command( string cmd )
{
	string  verb, arg, cmd1;
	int     repeat = 0;

#ifdef PROFILE_COMMANDS
        int mem, utime, stime;
        mapping info;

        mem = memory_info();
        info = rusage();
        utime = info["utime"];
        stime = info["stime"];
#endif

	if( !cmd || cmd=="" )
		return 0;
	if( sscanf( cmd, "%s %s", verb, arg ) != 2 )
		verb = cmd;

	// ���Ǹ��ظ������ͬ������﷨�õ�, ��: 5 e �������ʽ
	if( sscanf( verb, "%d", repeat ) == 1 )
		if(!arg)
			return 0;
		else {
			cmd = arg;
			if( sscanf( cmd, "%s %s", verb, arg ) != 2 )
				verb = arg;
                        // ���ǲ����� �ظ� do �Ķ���, �����Ļ�, ���һ�ο�����̫��������
                        if( verb[0..2] == "do ")
                                return 0;
                         if( verb[0..3]=="team" )
                         return 0;
                        if( repeat > 100 )
                        	repeat = 100;
                        else if( repeat < 0 ) repeat = 0;
                        // verb = this_object()->replace_alias (verb);
                }
        // ��·, �� east, s, su, southup...etc..
	if( !arg && GO_CMD->main( this_object(), verb, repeat ) )
		;
	// ������ channel ������
	else if( CHANNEL_D->do_channel( this_object(), verb, arg ) )
                ;
        //  cmds/*
	else if( stringp( cmd1 = find_command(verb) ) &&
		cmd1->main( this_object(), arg, repeat ) )
		;
        // ������ emote
        else if( EMOTE_D->do_emote( this_object(), verb, arg ) )
                ;
        else return 0;

#ifdef PROFILE_COMMANDS
        info = rusage();
        PROFILE_D->log_command(verb, memory_info() - mem, info["stime"] - stime,
        info["utime"] - utime);
#endif
        return 1;
}

// This is the add_action hook handling movement, commands, emotes and
// channels. Optimization is needed.
nomask int command_hook(string arg)
{
        string  verb;

        verb = query_verb();

        if(verb) {
                if(arg && arg != "")
                        return do_command(verb+" "+arg);
                else return do_command(verb);
        }
        else return 0;
}

nomask void set_path(string *p)
{
        path = p;
}

nomask void add_path(string p)
{
        if( origin()==ORIGIN_CALL_OTHER
        &&      geteuid(previous_object())!=ROOT_UID
        &&      geteuid(previous_object())!=geteuid(this_object()) )
                return;

        if( member_array(p, path) < 0 ) path += ({ p });
}

string *query_path() { return path; }
mixed *query_commands() { return commands(); }

int force_me(string cmd)
{
        if( geteuid(previous_object()) != ROOT_UID )
                return 0;
        return command( this_object()->process_input(cmd) );
}

void enable_player()
{
        if(!this_object()) return ;
        if( stringp(query("id")) ) set_living_name(query("id"));
        else set_living_name(query("name"));

        enable_commands();
        add_action("command_hook", "", 1);

        switch( wizhood(this_object()) ) {
        case "(manager)":
        case "(admin)":
                set_path(ADM_PATH);
                enable_wizard();
                break;
        case "(arch)":
                set_path(ARCH_PATH);
                enable_wizard();
                break;
        case "(wizard)":
        case "(guest)":
                set_path(WIZ_PATH);
                enable_wizard();
                break;
        case "(apprentice)":
                set_path(APR_PATH);
                enable_wizard();
                break;
        case "(immortal)":
                set_path(IMM_PATH);
                enable_wizard();
                break;
/*
        case "(idle)":
        case "(qcer)":
                set_path(IDLE_PATH);
                enable_wizard();
                break;
  */
        default:
                // �� npc Ҳ�� player һ��...
                // if( userp(this_object()) ) set_path(PLR_PATH);
                // else set_path(NPC_PATH);
                set_path(PLR_PATH);
        }
}

void disable_player(string type)
{
        if( geteuid(previous_object())!=ROOT_UID
        &&  previous_object()!=this_object()) return;

        set("disable_type", type);
        disable_commands();
}
