// design_skill.c
//
//                                              Created by Chan
#include <ansi.h>
int done_setskill(string str, string text);

int main(object me, string arg)
{
        int limit,number;
        if( me->query("combat_exp") < 3000000)
                return notify_fail("�����ѧ��Ϊδ�ﵽ�Դ����еľ���!!\n");
       if(!me->query("hero/set")) me->set("hero/set",1);
        if( !arg )
                return notify_fail("ָ���ʽ��design_skill <����(1~8)>\n");
        number=atoi(arg);
        limit=me->query("hero/limit");
        if(number < 1)
                return notify_fail("��ʽ�����������Ŷ!!\n");
        if(number > limit)
                return notify_fail("���������ֵ�����������ķ�Χ��!!!\n");
        write("����˵����$N �����Լ� $n ����з� $l ����з��������Ĳ�λ !!\n");
        write("���磺$N ʹ�����У�һȭ���� $n �� $l�ĵط�!!!!\n");
        me->edit( (: done_setskill,arg :) );
        return 1;
}

int done_setskill(string str,string text)
{

        this_player()->set("hero/action"+str,text);
        write("ok!!!������!!!����show_skill��ָ��Ƿ�������!!!\n");
        write("ע��!!!������Լ�����ʽʱ������\" ����!!!\n");
          return 1;
}

int help( object me )
{
        write(@HELP

��ʽ˵��:design_skill <����(1~8)>

��ָ�������ô��������ս��ʱ����ʹ�ó��Լ�����ʽ��ѶϢ!!!!
����:
     desgin_skill 1
     ��ʱ�ͻ�Ҫ��������ʽ�ĳ�����!!!!
     ���֮��,��set my_skill��ս��ʱ�ͻ��Զ��ó��Լ�����Ƶ���ʽ!!!!
     ע�⣺�����������ݲ����� " Ҳ����̫��(����ʮ����!!!),�������ɴ���!!!

HELP    );
        return 1;
}
