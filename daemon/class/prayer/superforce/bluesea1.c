#include <ansi.h>                                                               
inherit F_FUNCTION;                                                             
inherit SSERVER;                                                                
int skill;
int perform(object me, object target)                                           
{                                                                               
    object ob;
                                                                                
skill=me->query("functions/bluesea/level");
        if( !target ) target = offensive_target(me);                            
                                                                                
        if(skill < 30  )
            return notify_fail("���[34m��׺�[0m���Ĳ������죬�޷����˳�[34m������[0m����Ҫ30����\n");      
        if( me->query_skill("superforce",1) < 110 )             
            return notify_fail("����챦���ķ��Ļ����δ�㹻����Ҫ110����\n");
                                                                                
        if(!(ob=me->query_temp("weapon")))
        {
            if(me->query_temp("secondary_weapon"))
            return notify_fail("�㲻�������޷�ʹ��[34m������[0m�ģ���\n");
        }
        if(ob=me->query_temp("weapon"))                                         
        {                                                                       
            if((string)ob->query("skill_type") != "unarmed")
            return notify_fail("�㲻�������޷�ʹ��[34m������[0m��!\n");
        }

        if(me->query("force")<300)
            return notify_fail("�������������\n");
        if(me->query("kee")<140)
            return notify_fail("�����������\n");
                                                                                
        if(!me->is_fighting(target))    
        {                                                                       
            tell_object(me,"[34m������[0mΨ��ս���в���ʹ�á�\n");
            return 1;
        }
        if(target->is_busy())
        return notify_fail("���� busy �У��칥���ɡ�\n");     

        message_vision("$N�������ȵ������缱��һ������ܣ�$N���ջ��챦�������ص������ھ�,����һ����ȫ������������ !!\n\n",me,target);
        message_vision("$N������������������[34m�˳����������[0m�������·���ӿ��ͻ���� ��\n",me,target);                 
                                                                                
        me->add("force",-skill*2);

if(80>random(100))
        {
                message_vision("$n����[34m������[0m���ھ�����������գ�������ʧȥ�����ģ���\n",me,target);                                                                   
                message_vision( NOR,me);                                        
                target->start_busy(2);
                COMBAT_D->report_status(target);                                
        }                                                                       
        else                                                                    
        {
                message_vision("$næʹ��ǧ��׹����������ס��������[34m������[0m�׾������ .��\n",me,target);                                                                            
                message_vision( NOR,me);                                        
                COMBAT_D->report_status(target);                                
        }
        message_vision("[34m�������ơ�[0mʹ����$N��æ��Ϣ����������ս����",me,target); 
        me->start_busy(1);
        if(skill < 100) function_improved("bluesea",random(500));
        message_vision( NOR,me);                                                
        return 1;                                                               
}
                                                                             
