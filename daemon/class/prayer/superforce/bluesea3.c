#include <ansi.h>                                                               
inherit F_FUNCTION;                                                             
inherit SSERVER;                                                                
int skill;
int perform(object me, object target)                                           
{                                                                               
    object ob;
if(!this_player()) return 0;
skill=this_player()->query("functions/bluesea/level");
        if( !target ) target = offensive_target(me);                            
                                                                                
        if(!target) return notify_fail("���Ҳ�������!!\n");
        if(skill < 90  )
            return notify_fail("���[34m��׺�[0m���Ĳ������죬�޷����˳�[34m������[0m����90����\n");      
        if( me->query_skill("superforce",1) < 110 )             
            return notify_fail("����챦���ķ��Ļ����δ�㹻����110����\n");       
                                                                                
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
        message_vision("$N�������ȵ������纣�о����н�ʱ�����ư��磬$N���ջ��챦�������ص������ھ�,�����������ӵ����쾡�� !!\n\n",me,target);
        message_vision("$N˫��һ�ӣ�[34m������[0m��������ͬ����һ�����ֶ��� ��\n",me,target);                 
                                                                                
        me->add("force",-skill*4);

if(80>random(100))
        {                                                                       
                message_vision("$n������ھ�������ס��˿���޷�������\n",me,target);                                                                   
                message_vision( NOR,me);                                        
             target->start_busy(4);
                COMBAT_D->report_status(target);                                
        }                                                                       
        else                                                                    
        {                                                                         
                message_vision("$n�������ǣ���[34m������[0m���ھ����������Ϻ󣬾�к�ڵ� ������ʹ��$Nʧȥ�������㣬ɥʧ��ƽ���!!\n",me,target);
                COMBAT_D->report_status(target);                                
        }                                                                        
        message_vision("[34m�������ơ�[0mʹ����$N��æ��Ϣ����������ս����",me,target); 
        me->start_busy(1);
        if(skill < 100) function_improved("bluesea",random(500));
        message_vision( NOR,me);                                                
        return 1;                                                               
}
                                                                             
