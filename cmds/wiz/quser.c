// command: qwiz ( query wizard list & status)
#include <ansi.h>
 
inherit F_CLEAN_UP;
#define SEE_LEVEL_NUM (wiz_level("(arch)")) /* "(arch)" (levl=5) */
int main(object me, string str)
{
        int i,j=0,n,idle;
        object *user_list,user_location;
        string status1, status2, status3, status4;
 
        user_list=users();
        n=sizeof(user_list);
        write("目前线上player名单如下:\n");
        for(i=0;i<n;i++)
        {
//                if(wizardp(user_list[i]))
//                {
                        user_location = environment(user_list[i]);
                        if(!user_location) continue;
//限制arch以上..可以看到隐形
//              if((!me->visible(user_list[i])&&wiz_level(me)<SEE_LEVEL_NUM)) continue;
//是否idle
                idle=query_idle(user_list[i]);
//其他状态
                if (in_input(user_list[i])) status1=HIY"(INPUT)"NOR;
                        else status1="";
                if ((in_edit(user_list[i]))) status2=HIY"(EDIT)"NOR;
                        else status2="";
                if (idle>60) status3=sprintf(HIY"(IDLE %d M)"NOR,idle/60);
                        else status3="";
j++;
//可看到mud levenumber
//if (wiz_level(me)=SEE_LEVEL_NUM)
        write(sprintf("%2d %12s %s(%s) 位于 %s(%s)\n",
                        j,
                        sprintf("%c[1;%dm",27,31+SECURITY_D->get_wiz_level(user_list[i])%7)+
                        SECURITY_D->get_status(user_list[i])+NOR,
                        user_list[i]->query("name"),
                        user_list[i]->query("id"),
                        (string)user_location->query("short"),
                        (string)file_name(user_location) ));
/*else
//      write(sprintf("%2d %12s %s(%s) 位于 %s(%s)\n",
                        j,
                        SECURITY_D->get_status(user_list[i]),
                        user_list[i]->query("name"),
                        user_list[i]->query("id"),
                        (string)user_location->query("short"),
                        (string)file_name(user_location) ));
*/
 
                if ((status1!="")||(status2!="")||(status3!=""))
write(sprintf("                STATUS: %s%s%s\n",status1,status2,status3));
       //         }
        } // end for
        return 1;
}
 
int help(object me)
{
        write(@HELP
指令格式 : qwiz
此指令可让你(妳)直接查询目前线上的wizard、位置及状态。
HELP);
        return 1;
}
