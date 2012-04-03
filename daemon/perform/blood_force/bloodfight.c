#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;

//void remove_effect(object me, int amount);

int perform(object me, object target)
{
        int skill,skill1,force,bloodforce,temp;
        force=me->query("max_force");
        bloodforce=me->query_skill("blood_force",1);
        if( (string)me->query_skill_mapped("force")!= "blood_force")
            return notify_fail("Ѫħ����Ҫ��Ѫħ�ķ���������\n");
        if (me->query("force") < force/6)
            return notify_fail("���������������������Ѫħ������\n");
        if(me->query_temp("fight")==1)
            return notify_fail("���Ѿ�����Ѫħ�����Ļ��������ˡ�\n");
        temp=me->query("functions/bloodfight/level");
        skill = temp;
        me->add("force",-force/10);
        me->set_temp("bloodfight",1);
if (skill < 15){
        skill1=2*skill;
        message_vision(
        HIR "$N����"HIM"Ѫħ����"HIR"����һ�㡸"HIC"Ѫ������ "HIR"����ȫ������������һ�ɵ���ɫ��Ѫħ����֮�ڡ�\n" NOR,me);
        me->add_temp("apply/dodge",skill);   
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",-skill1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < bloodforce )
        function_improved("bloodfight",random(skill*18)+80);
        return 1;
                       }
if (skill >= 15 && skill < 30){
        skill1=1.5*skill;
        message_vision(
        HIR "$N����"HIM"Ѫħ����"HIR"���ڶ��㡸"HIC"Ѫ������ "HIR"����ȫ������������һ�ɰ���ɫ��Ѫħ����֮�ڡ�\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",-skill1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < bloodforce )
        function_improved("bloodfight",random(skill*17)+80);
        return 1;
                       }
if (skill >=30 && skill < 50){
        skill1=1.2*skill;
        message_vision(
        HIW "$N����"HIM"Ѫħ����"HIW"�������㡸"HIC"Ѫ�����ҫ�ķ�"HIW"����ȫ������������һ�ɺ�ɫ��Ѫħ����֮�ڡ�\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",-skill1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < bloodforce )
        function_improved("bloodfight",random(skill*15)+80);
        return 1;
                       }
if (skill >=50 && skill < 70){
        skill1=skill;
        message_vision(
        HIW "$N����"HIM"Ѫħ����"HIW"�����Ĳ㡸"HIY"Ѫ���ķ�"HIW"����ȫ������������һ�ɺ�ɫ��Ѫħ����֮�ڡ�\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",-skill1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < bloodforce )
        function_improved("bloodfight",random(skill*14)+80);
        return 1;
                       }
if (skill >=70 && skill < 90){
        skill1=0.8*skill;
        message_vision(
        HIW "$N����"HIM"Ѫħ����"HIW"������㡸"HIR"ѪȾ������ "HIW"����ȫ������������һ������ɫ��Ѫħ����֮�ڡ�\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",-skill1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < bloodforce )
        function_improved("bloodfight",random(skill*13)+80);
        return 1;
                       }
if (skill >=90){
        skill1=0.5*skill;
        message_vision(
        HIC "$N��ȣ�"HIR"ħ������ʥ��壬Ѫ��������ħ�𣡣�\n"HIC"�漴����"HIR"Ѫħ����"HIC"��֮�ռ�����"HIW"��"HBRED"ħѪ�Ϳ�Ⱦ�쳾"NOR""HIW"��"HIC"��ȫ��ɢ�����ޱȺ�⣬����˲��������һ����ɱ֮��֮�С�\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
         me->add_temp("apply/defense",-skill1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < bloodforce )
        function_improved("bloodfight",random(skill*12)+80);
        return 1;
    }
   }
void remove_effect(object me,int skill,int skill1)
{
me->delete_temp("bloodfight");
me->add_temp("apply/dodge",-skill);
me->add_temp("apply/parry",-skill);
me->add_temp("apply/attack",-skill);
me->add_temp("apply/defense",skill1);
message_vision(HIW"$N��Ѫħ������"NOR"���γɵĻ���������ʼ������ɢ�ˡ�\n"NOR,me);
}


