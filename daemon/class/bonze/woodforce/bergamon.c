//ľ���ķ� - ��ָ�� by sueplan
#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;
void remove_effect(object me, int amount);

int perform(object me, object target)
{
        int skill,force,woodforce,temp,down;
        force=me->query("max_force"); 
        woodforce=me->query_skill("woodforce",1);
        if( (string)me->query_skill_mapped("force")!= "woodforce")
        return notify_fail("��ָ��Ҫ��ľ���ķ���������\n");
        if (me->query("force") < force/6)
        return notify_fail("��������������޷�����ʹ����ָ����\n");
        if(me->query_temp("beg_ok")==1) 
        return notify_fail("���Ѿ������ˡ�\n");
        if( me->query("family/family_name") != "������")
        return notify_fail("���²����������ˣ�����ʹ�ã�\n");
        temp=me->query("functions/bergamon/level","bergamon");
        skill = (temp+temp)/2;
//���add attack 150
        if( skill >= woodforce ) skill = woodforce;
        if (skill > 100) skill = 100;
        me->add("force",-force/6);
        me->set_temp("beg_ok",1);

//��һ��        

        if (skill < 10)
        {
        message_vision(
HIB "$N������������ľ���ķ��еġ������־���˫���������棡��\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(1);
        return 1;
        }

//�ڶ���

        if (skill >=10 && skill < 20)
      
        {
        message_vision(
HIB "$N������������ľ���ķ��еġ��ġ��־���˫���������棡��\n",me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(1);

        return 1;
        }

//������

        if (skill >= 20 && skill < 30)
        {
        message_vision(
HIR "$N������������ľ���ķ��еġ������־���˫���������棡��\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(1);

        return 1;
        }

//���Ĳ�

        if (skill >=30 && skill < 40)
        {
        message_vision(
HIR "$N������������ľ���ķ��еġ��ԡ��־���˫���������棡��\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
        }
//�����
        if (skill >=40 && skill < 50)
        {
        message_vision(
HIG "$N������������ľ���ķ��еġ��ա��־���˫���������棡��\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
        }
        

//������

        if (skill >=50&& skill < 60)
        {
        message_vision(
HIG "$N������������ľ���ķ��еġ������־���˫���������棡��\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
        }
//���߲�
        if (skill >=60 && skill < 70)
        {
        message_vision(
HIC "$N������������ľ���ķ��еġ�ͨ���־���˫���������棡��\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
        }
//�ڰ˲�
        if (skill >=70 && skill < 80)
        {
        message_vision(
HIC "$N������������ľ���ķ��еġ����־���˫���������棡��\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
        }
//�ھŲ�
        if (skill >=80 && skill < 90)
        {
        message_vision(
HIW "$N������������ľ���ķ��еġ����־���˫���������棡��\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
        }                      
//��ʮ��
if (skill >=90 && skill <= 100)
        {
        message_vision(
HIC"                $N����ľ���ķ���ָ�������������������ķ���\n
                        "HIY"�����ļ���    �ճ�ͨ��  ��\n  
"+HIC+"               $N����ɢ�����޹�ԣ�����Ϊ��ָ���������ľ��硣\n" NOR,me);
        me->add_temp("apply/attack",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);
        return 1;
        }
}
 
void remove_effect(object me, int skill)
{
     int woodforce=me->query_skill("woodforce",1);
        if(skill >= 100) me->set("functions/bergamon/level",100);
        else 
        if(skill < woodforce )
        function_improved("bergamon",(skill*5+random(skill*5)));
        me->delete_temp("beg_ok");
        me->add_temp("apply/attack",-skill);
        message_vision("$Nȫ�����ɢȥ�����ϰ׹⽥����Ϊ���������\n",me);
}

