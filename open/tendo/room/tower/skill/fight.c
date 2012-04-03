#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;

void remove_effect(object me, int amount);

int perform(object me, object target)
{
        int skill,force,fiendforce,temp;
        force=me->query("max_force");
        fiendforce=me->query_skill("fiendforce",1);
        if( (string)me->query_skill_mapped("force")!= "fiendforce")
            return notify_fail("���޶���Ҫ�������ķ���������\n");
        if (me->query("force") < force/6)
            return notify_fail("������������������������޶�����\n");
        if(me->query_temp("fight")==1)
            return notify_fail("���Ѿ��������޶����Ļ��������ˡ�\n");
        temp=me->query("functions/fight/level","fight");
        skill = temp;
        me->add("force",-force/10);
        me->set_temp("fight",1);
if (skill < 10){
        message_vision(
        HIW "$N����"HIM"���޶���"HIW"����һ�ء�[1;5;31m����ɽ�Ӷ�[0m"HIW"����ȫ������������һ�ɰ�ɫ�����޶���֮�ڡ���\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
         me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*18)+80);
        return 1;
                       }
if (skill >= 10 && skill < 20){
        message_vision(
        HIW "$N����"HIM"���޶���"HIW"���ڶ��ء�[1;5;36m�׹���ɽ��[0m"HIW"����ȫ������������һ����ɫ�����޶���֮�ڡ�\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*17)+80);
        return 1;
                       }
if (skill >= 20 && skill < 30){
        message_vision(
        HIW "$N����"HIM"���޶���"HIW"�������ء�[1;5;32mˮ���ƾ���[0m"HIW"����ȫ������������һ����ɫ�����޶���֮�ڡ�\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*16)+80);
        return 1;
                       }
if (skill >=30 && skill < 40){
        message_vision(
        HIW "$N����"HIM"���޶���"HIW"�������ء�[1;5;34m��ɳ��ҹ��[0m"HIW"����ȫ������������һ����ɫ�����޶���֮�ڡ�\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*15)+80);
        return 1;
                       }
if (skill >=40 && skill < 50){
        message_vision(
        HIW "$N����"HIM"���޶���"HIW"�������ء�[1;5;33m��������[0m"HIW"����ȫ������������һ�ɺ�ɫ�����޶���֮�ڡ�\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*14)+80);
        return 1;
                       }
if (skill >=50 && skill < 60){
        message_vision(
        HIW "$N����"HIM"���޶���"HIW"�������ء�[1;5;35m������ɽʯ[0m"HIW"����ȫ������������һ�ɻ�ɫ�����޶���֮�ڡ�\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*13)+80);
        return 1;
                       }
if (skill >=60 && skill <70){
        message_vision(
        HIW "$N����"HIM"���޶���"HIW"�������ء�[1;5;31m�绨�����[0m"HIW"����ȫ������������һ����ɫ�����޶���֮�ڡ�\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
         me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*12)+80);
        return 1;
                       }
if (skill >=70 ){
        message_vision(
        HIW "$N����"HIM"���޶���"HIW"��"HIB"���հ���"HIW"��[1;5;33m����������[0m"HIW"����ȫ������������һ�ɽ�ɫ�����޶���֮�ڡ���\n" NOR,me);
        me->add_temp("apply/dodge",skill);
        me->add_temp("apply/parry",skill);
        me->add_temp("apply/attack",skill);
        me->add_temp("apply/defense",50);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(2);
        if(skill < fiendforce )
        function_improved("fight",random(skill*11)+80);
        return 1;
                       }
}

void remove_effect(object me, int skill)
{

        me->delete_temp("fight");
        me->add_temp("apply/dodge",-skill);
        me->add_temp("apply/parry",-skill);
        me->add_temp("apply/attack",-skill);
        me->add_temp("apply/defense",-50);
        message_vision("$N"HIW"�����޶�����"NOR"���γɵĻ���������ʼ������ɢ�ˡ�\n"NOR,me);
}



