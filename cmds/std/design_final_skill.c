// design_final_skill.c
//
//                                              Created by Chan
#include <ansi.h>
int done_setskill(string str, string text);

int main(object me, string arg)
{
        int limit,number,value;
        if( !me->query("final/ko_king"))
                return notify_fail("�㲢û���ʸ�ʹ���ռ�ȭ��!!!!\n");
        if( me->query("combat_exp") < 5000000)
                return notify_fail("�����ѧ��Ϊδ�ﵽ��ʹ���ռ�ȭ�Ƶľ���!!\n");
        if( !arg )
                return notify_fail("ָ���ʽ��design_final_skill <����(1~4)>\n");
        value = me->query("functions/final-unarmed/level");
        value=(value / 20)+1;
        if(value > 4)
         value =4;
        number=atoi(arg);
        limit=me->query("final/limit");
        if(value > limit)
         me->add("final/limit",1);
        limit=me->query("final/limit");
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

        this_player()->set("final/action"+str,text);
        write("ok!!!������!!!����show_skill��ָ��Ƿ�������!!!\n");
        write("ע��!!!������Լ�����ʽʱ������\" ����!!!\n");
          return 1;
}

int help( object me )
{
        write(@HELP

��ʽ˵��:design_final_skill <����(1~4)>

��ָ����������������ռ�ȭ�Ƶ���ʽ
����:
     desgin_final_skill 1
     ��ʱ�ͻ�Ҫ��������ʽ�ĳ�����!!!!
     ע�⣺�����������ݲ����� " Ҳ����̫��(����ʮ����!!!),�������ɴ���!!!

HELP    );
        return 1;
}
