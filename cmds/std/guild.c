#include <ansi.h>
inherit F_MORE;
inherit F_CLEAN_UP;
 
int main(object me, string arg)
{
        string *cls,*guild_name;
        mapping master;
        mapping guild;
        int guild_cnt=0;
        int i,j;
        string msg="�� ����ռ�\n";
        seteuid(getuid());
        guild=GUILD_D->query_translate();
        cls=keys(guild);
        for(i=0;i<sizeof(cls);i++)
        {
                if(cls[i]!="none")
                msg+=sprintf("%s",to_chinese(cls[i]));
                else msg+="�� ƽ  �� ��";
                if(sizeof(guild[cls[i]])==0)
                        msg+=sprintf("    Ŀǰû���κ����š�\n");
                else
                {
                        guild_name=keys(guild[cls[i]]);
                        master=guild[cls[i]];
                        if(master[arg])
                        {
                                if(file_size("/doc/guild/"+arg)<=0)
                                        return notify_fail("Ŀǰû��������ɵ�˵����\n");
                                else start_more(read_file("/doc/guild/"+arg));
                                return 1;
                        }
                        for(j=0;j<sizeof(guild_name);j++)
                        {
                                if(j!=0) msg+="            ";
                                msg+=sprintf("    %-16s%-20s\n",guild_name[j],"�������죺"+master[guild_name[j]]);
                                guild_cnt++;
                        }
                }
        }
        msg+="\n ";
        msg+=sprintf("����ռ�Ŀǰ���� %d �����ɡ�\n",guild_cnt);
        msg+=NOR;
        start_more(msg);
        return 1;
}
 
 
int help(object me)
{
        write(@HELP
ָ���ʽ : guild | [��������]
ָ��˵�� :
           ���ָ��������Բ鿴Ŀǰ�м������ɡ�
           ��ָ������������ɲ鿴����˵����
HELP
    );
    return 1;
}
