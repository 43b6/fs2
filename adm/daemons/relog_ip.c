#define RELOG_IP "/adm/etc/relog_ip"
#include <ansi.h>
inherit F_DBASE;
void create()
{
  seteuid(getuid());
  set_temp("channel_id","���߾���");
}
void add_ip(string arg)
{
    write_file(RELOG_IP, arg+"\n");
    return ;
}
void del_ip(string arg)
{
    string *iplist,banned_ip,check_ip;
    int i,stat,time;

    CHANNEL_D->do_channel(this_object(),"sys",
      sprintf(HIY"%s ��Ϊ��������̫��ζ���ban ip������������!!"NOR,arg)
    );
    banned_ip="";
    stat=0;
    iplist=explode(read_file(RELOG_IP),"\n");
    for(i=0;i<sizeof(iplist);i++){
      if(sscanf(iplist[i],"%s:%d",check_ip,time)!=2){
        banned_ip+=iplist[i]+"\n";
        continue;
      }
      if(arg!=check_ip)
        banned_ip+=iplist[i]+"\n";
      else
        stat=1;
    }
    if(!stat) return ;
    rm(RELOG_IP);
    write_file(RELOG_IP, banned_ip);
    return ;
}
int check_ip(object user)
{
    string *iplist,check_ip,userip;
    int i,flag,time;

    userip=query_ip_number(user);
    flag=0;
    iplist=explode(read_file(RELOG_IP),"\n");
    for(i=0;i<sizeof(iplist);i++){
      if(sscanf(iplist[i],"%s:%d",check_ip,time)!=2) continue;
      if(userip==check_ip){
        if(time > time())
          flag=time;
        else{
          del_ip(userip);
          flag=0;
        }
      }
    }
    return flag;
}
