// ����ɱ�� by swy
#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;
int main(object me, string arg)
{
        int i;
        int be=me->query("bellicosity");
if(
me->query("id")=="sirius")
return notify_fail("û������ָ�\n");
        if( !arg ||  !sscanf(arg, "%d", i) )
        return notify_fail("ָ���ʽ��cmd killup <ɱ������>\n");
        if(me->query_skill_mapped("force")=="fireforce")
        return notify_fail("ֻ���������ڹ���������ɱ����\n");
        if( be+i > 4000)
        return notify_fail("����Ҫ������ɱ����ԭɱ���ѹ�4000��\n");
        if( i*2 > me->query("force") )
        return notify_fail("�������������ѹ��ɱ����\n");
        if( i <= 0 )
        return notify_fail("������Ҫ����һ�㡣\n");
        if( me->query_temp("killup")==1 )
        return notify_fail("�������˹��С�\n");
        me->add("force",-i);
        message_vision(HIC"$N���������ڹ���ͼ����ɱ����\n"NOR,me);
        me->start_call_out((:call_other, __FILE__, "bell_change",me,i:),2);
        me->set_temp("killup",1);
        return 1;
}
void bell_change(object me,int i)
{
    me->add("bellicosity",i);
    message_vision(YEL"$N��ɱ��������"+chinese_number(i)+"�㡣\n"NOR,me);
    me->delete_temp("killup");
    return ;
}

int help(object me)
{
    write(@HELP
 
ָ���ʽ�� cmd killup <ɱ��ֵ>��
 
˵�������ָ���������������תɱ��,������Ϊ4000��
      ��: cmd killup 10  ��ʮ��
 
HELP
);
     return 1;
}
