#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;
int skill;
void remove_effect(object me, int amount);
int exert(object me, object target)
{
skill=this_player()->query("functions/ice/level");
        if(userp(me))
        return notify_fail("����� mixforce��\n");
        if( (string)me->query_skill_mapped("force")!= "superforce")
         return notify_fail("��ѩ������ʹ�û����ķ����ܷ���������\n");
        if( target != me ) return notify_fail("��ֻ���û����ķ���������������\n");
        if (me->query_skill("superforce",1) < 50)
            return notify_fail("��Ļ����ķ��ȼ����㣬��Ҫ 50 ����\n");
        if (me->query("force") < skill*5)
            return notify_fail("��������������޷������ѩ���Ļ����ھ���\n");
        if( (int)me->query("max_force") < 600 )
        return notify_fail("���������������,�޷���ȫ���ӳ���ѩ���ۻ���ھ���\n");

        if(me->query_temp("ice")) return notify_fail("���Ѿ������ˡ�\n");
        if(me->query_temp("purple")) return notify_fail("���Ѿ�������[32m���Ǻ��ķ�[0m�ˡ�\n");
        if(me->query_temp("white")) return notify_fail("���Ѿ�������[37m�������ķ�[0m�ˡ�\n");
        if(me->query_temp("nine")) return notify_fail("���Ѿ���ʹ��[35mõ��ϼ�ķ�[0m�ˡ�\n");
        if(me->query_temp("gen")) return notify_fail("���Ѿ���ʹ��[35m�������ķ�[0m�ˡ�\n");
        if(me->query_temp("black")) return notify_fail("���Ѿ�������[30m������[0m�ˡ�\n");
        if(me->query_temp("bluesea")) return notify_fail("���Ѿ��ڴ���[34m��׺�[0m�ھ��ˡ�\n");
        if(me->query_temp("goldsun")) return notify_fail("���Ѿ���ǿ��[33m����[0m�ھ��ˡ�\n");
        if(me->query_temp("blood")) return notify_fail("���Ѿ��ڴ߹�[31mѪ��[0m�ھ��ˡ�\n");
        if(me->query_temp("green")) return notify_fail("���Ѿ�������[32m������[0m�ھ��ˡ�\n");

        me->set_temp("ice",1);
        message_vision(
HIC "$N��������ķ����Ĳ��"HIW"��ѩ��"HIC"�����Ϸ����纮˪��ĺ���,���ܵĿ����ƺ�ҲΪ֮����!!\n" NOR,me);

        me->add_temp("apply/force", 5);
        me->add_temp("apply/move", 5);
        me->add_temp("apply/stick", 5);
        me->add_temp("apply/parry", 5);
        me->add_temp("apply/dodge", 5);
        me->add_temp("apply/unarmed", 5);
        call_out("remove_effect", skill, me);
        if( me->is_fighting() ) me->start_busy(1);
        return 1;
}

void remove_effect(object me, int amount)
{
        me->set_temp("ice",0);
        me->add_temp("apply/force", -5);
        me->add_temp("apply/move", -5);
        me->add_temp("apply/stick", -5);
        me->add_temp("apply/parry", -5);
        me->add_temp("apply/dodge", -5);
        me->add_temp("apply/unarmed", -5);
        tell_object(me,"�����ϵı�ѩ������������������,���ܺ���Ҳ��֮���͡�\n");
        if(skill < 50)
        function_improved("ice",random(700));
}
