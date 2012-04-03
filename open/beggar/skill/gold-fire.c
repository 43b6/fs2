//�������
#include <ansi.h>
inherit F_FUNCTION;
inherit F_CLEAN_UP;
 
void remove_effect(object me, int amount);

int perform(object me, object target)
{
        int skill,force,fireforce,temp;
        force=me->query("max_force"); 
        fireforce=me->query_skill("fireforce",1);

        if( !me->query("quest/gold-fire") ) return notify_fail("��û��ѧ����ķ�\n");

        if( (string)me->query_skill_mapped("force")!= "fireforce")
        return notify_fail("�������Ҫ�ü�����������\n");
    
        if (me->query("force") < force/6)
        return notify_fail("��������������������𼫻����\n");

        if(me->query_temp("gold-fire")==1) return notify_fail("���Ѿ������ˡ�\n");

        temp=me->query("functions/gold-fire/level","gold-fire");
        skill = temp;
	if( skill >= fireforce ) skill = fireforce;
        if (skill > 90) skill = 90;
        me->add("force",-force/6);
        me->set_temp("gold-fire",1);
if (skill < 14){
        message_vision(
        HIM "$N���𼫻�����һ�㡸�켫����ȫ������������һ����ɫ�Ļ��������ڣ���\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);
 
        return 1;
                       }
if (skill >=14 && skill < 28){
        message_vision(
        HIG "$N���𼫻����ڶ��㡸�ؼ�����ȫ������������һ����ɫ�Ļ��������ڣ���\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
                       }
if (skill >= 28 && skill < 42){
        message_vision(
        HIW "$N���𼫻��������㡸�˼�����ȫ������������һ�ɰ�ɫ�Ļ��������ڣ���\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
                       }
if (skill >=42 && skill < 56){
        message_vision(
        HIB "$N���𼫻������Ĳ㡸ħ������ȫ������������һ����ɫ�Ļ��������ڣ���\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
                       }
if (skill >=56 && skill < 70){
        message_vision(
        HIC "$N���𼫻�������㡸��������ȫ������������һ����ɫ�Ļ��������ڣ���\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
                       }
if (skill >=70 && skill < 84){
        message_vision(
        HIR "$N���𼫻��������㡸������ȫ������������һ�ɻ��Ļ��������ڣ���\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
                       }
if (skill >=84){
        message_vision(
        HIY "$N���𼫻������������������������ܽ�Ⱪ�֣����������һ�����$N�����ܣ���\n" NOR,me);
	me->add_temp("apply/defense",skill);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, skill:), skill);
        if( me->is_fighting() ) me->start_busy(3);

        return 1;
                       }
}
 
void remove_effect(object me, int skill)
{
   int fireforce=me->query_skill("fireforce",1);
   if(skill >= 90) me->set("functions/gold-fire/level",90);
        else if(skill < fireforce )
        function_improved("gold-fire",(skill*7+random(skill*8)));

        me->delete_temp("gold-fire");
        me->add_temp("apply/defense",-skill);
        message_vision("$N�Ļ���������ʼ������ɢ�ˡ�\n",me);
}
