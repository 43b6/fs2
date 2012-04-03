#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;
int skill;
void remove_effect(object me, int amount);

int exert(object me, object target)
{
skill=this_player()->query("functions/black/level");
        if(userp(me))
        return notify_fail("����� mixforce��\n");
        if( (string)me->query_skill_mapped("force")!= "superforce")
         return notify_fail("���������ʹ�û����ķ����ܷ���������\n");
        if( target != me ) return notify_fail("��ֻ���û����ķ���������������\n");
        if (me->query_skill("superforce",1) < 80)
            return notify_fail("��Ļ����ķ��ȼ����㣬��Ҫ 80 ����\n");
        if (me->query("force") < 200+skill*5)
            return notify_fail("��������������޷�ʹ�������硣\n");
        if( (int)me->query("max_force") < 1000 )
        return notify_fail("���������������,�޷���ȫ���ӳ��������ۻ���ھ���\n");
        if(me->query_temp("black")) return notify_fail("���Ѿ������ˡ�\n");
        if(me->query_temp("purple")) return notify_fail("���Ѿ�������[32m���Ǻ��ķ�[0m�ˡ�\n");
        if(me->query_temp("white")) return notify_fail("���Ѿ�������[37m�������ķ�[0m�ˡ�\n");
        if(me->query_temp("nine")) return notify_fail("���Ѿ�������[35m����ϼ�ķ�[0m�ˡ�\n");
        if(me->query_temp("gen")) return notify_fail("���Ѿ���ʹ��[35m�������ķ�[0m�ˡ�\n");
        if(me->query_temp("ice")) return notify_fail("���Ѿ�����ת[37m��ѩ���ķ�[0m�ˡ�\n");
        if(me->query_temp("bluesea")) return notify_fail("���Ѿ��ڴ���[34m��׺�[0m�ھ��ˡ�\n");
        if(me->query_temp("goldsun")) return notify_fail("���Ѿ���ǿ��[33m����[0m�ھ��ˡ�\n");
        if(me->query_temp("blood")) return notify_fail("���Ѿ��ڴ߹�[31mѪ��[0m�ھ��ˡ�\n");
        if(me->query_temp("green")) return notify_fail("���Ѿ�������[32m������[0m�ھ��ˡ�\n");

        me->set_temp("black",1);
        message_vision(
        HIC "$N��������ķ�������[30m������[36m���淺������ȫ����ھ�������������֮��!!\n" NOR,me);

        me->add_temp("apply/parry", 15);
        me->add_temp("apply/force", 5);
        me->add_temp("apply/move", 5);
        me->add_temp("apply/dodge", 5);
        me->add_temp("apply/unarmed", 15);
        call_out("remove_effect", skill, me);
        if( me->is_fighting() ) me->start_busy(1);
        return 1;
}

void remove_effect(object me, int amount)
{
        if(!me) return ;
       me->set_temp("black",0);
       me->add_temp("apply/parry", -15);
       me->add_temp("apply/force", -5);
       me->add_temp("apply/move", -5);
       me->add_temp("apply/dodge", -5);
       me->add_temp("apply/unarmed", -15);
       tell_object(me,"���ڵ�[30m������[0m���������ӵ�����ʧ��\n");
        if(skill < 100)
        function_improved("black",random(700));
}
