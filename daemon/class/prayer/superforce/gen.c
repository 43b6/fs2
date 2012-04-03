#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;
int skill;
void remove_effect(object me, int amount);
int exert(object me, object target)
{
skill=this_player()->query("functions/gen/level");
        if(userp(me))
        return notify_fail("����� mixforce��\n");
if(me->query("class")!="prayer")
          return notify_fail("���ְҵ�޷�ʹ�ô˼��ܡ�\n");
        if( (string)me->query_skill_mapped("force")!= "superforce")
         return notify_fail("�����ر���ʹ�û����ķ����ܷ���������\n");
        if( target != me ) return notify_fail("��ֻ���û����ķ���������������\n");
        if (me->query_skill("superforce",1) < 40)
            return notify_fail("��Ļ����ķ��ȼ����㣬��Ҫ 40 ����\n");
        if (me->query("force") < skill*5)
            return notify_fail("��������������޷����������صĻ����ھ���\n");
        if( (int)me->query("max_force") < 400 )
        return notify_fail("���������������,�޷���ȫ���ӳ��������ۻ���ھ���\n");

        if(me->query_temp("gen")) return notify_fail("���Ѿ������ˡ�\n");
        if(me->query_temp("purple")) return notify_fail("���Ѿ�������[32m���Ǻ��ķ�[0m�ˡ�\n");
        if(me->query_temp("white")) return notify_fail("���Ѿ�������[37m�������ķ�[0m�ˡ�\n");
        if(me->query_temp("nine")) return notify_fail("���Ѿ���ʹ��[35mõ��ϼ�ķ�[0m�ˡ�\n");
        if(me->query_temp("ice")) return notify_fail("���Ѿ�����ת[37m��ѩ���ķ�[0m�ˡ�\n");
        if(me->query_temp("black")) return notify_fail("���Ѿ�������[30m������[0m�ˡ�\n");
        if(me->query_temp("bluesea")) return notify_fail("���Ѿ��ڴ���[34m��׺�[0m�ھ��ˡ�\n");
        if(me->query_temp("goldsun")) return notify_fail("���Ѿ���ǿ��[33m����[0m�ھ��ˡ�\n");
        if(me->query_temp("blood")) return notify_fail("���Ѿ��ڴ߹�[31mѪ��[0m�ھ��ˡ�\n");
        if(me->query_temp("green")) return notify_fail("���Ѿ�������[32m������[0m�ھ��ˡ�\n");

        me->set_temp("gen",1);
        message_vision(
        HIC "$N��������ķ��������"YEL"������"HIC"�����Ϸ������ذ������,�γ�����������!!\n" NOR,me);

        me->add_temp("apply/force", 4);
        me->add_temp("apply/move", 4);
        me->add_temp("apply/stick", 4);
        me->add_temp("apply/parry", 4);
        me->add_temp("apply/dodge", 4);
        me->add_temp("apply/unarmed", 4);
        call_out("remove_effect", skill, me);
        if( me->is_fighting() ) me->start_busy(1);
        return 1;
}

void remove_effect(object me, int amount)
{
        me->set_temp("gen",0);
        me->add_temp("apply/force", -4);
        me->add_temp("apply/move", -4);
        me->add_temp("apply/stick", -4);
        me->add_temp("apply/parry", -4);
        me->add_temp("apply/dodge", -4);
        me->add_temp("apply/unarmed", -4);
        tell_object(me,"�����ϵ�����������������������,ѹ��Ҳ��֮��ɢ��\n");
        if(skill < 50)
        function_improved("gen",random(700));
}
