#include <ansi.h>
inherit F_CLEAN_UP;

int help(object me);
int main(object me, string arg)
{
        object who,room;
        string out;

        seteuid(getuid(me));


        if(!arg) return help(me);
        if(me->query("sen") <50) return notify_fail("��֮�������������κεĺ���!!\n");
        printf(HIC"�����֮���������Ѱ%s�����!!\n"NOR,arg);
        who=find_player(arg);
        if(!who)
          who= FINGER_D->acquire_login_ob(arg);
        if(!who)
          return notify_fail("��֮����ش���:�ڿ�����������ƺ�û���������Ĵ���!!\n");
        if(wizardp(who) && !wizardp(me)){
          tell_object(who,sprintf(HIY"��֮���������:%s ������ƺ��������!!\n"NOR,geteuid(me)));
          return notify_fail("��֮����ش���:�ڿ�����������ƺ�û���������Ĵ���!!\n");
        }
        if(find_player(arg))
        tell_object(who,sprintf(HIY"��֮���������:%s ������ƺ��������!!\n"NOR,geteuid(me)));
        printf("
��֮����ش���˵: �ҵ� %s �������
%s �����ֽ���: %s
%s ��һλ %s
",arg,arg,who->query("name"),arg,RANK_D->query_rank(who));
        if(me->query("family/master_id")==arg && find_player(arg)){
          room=environment(who);
          printf("%s(%s) Ŀǰ����%s!!\n",who->query("name"),arg,room->query("short"));
        }
        else if(find_player(arg))
          printf("%s(%s) Ŀǰ�ڿ��������������!!\n",who->query("name"),arg);
        else
          printf("%s(%s) Ŀǰ������Ư���!!\n",who->query("name"),arg); 

        me->add("sen",-20);        
        return 1;
}
 
int help(object me)
{
        write(@HELP
ָ���ʽ : findman id
ָ��˵�� :
           ��������֮����������ҿ����е�����, �������һ�����
           ����񲻹��Ƿ�֮���������������κεĺ�����
HELP
    );
    return 1;
}


