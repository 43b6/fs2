// �����Ҽ��ع� by swy
#include <ansi.h>
inherit SSERVER;
inherit F_FUNCTION;
int perform(object me, object target)
{
        int fun,stat=0,a,b,c,d,fun1,fun2,k;
        int skill,kk,exp;
        object ob;
if(me->query("class")!="marksman"&&me->query("id")!="swy")
return notify_fail("���ְҵ�޷�ʹ�ô˼��ܡ�\n");
        skill=me->query_skill("archery",1);
        kk=me->query("functions/ten_kee/level");
        exp=me->query("combat_exp");
fun=me->query("functions/m-archery/level");
if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="archery")
return notify_fail("Ҫװ���������ðɡ�\n");
if( skill < 120 )
return notify_fail("��Ļ�������������\n"); 
if( kk != 100 )
return notify_fail("���ʮ��𼱲�����\n"); 
if( exp < 5000000 && me->query("id")!="master lee" )
return notify_fail("��ľ���ֵ������\n"); 
        if( !me->is_fighting() )
        return notify_fail("�Ҽ��뷢ֻ����ս���в���ʹ�á�\n");
        if(!target) target = offensive_target(me);
        if(!target) return notify_fail("�Ҳ�������!!\n");
        if( target == me )
        return notify_fail("���ܶԸ��Լ�ѽ!!\n");
        if( me->query("force") < 500)
        return notify_fail("�������������\n");
        a = target->query_temp("over/right");
        b = target->query_temp("over/left");
                c = target->query_temp("over/r-eyes");
                d = target->query_temp("over/l-eyes");
                fun1 = target->query_temp("hand-all");   
                fun2 = target->query_temp("eyes-all");   
                                k=random(2);
                                if(fun2) k=1;
                stat = a+b+c+d;
        if(stat==4) return notify_fail("�����Ѿ�˫��ʧ����˫��������!\n");
        me->add("force",-500);
        message_vision(HIY"$Nʹ�������Ǽ������еİ��壬��ʱ���Ʊ�ɫ�������!\n"NOR,me);
                message_vision(HIC"ֻ��$Nȡ����ʮ֧��������һ�ܣ���$n�������!\n"NOR,me,target);
                if(fun+5 > random(150) || me->query("id")=="swy" ) { 
                if(k && !fun1) {
                                if( !target->query_temp("over/right") ) {
                message_vision(HIR"�Ҽ����䣬������$N���֣���ʱʧȥһ���˺���!\n"NOR,target);
                target->set_temp("over/right",1); }
                                else { 
                                message_vision(HIR"�Ҽ����䣬������$N˫�֣���ʱ�˺���ȫ��!\n"NOR,target);
                target->set_temp("hand-all",1); 
                target->set_temp("over/left",1); }
                } else {
                                if( !target->query_temp("over/r-eyes") ) {
                message_vision(HIR"�Ҽ����䣬������$N���ۣ���ʱʧȥһ��������!\n"NOR,target);
                target->set_temp("over/r-eyes",1);
                } else {
                                message_vision(HIR"�Ҽ����䣬������$N˫�ۣ���ʱ������ȫ��!\n"NOR,target);
                target->set_temp("eyes-all",1); 
                target->set_temp("over/l-eyes",1); }
                                }
                                target->add("kee",-(fun*10+200));
                COMBAT_D->report_status(target);
                }
                else {
                message_vision(HIW"$N�������Ҽ������������������㿪��!\n"NOR,target);
                } 
        message_vision(HIG"$Nʹ���Ҽ��뷢���ݻ����ƣ����乭�ϵļ�!\n"NOR,me);
        me->start_busy(1);
        if( fun < 100 )
        function_improved ("m-archery",100);
        return 1;
}
