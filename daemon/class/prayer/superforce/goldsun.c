#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;
int skill;
void remove_effect(object me, int amount);

int exert(object me, object target)
{
if(!me) return notify_fail("����������!!!\n");
        if(userp(me))
        return notify_fail("����� mixforce��\n");
skill=me->query("functions/goldsun/level");
if(me->query("class")!="prayer")
          return notify_fail("���ְҵ�޷�ʹ�ô˼��ܡ�\n");
        if( (string)me->query_skill_mapped("force")!= "superforce")
         return notify_fail("���ر���ʹ�û����ķ����ܷ���������\n");

        if( target != me ) return notify_fail("��ֻ���û����ķ���������������\n");
        if (me->query_skill("superforce",1) < 150)
            return notify_fail("��Ļ����ķ��ȼ����㣬��Ҫ 150 ����\n");
        if (me->query("force") < 450+skill*5)
            return notify_fail("��������������޷�ʹ�ý��ء�\n");
        if( (int)me->query("max_force") < 1600 )
        return notify_fail("���������������,�޷����ƽ��ص�������\n");
        if(me->query_temp("goldsun")) return notify_fail("���Ѿ������ˡ�\n");
        if(me->query_temp("purple")) return notify_fail("���Ѿ�������[32m���Ǻ��ķ�[0m�ˡ�\n");
        if(me->query_temp("white")) return notify_fail("���Ѿ�������[37m�������ķ�[0m�ˡ�\n");
        if(me->query_temp("nine")) return notify_fail("���Ѿ�������[35m����ϼ�ķ�[0m�ˡ�\n");
        if(me->query_temp("gen")) return notify_fail("���Ѿ���ʹ��[35m�������ķ�[0m�ˡ�\n");
        if(me->query_temp("ice")) return notify_fail("���Ѿ�����ת[37m��ѩ���ķ�[0m�ˡ�\n");
        if(me->query_temp("black")) return notify_fail("���Ѿ�������[30m������[0m�ˡ�\n");
        if(me->query_temp("bluesea")) return notify_fail("���Ѿ��ڴ���[34m��׺�[0m�ھ��ˡ�\n");
        if(me->query_temp("blood")) return notify_fail("���Ѿ��ڴ߹�[31mѪ��[0m�ھ��ˡ�\n");
        if(me->query_temp("green")) return notify_fail("���Ѿ�������[32m������[0m�ھ��ˡ�\n");

        me->set_temp("goldsun",1);
        message_vision(
        HIC "$N��������ķ��ڰ˲�"HIY"[����]"HIC"���������ǣ�ɲʱȫ����"HIY"�����ɫ�Ĺ�â"NOR"!!\n" NOR,me);

        me->add_temp("apply/force", 50);
        me->add_temp("apply/parry", -10);
        me->add_temp("apply/unarmed", 50);
        me->add_temp("apply/stick", 50);
        me->add_temp("apply/move", -30);
        me->add_temp("apply/dodge", -30);
        call_out("remove_effect", skill, me);
        if( me->is_fighting() ) me->start_busy(1);
        return 1;
}

void remove_effect(object me, int amount)
{
        if(!me) return ;
        me->set_temp("goldsun",0);
        me->add_temp("apply/force", -50);
        me->add_temp("apply/parry", 10);
        me->add_temp("apply/unarmed", -50);
        me->add_temp("apply/stick", -50);
        me->add_temp("apply/move", 30);
        me->add_temp("apply/dodge", 30);
        tell_object(me,"ֻ��������[33m����[0m�����������ɽ�������ʧ��\n");
        if(skill < 150)
        function_improved("goldsun",random(900));
}
