// heal.c
#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;
void remove_effect(object me, int amount);
int exert(object me,object target)
{
        int skill;
        if(me->query_skill("godcure")<60)
        return notify_fail("���ҽ��̫�����ҽ���嶾��\n");
        if(!target->query_condition("five_poison"))
        return notify_fail("û�ж����˲���Ҫ�ⶾ��\n");
        if( me->is_fighting() )
        return notify_fail("ս���в��ܽⶾ��\n");
        if((int)me->query("gin")<30||(int)me->query("sen")<30)
        return notify_fail("��ľ����񲻹������ܽⶾ��\n");
        if(me!=target)
        message_vision(
        HIW+"$N��$n���¼���ҩ����$n���嶾�κ��ˡ�\n" NOR,me,target);
        else message_vision( HIW "$N���Լ����¼���ҩ�裬���Լ����嶾�κ��ˡ�\n"NOR,me);
        target->apply_condition("five_poison",0);
        me->add("gin",-30);
        me->add("sen",-30);
        return 1;
}


