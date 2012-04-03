// wizlist.c
#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        string *list;
        int my_level, i;

        my_level=wiz_level(me);
        list = sort_array(SECURITY_D->query_wizlist(), 1);
        list = filter_array(list,"filter_wiz",this_object(),my_level);

        write(MUD_NAME + "Ŀǰ�����ϵ�����ع�һ���� "+ sizeof(list)+ " λ\n");
        for(i=0; i<sizeof(list); i++)
        {
                if(list[i]!="bss" || wiz_level(this_player())>6)
                printf("%s\n",list[i]);
        }
        return 1;
}

int filter_wiz(string name,int level)
{
        object ob;
        if(!ob=find_player(name)) return 0;
        return (!ob->query("env/����") || wiz_level(ob) <= level) ;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : wizlist
ָ��˵�� :
           ��ָ�������鿴Ŀǰ����ռ��ܹ��ж��ٸ���ʦ��
HELP
    );
    return 1;
}
