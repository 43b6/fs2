//cbipd.c ���ڼ��ʹ����ip�Ƿ񱻽��� by bss
#include <login.h>
#define  RECORD         "/u/b/bss/record"
void add_record(string arg);
void record(string arg,string file);
void create() { seteuid(ROOT_UID);}
int check_ip(object user)
{
        string *iplist,check_ip,userip,record;
        int i,flag,j,jj,jflag;

        userip=query_ip_number(user);
        flag=0;
        jj=0;
        jflag=0;
        iplist=explode(read_file(BANNED_IP),"\n");
        for(i=0;i<sizeof(iplist);i++){
        check_ip=iplist[i];
        for (j=0;j<sizeof(check_ip);j++){
          if(check_ip[j]=='*'){
          jj=j;
          jflag=1;
          }
        }
        if(jflag){
           jflag=0;
          if(userip[0..jj-2]==check_ip[0..jj-2]) flag=1;
        }
        else{
        if(userip==iplist[i]) flag=1;
        }
        }
        return flag;
}
void add_ip(string arg)
{
        string  *iplist, banned_ip;
        int i;

        banned_ip="";
        iplist=explode(read_file(BANNED_IP),"\n");
        for(i=0;i<sizeof(iplist);i++){
        if(arg==iplist[i]) return ;
        banned_ip+=iplist[i]+"\n";
        }
        banned_ip+=arg+"\n";
        rm(BANNED_IP);
        write_file(BANNED_IP, banned_ip);
        write(arg+" �Ѿ�˳���ļ�����banned_ip֮��!!\n");
        return ;
}
void del_ip(string arg)
{
        string *iplist,banned_ip;
        int i,stat;

        banned_ip="";
        stat=0;
        iplist=explode(read_file(BANNED_IP),"\n");
        for(i=0;i<sizeof(iplist);i++){
        if(arg!=iplist[i]){
                banned_ip+=iplist[i]+"\n";
        }
        if(arg==iplist[i])
                stat=1;
        }
        if(!stat)
        {
        write("��banned_ip�в�����������Ҫɾ����ipλ��!!\n");
        return ;
        }
        rm(BANNED_IP);
        write_file(BANNED_IP, banned_ip);
        write(arg+" �Ѿ�˳���Ĵ�banned_ip��ɾ����!!\n");
        return ;
}
void ip_list()
{
        string *iplist,banned_ip;
        int i;

        banned_ip="";
        iplist=explode(read_file(BANNED_IP),"\n");
        for(i=0;i<sizeof(iplist);i++){
                banned_ip+=iplist[i]+"\n";
        }
        printf("%s\n",banned_ip);
        return ;
}
int check(string arg)
{
             string *iplist,check_ip,userip;
         int i,flag,j,jj,jflag;

         userip=arg;
         flag=0;
         jj=0;
         jflag=0;
         iplist=explode(read_file(BANNED_IP),"\n");
         for(i=0;i<sizeof(iplist);i++){
         check_ip=iplist[i];
         for (j=0;j<sizeof(check_ip);j++){
           if(check_ip[j]=='*'){
           printf("%s %s\n",check_ip[0..j],check_ip[0..j-2]);
           jj=j;
           jflag=1;
           }
         }
         if(jflag){
             jflag=0;
          if(userip[0..jj-2]==check_ip[0..jj-2]){
              printf("%s %s\n",userip[0..jj-2],check_ip[0..jj-2]);
              printf("%s %s\n",userip,check_ip);
              flag=1;
                 printf("(%s)\n",check_ip);
               }
         }
         else{
          if(userip==iplist[i]){
             flag=1;
                 printf("%s\n",iplist[i]);
             }
         }
         }
         return flag;
}

void add_record(string arg)
{
        string  *oldlist, newlist;
        int i;

        newlist="";
        oldlist=explode(read_file(RECORD),"\n");
        for(i=0;i<sizeof(oldlist);i++){
        newlist+=oldlist[i]+"\n";
        }
        newlist+=arg+"\n";
        rm(RECORD);
        write_file(RECORD, newlist);
        return ;
}
void record(string arg,string file)
{ 
        int i;
        string dir;
     
        i=sizeof(file)-1;
        while(i--)
          if(file[i]=='/') break;
        dir=file[0..(i-1)];
        if(file_size(dir)!=-2 && file_size(dir)==-1)
          mkdir(dir);    
        write_file(file,arg);
        return;
}
