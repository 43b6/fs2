#include <ansi.h>
inherit F_CLEAN_UP;
void create()
{
        seteuid(getuid());
}
int main(object me,string arg)
{
        string *idlist,check_id,userid,display;
        int i,j,jflag,id_long;

        if(!arg)
                return notify_fail("命令格式:check_death <玩家id>。\n");
        userid=arg;
        id_long=sizeof(userid);
        display="";
        jflag=0;
        idlist=explode(read_file("/open/death/death_record"),"\n");
        for(i=0;i<sizeof(idlist);i++){
        check_id=idlist[i];
          if(check_id[0..(id_long-1)]==userid){
          display+=idlist[i]+"\n";
          jflag=1;
          }
        }
        if(jflag)
                write(display);
        else
                write("没有你要找的人!!!("+userid+")没有死过吧!!!!\n");

        return 1;
}
