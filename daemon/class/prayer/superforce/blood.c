#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;
int skill;
void remove_effect(object me, int amount);

int exert(object me, object target)
{
skill=this_player()->query("functions/blood/level");
        if(userp(me))
        return notify_fail("����� mixforce��\n");
        if( (string)me->query_skill_mapped("force")!= "superforce")
         return notify_fail("Ѫ�Ա���ʹ�û����ķ����ܷ���������\n");
        if( target != me ) return notify_fail("��ֻ���û����ķ���������������\n");
        if (me->query_skill("superforce",1) < 200)
            return notify_fail("��Ļ����ķ��ȼ����㣬��Ҫ 200 ����\n");
        if (me->query("force") < 550+skill*5)
            return notify_fail("��������������޷�ʹ��Ѫ�ԡ�\n");
        if( (int)me->query("max_force") < 2000 )
        return notify_fail("���������������,�޷�����Ѫ��������\n");
        if(me->query_temp("blood")) return notify_fail("���Ѿ������ˡ�\n");
        if(me->query_temp("purple")) return notify_fail("���Ѿ�������[32m���Ǻ��ķ�[0m�ˡ�\n");
        if(me->query_temp("white")) return notify_fail("���Ѿ�������[37m�������ķ�[0m�ˡ�\n");
        if(me->query_temp("nine")) return notify_fail("���Ѿ�������[35m����ϼ�ķ�[0m�ˡ�\n");
        if(me->query_temp("gen")) return notify_fail("���Ѿ���ʹ��[35m�������ķ�[0m�ˡ�\n");
        if(me->query_temp("ice")) return notify_fail("���Ѿ�����ת[37m��ѩ���ķ�[0m�ˡ�\n");
        if(me->query_temp("black")) return notify_fail("���Ѿ�������[30m������[0m�ˡ�\n");
        if(me->query_temp("bluesea")) return notify_fail("���Ѿ��ڴ���[34m��׺�[0m�ھ��ˡ�\n");
        if(me->query_temp("goldsun")) return notify_fail("���Ѿ���ǿ��[33m����[0m�ھ��ˡ�\n");
        if(me->query_temp("green")) return notify_fail("���Ѿ�������[32m������[0m�ھ��ˡ�\n");

        me->set_temp("blood",1);
        message_vision(
        HIC "$N��������ķ��ھŲ�"HIR"[Ѫ��]"HIC"���������˲�ȫ��ɲʱȫ��ð��Ѫ��ɫ������!!\n" NOR,me);
        me->add_temp("apply/force", 70);
        me->add_temp("apply/parry", 60);
        me->add_temp("apply/unarmed", 80);
        me->add_temp("apply/stick", 60);
        me->add_temp("apply/move", -50);
        me->add_temp("apply/dodge", -40);
        call_out("remove_effect", skill, me);
        if( me->is_fighting() ) me->start_busy(1);
        return 1;
}

void remove_effect(object me, int amount)
{
        if(!me) return ;
        me->set_temp("blood",0);
        me->add_temp("apply/force", -70);
        me->add_temp("apply/parry", -60);
        me->add_temp("apply/unarmed", -80);
        me->add_temp("apply/stick", -60);
        me->add_temp("apply/move", 50);
        me->add_temp("apply/dodge", 40);
        tell_object(me,"ֻ�������ϵ�[31mѪ��[0m�����ع�ƽ����\n");
        if(skill < 200)
        function_improved("blood",random(1000));
}
