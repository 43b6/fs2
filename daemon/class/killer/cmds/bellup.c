// bellup.c
//87.8.18���Ļ��趨������SET��
//����ʹ���������ֻ�����
//TEMPֵ�Ѿ���ʧ������ɸ�ֵ������
    
#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{    
        int bell=me->query("bellicosity");
	int buf;

    buf=(int)(bell/200+1);
// ԭ������� bak.c ��˵��һ����ȻֻҪ�ĵĸ�
// �ܱ����� dodge So ���޲�Ȼ̫���� By Swy
// ��Ϊս��ϵͳ���� attack ���˺����й�
// dodge and defense ���������й�
// ����һ��Ҫ����
    if(buf > 100) buf = 100;
	me->set_temp("bellup_buf",buf);
        if(me->query("bellicosity")<200)
                return notify_fail("�����ϵ�ɱ��������\n");
        if(me->query("force")<buf)
                return notify_fail("�������������\n");
        if(me->query("bellup")==1)
                return notify_fail("���������ڷų�ɱ����\n");
        if(me->query("class")!="killer")
                return notify_fail("����ָ��ֻ��ɱ�ֲ����á�\n");
        me->apply_condition("bell",(int)(bell/500)+5);
        me->add_temp("apply/damage",buf);
        me->add_temp("apply/attack",buf);
        me->add_temp("apply/dodge",buf);
        me->set("bellup",1);
        me->add("force",-buf);
        message_vision(
        HIG "$N��һ�����ų����ϵ�ɱ�����������º�ת��ɿֲ���\n" NOR,me);
        return 1;
}

int help(object me)
{
    write(@HELP

ָ���ʽ��bellup

˵�������ָ��������Խ����ڵ�ɱ���ų���

HELP
);
     return 1;
}

