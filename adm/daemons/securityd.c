//  securityd.c

#include <login.h>

// By Annihilator@Eastern.Stories (11/25/94)

// This is the "effective" access status compare to the "status" property
// in login object that this mapping determine wizards' access rights
// directly. It is important to make the "status" property matches this
// mapping for wizards higher than regular wizard such as sage, arch and
// admin. For thoese users whose name doesnot appear in this mapping, they
// are divided into three groups (wizard),(player) and (object) using
// wizardp() and interactive() efun.
// The parenthesis is nessessary to prevend players naming themself "admin"
// to hack the security system.
//
// 01/14/95 Annihilator - wiz_status are defined outside this daemon in the
//                        WIZLIST file.

private mapping wiz_status;
private mapping wiz_boss;

private string *wiz_levels = ({
        "(player)",
        "(immortal)",
        "(apprentice)",
        "(wizard)",
        "(arch)",
        "(guest)",
        "(admin)",
        "(manager)"
});

// A valid write attempt must pass 2 checks: your uid or status must not be
// "excluded" and must be "trusted" on that directory in order to write in
// that directory. The directories containing the file is searched backward
// from the current directory to root. And exclude is checked prior than
// trusted.

// ���ڵ��µ���������д��Ȩ��, ����������Ӧ���ж�д�����������
private mapping trusted_write = ([
        "/"             :   ({ "(manager)",  "(admin)" }),
        "ftp/upload"    :   ({ "(wizard)", "(arch)" }),
        "u"             :   ({ "(arch)" }),
        "daemon/skill"  :   ({ "(arch)"}),
        "data"          :   ({ "(admin)" }),
         "data/autoload/swordsman"  : ({"appo"}),    
        "data/autoload/open-area"  : ({"neverend"}),
        "doc"           :   ({ "(arch)" }),
        "include"       :   ({ "(arch)" }),
        "obj"           :   ({ "(arch)" }),
        "std"           :   ({ "(arch)" }),
        "cmds"          :   ({ "(admin)" }),
        "open"          :   ({ "(arch)" }),
        "record"        :   ({ "(arch)" }),
        "adm"           :   ({ "(admin)" }),
        "daemon"        :   ({ "(arch)" }),
]);

private mapping trusted_read = ([
        "/" : ({ "(manager)", "(admin)" }),
        "d" : ({ "(arch)","(wizard)"}),
        "daemon" : ({ "(arch)" }),
        "doc" : ({ "(arch)","(wizard)","(apprentice)","(immortal)" }),
        "ftp" : ({ "(arch)","(wizard)" }),
        "include" : ({ "(arch)" }),
        "log" : ({ "(arch)" }),
        "nets" : ({ "(arch)" }),
        "obj" : ({ "(arch)" }),
        "open" : ({ "(arch)","(wizard)" }),
        "player" : ({ "(arch)" }),
        "record" : ({ "(arch)" }),
]);

//  �޶�ĳЩ�ȼ�����ʦ�Ķ�ȡȨ
private mapping exclude_read = ([
        "adm"         :       ({ "(immortal)","(apprentice)","(wizard)","(arch)","(guest)" }),
        "bin"         :       ({ "(immortal)","(apprentice)","(wizard)","(arch)","(guest)" }),
        "data"        :       ({ "(immortal)","(apprentice)","(wizard)","(arch)","(guest)"}),
        "log"         :       ({ "(immortal)","(apprentice)","(wizard)","(guest)"}),
        "obj"         :       ({ "(immortal)" }),
        "cmds"        :       ({ "(immortal)","(apprentice)","(wizard)","(arch)","(guest)"}),
        "feature"     :       ({ "(immortal)","(apprentice)","(wizard)","(arch)","(guest)" }),
        // immortal ֻҪר�Ķ��ļ�������
        "doc"         :       ({ }),
// �������µ�������� adm ���µ� wiz ������ wear eq ���Ըĳ�
// ֻ���� immortal by swy
"std" : ({"(immortal)"}),
        "nets"         :       ({"(immortal)","(apprentice)","(wizard)","(guest)"}),
        "include"         :       ({"(immortal)","(apprentice)","(wizard)","(guest)","(arch)"}),
//        "u"           :       ({ "(immortal)","(apprentice)","(wizard)","(guest)" }),
        "open"        :       ({ "(immortal)", "(apprentice)","(guest)" }),
        "daemon"      :       ({ "(immortal)","(apprentice)", "(wizard)","(guest)" }),
        "d"           :       ({ "(immortal)","(apprentice)", "(wizard)","(guest)" }),
        "record"      :       ({ "(immortal)","(apprentice)", "(wizard)","(guest)" }),
]);


int read_wiz_boss()
{
        string *wizlist, wiz_name, boss;
        int     i;

        wizlist = explode(read_file(WIZBOSS), "\n");
        wiz_boss = allocate_mapping(sizeof(wizlist));
        for(i=0; i<sizeof(wizlist); i++) {
                if( wizlist[i][0]=='#'
                || sscanf(wizlist[i], "%s %s", wiz_name, boss)!=2 ) continue;
                wiz_boss[wiz_name] = boss;
        }
}

void create()
{
        string *wizlist, wiz_name, wiz_level, boss;
        int i;

//      set_name("Ȩ�޵�", ({"securityd"}));
        wizlist = explode(read_file(WIZLIST), "\n");
        wiz_status = allocate_mapping(sizeof(wizlist));
        for(i=0; i<sizeof(wizlist); i++) {
                if( wizlist[i][0]=='#'
                || sscanf(wizlist[i], "%s %s", wiz_name, wiz_level)!=2 ) continue;
                wiz_status[wiz_name] = wiz_level;
        }

        read_wiz_boss();
}

string *query_wizlist()   { return keys(wiz_status); }

// This function returns the status of an uid.
string get_status(mixed ob)
{
        string euid;

        if( objectp(ob) ) {
                euid = geteuid(ob);
                if( !euid ) euid = getuid(ob);
        }
        else if( stringp(ob) ) euid = ob;

        if( !undefinedp(wiz_status[euid]) ) return wiz_status[euid];
        else return "(player)";
}

int get_wiz_level(mixed ob)
{
        return member_array(get_status(ob), wiz_levels);
}

string get_boss(mixed ob)
{
        string euid;

        if( objectp(ob) ) {
                euid = geteuid(ob);
                if( !euid ) euid = getuid(ob);
        }
        else if( stringp(ob) ) euid = ob;

        if( !undefinedp(wiz_boss[euid]) ) return wiz_boss[euid];
        else return "";
}

int set_boss(mixed ob, string boss)
{
        string uid, *wiz, wizlist;
        int i;

        if( geteuid(previous_object())!= ROOT_UID ) return 0;

//      if( userp(ob) ) uid = getuid(ob);
//      else if(stringp(ob)) uid = ob;
        if(stringp(ob)) uid = ob;
        else return 0;

        if( boss == "(none)" )
        {
                map_delete(wiz_boss, uid);
        }
        else
        {
                wiz_boss[uid] = boss;
        }

        wiz = keys(wiz_boss);
        for(wizlist = "", i=0; i<sizeof(wiz); i++)
                wizlist += wiz[i] + " " + wiz_boss[wiz[i]] + "\n";
        rm(WIZBOSS);
        write_file(WIZBOSS, wizlist);
}

int query_valid_level(string status)
{
        return member_array(status, wiz_levels);
}

int set_status(object me, mixed ob, string status)
{
        string uid, *wiz, wizlist;
        int i;

        if( geteuid(previous_object())!= ROOT_UID ) return 0;

//      if( userp(ob) ) uid = getuid(ob);
//      else if(stringp(ob)) uid = ob;
        if(stringp(ob)) uid = ob;
        else return 0;

//      if( wiz_status[uid] && wiz_boss[uid] && wiz_boss[uid]!=me->query("id") && get_status(me->query("id"))!="admin")
//              return 0;

        if( status == "(player)" )
        {
                map_delete(wiz_status, uid);
                map_delete(wiz_boss, uid);
        }
        else
        {
                wiz_status[uid] = status;
                wiz_boss[uid] = me->query("id");
        }

        wiz = keys(wiz_status);
        for(wizlist = "", i=0; i<sizeof(wiz); i++)
                wizlist += wiz[i] + " " + wiz_status[wiz[i]] + "\n";
        rm(WIZLIST);
        write_file(WIZLIST, wizlist);

        wiz = keys(wiz_boss);
        for(wizlist = "", i=0; i<sizeof(wiz); i++)
                wizlist += wiz[i] + " " + wiz_boss[wiz[i]] + "\n";
        rm(WIZBOSS);
        write_file(WIZBOSS, wizlist);

        log_file( "static/promotion", capitalize(uid)
         + " become a " + status + " by " + me->query("id")
         + " on " + ctime(time()) + "\n" );
        return 1;
}

int set_player(string name)
{
        string uid, *wiz, wizlist;
        int i;

        if( geteuid(previous_object())!= ROOT_UID ) return 0;

        else if(stringp(name))  uid = name;
        else return 0;

        map_delete(wiz_boss, uid);
        map_delete(wiz_status, uid);
        wiz = keys(wiz_status);
        for(wizlist = "", i=0; i<sizeof(wiz); i++)
                wizlist += wiz[i] + " " + wiz_status[wiz[i]] + "\n";
        rm(WIZLIST);
        write_file(WIZLIST, wizlist);

        wiz = keys(wiz_boss);
        for(wizlist = "", i=0; i<sizeof(wiz); i++)
                wizlist += wiz[i] + " " + wiz_boss[wiz[i]] + "\n";
        rm(WIZBOSS);
        write_file(WIZBOSS, wizlist);

        log_file( "static/promotion", capitalize(uid)
         + " become a (player) by " + previous_object()->id()
         + " on " + ctime(time()) + "\n" );
        return 1;
}

string *get_wizlist() { return keys(wiz_status); }

// valid_write - called by the master object to determine whether if an user
//               is allowed to write on a certain file.
// NOTE:
//     The argument user should be an object according to the source code
// of driver. However, it is a mixed type in the released docs. We assume
// it is an object in normal case here and issue an error if it was not
// an object.                                                                                           - Annihilator

int valid_write(string file, mixed user, string func)
{
        string euid, status, *path, dir;
        int i;

        if( !objectp(user) )
                error("SECURITYD->valid_write: user �Ĳ�������.\n");

        euid = geteuid(user);
          if( sscanf(file,LOG_DIR + "%*s") )
            {
             if(find_player(euid)) return 0;
                else return 1;
             }
/*
        if( file == "/adm/daemons/securityd.c" )
          return 0;
*/
        // Let user save their save file
        if( func=="save_object" ) {
              if( (sscanf(base_name(user), "/obj/%*s")
                || sscanf(base_name(user), "/adm/%*s") )
                &&  (sscanf(file, "/data/%*s")
                ||   sscanf(file, "/u/%*s")    )
                &&      file == (string)user->query_save_file() +
                        __SAVE_EXTENSION__ )
                        return 1;

                else
                log_file("log", "save_object in securityd.c return 0\n");
        }

        // Get the euid and status of the user.
        euid = geteuid(user);
        if( !euid ) return 0;
        status = get_status(user);

        if( euid==ROOT_UID ) return 1;

        // �Լ��ĸ�Ŀ¼
        if( sscanf(file, "/u/" + euid[0..0] + "/" + euid + "/%*s") )
                return 1;

        path = explode(file, "/");

        // And then check if we are trusted in one of the directories containing
        // the file.
        if( member_array(euid, trusted_write["/"]) != -1 ) return 1;
        if( member_array(status, trusted_write["/"]) != -1 ) return 1;

        // Check if we are excluded in one of the directories containing the file.

        for(i=sizeof(path)-1; i>=0; i--) {
                dir = implode(path[0..i], "/");
                if( undefinedp(trusted_write[dir]) ) continue;
                if( member_array(euid, trusted_write[dir])!=-1 ) return 1;
                if( member_array(status, trusted_write[dir])!=-1 ) return 1;
        }

        return 0;
}

int valid_read (string file, mixed user, string func)
{
        object ob;
        string euid, status, *path, dir;
        int i;

        if( !objectp(user) ) return 1;

        if( sscanf(file, LOG_DIR + "%*s") && func=="read_file" ) return 1;

        // Ҫȡ����ҵ�������ϵ�Ȼ��׼���
        if( func=="restore_object" ) {
                if( sscanf(base_name(user), "/obj/%*s")
                &&      sscanf(file, "/data/%*s")
                &&      file == (string)user->query_save_file() +
                        __SAVE_EXTENSION__ )
                        return 1;
        }
/*
        // Let user save their save file
        if( func=="restore_object" ) {
                if( sscanf(base_name(user), "/obj/%*s")
                &&      sscanf(file, "/data/%*s")
                &&      file == (string)user->query_save_file() )
                        return 1;
        }
*/

        // Get the euid and status of the user.
        euid = geteuid(user);
        if( !euid ) return 0; // û euid ��ô���Զ�д��         Arthur

/*      �������ƺ��ǲ���Ҫ��                    Arthur
        if (!ob=find_player(euid)) return 1;
        euid=ob->query("id");
*/
        if( euid==ROOT_UID ) return 1;

        status = get_status(user);

        // �Լ��ĸ�Ŀ¼
        if( sscanf(file, "/u/" + euid[0..0] + "/" + euid + "/%*s") )
                return 1;

        path = explode(file, "/");

        //��д��Ȼ���ܶ�����by bss
        if( member_array(euid, trusted_write["/"]) != -1 ) return 1;
        if( member_array(status, trusted_write["/"]) != -1 ) return 1;
        for(i=sizeof(path)-1; i>=0; i--) {
                dir = implode(path[0..i], "/");
                if( undefinedp(trusted_write[dir]) ) continue;
                if( member_array(euid, trusted_write[dir])!=-1 ) return 1;
                if( member_array(status, trusted_write[dir])!=-1 ) return 1;
        }
        path = explode(file, "/");

        // �Ƿ���ұ���Ϊ�ܾ�������, ����, ���� 0
        for(i=sizeof(path)-1; i>=0; i--) {
                dir = implode(path[0..i], "/");
                if( undefinedp(exclude_read[dir]) ) continue;
                if( member_array(euid, exclude_read[dir])!=-1 ) return 0;
                if( member_array(status, exclude_read[dir])!=-1 ) return 0;
        }

        // �� valid_write һ����д��, �Ը�Ŀ¼˭ӵ�о��ԵĶ�ȡȨ
        // �������аᵽ���, ��ÿ������ÿ��ĵ���               Arthur
        if( member_array(euid, trusted_read["/"])!=-1 ) return 1;
        if( member_array(status, trusted_read["/"])!=-1 ) return 1;
        // �Ƿ����������������������. ����, ���� 1

        for(i=sizeof(path)-1; i>=0; i--) {
                dir = implode(path[0..i], "/");
                if( undefinedp(trusted_read[dir]) ) continue;
                if( member_array(euid, trusted_read[dir])!=-1 ) return 1;
                if( member_array(status, trusted_read[dir])!=-1 ) return 1;
        }

        return 1;
}

int valid_seteuid( object ob, string uid )
{
        if( uid==0 ) return 1;
        if( uid==getuid(ob) ) return 1;
        if( getuid(ob)==ROOT_UID ) return 1;
        if( sscanf(file_name(ob), "/adm/%*s") ) return 1;
        if( wiz_status[uid] != "(manager)"
        &&      wiz_status[getuid(ob)] == "(manager)" )
                return 1;
        if( wiz_status[uid] != "(admin)"
        &&      wiz_status[getuid(ob)] == "(admin)" )
                return 1;
        return 0;
}
