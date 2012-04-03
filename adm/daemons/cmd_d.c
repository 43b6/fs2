//
// cmd_d.c
//
// By Annihilator (11/07/94)

mapping search = ([]);
int total_cmds = 0;
string cmp_cmds(string *str,string verb);
void create()
{
        call_out("clean_cmds", 1);
}

// ������г�������д��ָ��...by avgirl 00/10/18
string *no_com=({"wield","unwield","team"
                ,"remove","wear","save","quit"
                ,"wizlist","shutdown"
                ,"reboot","passwd"});

void rehash(string dir)
{
        int i;
        string *cmds;

        if( dir[sizeof(dir)-1]!='/' ) dir += "/";
        cmds = get_dir(dir);
        i = sizeof(cmds);
        while(i--)
                if( !sscanf(cmds[i], "%s.c", cmds[i]) ) {
                        if( i==0 ) cmds = cmds[1..sizeof(cmds)];
                        else if( i==sizeof(cmds) ) cmds = cmds[0..<2];
                        else cmds = cmds[0..i-1] + cmds[i+1..<1];
                }
        if( sizeof(cmds) )
                search[dir] = cmds;
}
string find_commands(string verb, string *path)
{
        int i;

        if( !pointerp(path) ) return 0;

        i = sizeof(path);
        while(i--) {
            if( undefinedp(search[path[i]]) ) rehash(path[i]);
            if( undefinedp(search[path[i]]) ) continue;
            if( member_array(verb, search[path[i]])!=-1 )
                return path[i] + verb;
        }
        return 0;
}
string find_command(string verb, string *path)
{
        object wiz;
        string *str;
        int i;

        if( !pointerp(path) ) return 0;

        i = sizeof(path);
        while(i--) {
            if( undefinedp(search[path[i]]) ) rehash(path[i]);
            if( undefinedp(search[path[i]]) ) continue;
            if( member_array(verb, search[path[i]])!=-1 )
                return path[i] + verb;
        }

        if( sizeof(EMOTE_D->query_emote(verb)) ) return 0;
        i = sizeof(path);

        while(i--) {
            str = search[path[i]];
              if(cmp_cmds(str,verb)){
// ����ĳЩ��Ҫ��д���ִ�...by avgirl 00/10/18
                if( member_array(cmp_cmds(str,verb), no_com)!=-1
                 && member_array(verb, no_com)==-1) return 0;
                return path[i] + cmp_cmds(str,verb);
              }
        }
        return 0;
}

void clean_cmds()
{

        total_cmds = 0;
        call_out("clean_cmds", 1);
}

// by konni
void add_cmds(int i)
{
        total_cmds += i;
}
// by konni
int query_cmds() {       return total_cmds;      }
string cmp_cmds(string *str,string verb)
{
    int i,j,flag;
    string out;

    j=sizeof(verb);
    flag=0;
    for(i=0;i<sizeof(str);i++)
    {
      if(str[i][0..j-1]==verb)
      {
        flag=1;
        break ;
      }
    }
    if(flag)
      return str[i];
    else
      return 0;
}

