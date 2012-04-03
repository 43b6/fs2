#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int exert(object me, object target)
{
        int fun,damage,i;
        object *enemy;
        if(!wizardp(me) && userp(me)) return 0;
        if(me->query_temp("using_threeforce"))
                return notify_fail("������������������ж��ٻ���������ڹ�����!!!\n");
        fun=me->query("functions/threeforce/level");
        if(!fun) fun=1;
        damage=fun*80;
        if(!me->is_fighting()) return notify_fail("ս���вſ���ʹ�����������ء�!!\n");
        enemy=me->query_enemy();
        target=enemy[random(sizeof(enemy))];
       if(!target) return notify_fail("�Ҳ�������!!\n");
        if(userp(target)) damage/=2;
        me->set_temp("using_threeforce",1);
        message_vision(HIG"
ֻ��$N"HIG"���һ������$N"HIG"��$n"HIG"�Ӵ�֮ʱ�����������������أ�����������ˣ�ɲ�Ǽ�
��������ȫ������$n"HIG"������!!!
����!��һ���������ӵľ��죬����ͬʱ������!!\n"NOR,me,target);
        message_vision(HIR"
����$N"HIR"���˵�һ���ʱ��ͻȻȫ����𣬾����ܵ���$n"HIR"��һ��������Ӱ�죬
ȫ������ͬ��һ�ɾ����ش���������ʱɥʧ�����!!!\n"NOR,target,me);
        target->add_temp("apply/damage",-(target->query_temp("apply/damage")/2));
        target->add_temp("apply/attack",-(target->query_temp("apply/attack")/2));
        target->add("force",-(target->query("force")/5));
        target->receive_wound("kee",damage,me);
        target->set_temp("no_power",1);
        target->apply_condition("no_power",3);
        COMBAT_D->report_status(target);
        call_out("action1",3,me,target,damage);
        return 1;
}
int action1(object me,object target,int damage)
{
        if(target)
        {
        if(target->is_fighting())
        {
        message_vision(HIB"
����$N"HIB"��Ϊ��\����$n"HIB"����������ʱ��$n"HIB"�ĵڶ���������ʼ�������ã������Ѳ������
��ʼ��$N"HIB"�������Ҵܣ�$N"HIB"ȫ��������ͬ��Ť��һ����������ȵ�ʱ��������!!\n"NOR,target,me);
        target->add_temp("apply/defense",-(target->query_temp("apply/defense")/2));
        target->add_temp("apply/armor",-(target->query_temp("apply/armor")/2));
        target->add("force",-(target->query("force")/4));
        target->receive_wound("gin",damage,me);
        COMBAT_D->report_status(target);
        call_out("action2",3,me,target,damage);
        }
        else
        {
        call_out("add_fun",2,me);
        }
        }
        else
        {
        call_out("add_fun",2,me);
        }
        return 1;
}
int action2(object me,object target,int damage)
{
        if(target)
        {
        if(target->is_fighting())
        {
        message_vision(HIM"
����$N"HIM"ƾ���ű���������$n"HIM"�ڶ��������������ʱ��$n"HIM"�ĵ���������ȴ�Ѿ�ȫ��Ԥ�׵�
���뵽$N"HIM"�ľ���֮�У�$N"HIM"��ʱ������ƮƮ������˵�������Ĳ���ҡ�����ܵ�Ҫ��������
����������$N"HIM"��ָ�ӣ���־���!!\n"NOR,target,me);
        target->set_temp("apply/damage",1);
        target->set_temp("apply/attack",1);
        target->add("force",-(target->query("force")/3));
        target->receive_wound("sen",damage,me);
        COMBAT_D->report_status(target);
        call_out("add_fun",2,me);
        }
        else
        {
        call_out("add_fun",2,me);
        }
        }
        else
        {
        call_out("add_fun",2,me);
        }
        return 1;
}
int add_fun(object me)
{
        int fun;
        if(!me) return 1;
        me->delete_temp("using_threeforce");
        fun=me->query("functions/threeforce/level");
        if(!userp(me)) return 1;
        if(fun<100)
                function_improved("threeforce",random(2000));
}
