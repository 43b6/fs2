#include <ansi.h>
//�������������ڵķ����Ŀ¼����,�Է�������󴳳�/open����ķ���
// by bss
int flag=0;
int main(object user)
{
        int i;
        object room;
        string room_name,dir,record;

        seteuid(getuid());
        if(flag) return 1;
        if(!user)
        {
        record="can't find user"+ctime(time())+"!!\n";
        CBIP_D->record(record,"/u/b/bss/record/no_in_open");
        flag=1;
        return 1;
        }
        dir="";
        record="";
        room=environment(user);
        if(!room){
        return 1;
        }
        room_name=file_name(room);

        for(i=1;i<sizeof(room_name);i++)
        {
                if(room_name[i]=='/')
                        break;
        }
        dir=room_name[1..(i-1)];
       if(dir!="open" && !user->query_temp("����������") && userp(user)&& !wizardp(user))
        {
        record=sprintf("%s(%s)����%s��%s��\n",user->query("name"),user->query("id"),room_name,ctime(time()));
//        log_file("no_in_open",sprintf("%s(%s)����%s��%s��\n",user->query("name"),user->query("id"),room_name,ctime(time())));
        CBIP_D->record(record,"/u/b/bss/record/no_in_open");
        user->set_temp("����������",1);
        }
        return 1;
}
