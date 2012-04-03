#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;
int skill;
void remove_effect(object me, int amount);

int exert(object me, object target)
{
skill=this_player()->query("functions/green/level");
        if(userp(me))
        return notify_fail("����� mixforce��\n");
if(me->query("class")!="prayer")
          return notify_fail("���ְҵ�޷�ʹ�ô˼��ܡ�\n");
        if( (string)me->query_skill_mapped("force")!= "superforce")
         return notify_fail("���������ʹ�û����ķ����ܷ���������\n");
        if( target != me ) return notify_fail("��ֻ���û����ķ���������������\n");
        if (me->query_skill("superforce",1) < 250)
            return notify_fail("��Ļ����ķ��ȼ����㣬��Ҫ 250 ����\n");
        if (me->query("force") < 750+skill*5)
            return notify_fail("��������������޷�ʹ�������档\n");
        if( (int)me->query("max_force") < 2500 )
        return notify_fail("���������������,�޷�����������������\n");
        if(me->query_temp("green")) return notify_fail("���Ѿ������ˡ�\n");
        if(me->query_temp("purple")) return notify_fail("���Ѿ�������[32m���Ǻ��ķ�[0m�ˡ�\n");
        if(me->query_temp("white")) return notify_fail("���Ѿ�������[37m�������ķ�[0m�ˡ�\n");
        if(me->query_temp("nine")) return notify_fail("���Ѿ�������[35m����ϼ�ķ�[0m�ˡ�\n");
        if(me->query_temp("gen")) return notify_fail("���Ѿ���ʹ��[35m�������ķ�[0m�ˡ�\n");
        if(me->query_temp("ice")) return notify_fail("���Ѿ�����ת[37m��ѩ���ķ�[0m�ˡ�\n");
        if(me->query_temp("black")) return notify_fail("���Ѿ�������[30m������[0m�ˡ�\n");
        if(me->query_temp("bluesea")) return notify_fail("���Ѿ��ڴ���[34m��׺�[0m�ھ��ˡ�\n");
        if(me->query_temp("goldsun")) return notify_fail("���Ѿ���ǿ��[33m����[0m�ھ��ˡ�\n");
        if(me->query_temp("blood")) return notify_fail("���Ѿ��ڴ߹�[31mѪ��[0m�ھ��ˡ�\n");

        me->set_temp("green",1);
        message_vision(
        HIC "$N��������ķ���ʮ��"HIG"[������]"HIC"��ɲʱ��ջ谵�����Ƿ�����ȫ������������������ǳ������������!!\n" NOR,me);
        me->add_temp("apply/force", 100);
        me->add_temp("apply/unarmed", 100);
        me->add_temp("apply/parry", 100);
        me->add_temp("apply/stick", 100);
        me->add_temp("apply/move", -50);
        me->add_temp("apply/dodge", -50);
        call_out("remove_effect", skill, me);
        if( me->is_fighting() ) me->start_busy(1);
        return 1;
}

void remove_effect(object me, int amount)
{
        if(!me) return ;
        me->set_temp("green",0);
        me->add_temp("apply/force", -100);
        me->add_temp("apply/parry", -100);
        me->add_temp("apply/unarmed", -100);
        me->add_temp("apply/stick", -100);
        me->add_temp("apply/move", 50);
        me->add_temp("apply/dodge", 50);
        tell_object(me,"�����ϵ�[32m������[0m�����ع���������𽥻ָ�ε����\n");
        if(skill<250)
        function_improved("green",random(1200));
}
