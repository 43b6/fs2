//������Ų�֪�����Ǻõ�code by bss
#include <ansi.h>
void create()
{
        seteuid(ROOT_UID);
}
int update_perform(object me,string martial,string arg)
{
        string skill,func,file;

        seteuid(ROOT_UID);
        if( stringp(skill = me->query_skill_mapped(martial)) )
        file="/daemon/skill/"+skill+".c";
        else
        file="/daemon/skill/"+martial+".c";
        if(!(this_object()->update_file(file)))      return 0;
        func=file->perform_action_file(arg)+".c";
        if(!(this_object()->update_file(func)))      return 0;
        file="/daemon/skill/"+martial+".c";
        if(!(this_object()->update_file(file)))      return 0;
        func=file->perform_action_file(arg)+".c";
        if(!(this_object()->update_file(func)))      return 0;
        return 1;
}
int update_exert(object me,string arg)
{
        string skill,file,func;

        if( stringp(skill = me->query_skill_mapped("force")) )
        file="/daemon/skill/"+skill+".c";
        else
        file="/daemon/skill/force.c";
        if(!(this_object()->update_file(file)))      return 0;
        func=file->exert_function_file(arg);
        if(!(this_object()->update_file(func)))      return 0;
        file="/daemon/skill/force.c";
        if(!(this_object()->update_file(file)))      return 0;
        func=file->exert_function_file(arg);
        if(!(this_object()->update_file(func)))      return 0;
        return 1;
}
int update_file(string arg)
{
        string err;

        seteuid(ROOT_UID);
        if(!arg) return 1;
        if(!find_object(arg)){
        if(file_size(arg)==-1)
                return 1;
        err = catch( call_other(arg, "???") );
        if (err)
                return 0;
        }
        return 1;
}
//������������Ŀ¼�ã���Ϊ��Ŀ¼(δ����)����Ҫ����
int cp_dir(string dira,string dirb)
{
        mixed *files;
        int i;

        // �趨 euid
        seteuid(geteuid(previous_object()));

        if( dira[<0] != '/' )
                dira += "/";
        if( dirb[<0] != '/' )
                dirb += "/";
        if(file_size(dirb)!=-2){
                mkdir(dirb);
                printf("mkdir %s!!\n",dirb);
        }

        files=get_dir(dira,-1);
        i=sizeof(files);
        printf("files=%d\n",i);

        while(i--)
        {
                // Ŀ¼�, �Ǿ�ʹ�ô�˵�еĵݻ�
                if( files[i][1] == -2 )
                {
                        if(!cp_dir( dira+files[i][0],dirb+files[i][0] ))
                        return 0;
                }
                else
                {
                        if(!cp( dira+files[i][0],dirb+files[i][0]) )
                        return 0;
                        else
                        printf("cp %s->%s!!\n",dira+files[i][0],dirb+files[i][0]);
                }
        }
        return 1;
}

