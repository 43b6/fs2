#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;
int skill;
void remove_effect(object me, int amount);
int exert(object me, object target)
{
skill=this_player()->query("functions/white/level");
        if(userp(me))
        return notify_fail("����� mixforce��\n");
        if( (string)me->query_skill_mapped("force")!= "superforce")
         return notify_fail("�����̱���ʹ�û����ķ����ܷ���������\n");
        if( target != me ) return notify_fail("��ֻ���û����ķ���������������\n");
        if (me->query_skill("superforce",1) < 20)
            return notify_fail("��Ļ����ķ��ȼ����㣬��Ҫ 20 ����\n");
        if (me->query("force") < skill*5)
            return notify_fail("��������������޷���������̵Ļ����ھ���\n");
        if(me->query_temp("white")) return notify_fail("���Ѿ������ˡ�\n");
        if(me->query_temp("purple")) return notify_fail("���Ѿ�������[32m���Ǻ��ķ�[0m�ˡ�\n");
        if(me->query_temp("nine")) return notify_fail("���Ѿ�������[35m����ϼ�ķ�[0m�ˡ�\n");
        if(me->query_temp("gen")) return notify_fail("���Ѿ���ʹ��[35m�������ķ�[0m�ˡ�\n");
        if(me->query_temp("ice")) return notify_fail("���Ѿ�����ת[37m��ѩ���ķ�[0m�ˡ�\n");
        if(me->query_temp("black")) return notify_fail("���Ѿ�������[30m������[0m�ˡ�\n");
        if(me->query_temp("bluesea")) return notify_fail("���Ѿ��ڴ���[34m��׺�[0m�ھ��ˡ�\n");
        if(me->query_temp("goldsun")) return notify_fail("���Ѿ���ǿ��[33m����[0m�ھ��ˡ�\n");
        if(me->query_temp("blood")) return notify_fail("���Ѿ��ڴ߹�[31mѪ��[0m�ھ��ˡ�\n");
        if(me->query_temp("green")) return notify_fail("���Ѿ�������[32m������[0m�ھ��ˡ�\n");

        me->set_temp("white",1);
        message_vision(
        HIC "$N��������ķ���һ���"HIW"������"HIC"������ӿ������������ھ��γ�����������!!\n" NOR,me);

        me->add_temp("apply/force", 1);
        me->add_temp("apply/move", 1);
        me->add_temp("apply/stick", 1);
        me->add_temp("apply/parry", 1);
        me->add_temp("apply/dodge", 1);
        me->add_temp("apply/unarmed", 1);
        call_out("remove_effect", skill, me);
        if( me->is_fighting() ) me->start_busy(1);
        return 1;
}

void remove_effect(object me, int amount)
{
        if(!me) return ;
        me->set_temp("white",0);
        me->add_temp("apply/force", -1);
        me->add_temp("apply/move", -1);
        me->add_temp("apply/stick", -1);
        me->add_temp("apply/parry", -1);
        me->add_temp("apply/dodge", -1);
        me->add_temp("apply/unarmed", -1);
        tell_object(me,"�����ϵİ���������������������,����Ҳ��֮��ɢ��\n");
        if(skill<50)
        function_improved("white",random(700));
}
