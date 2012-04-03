#include <ansi.h>                                                               
inherit F_FUNCTION;                                                             
inherit SSERVER;                                                                
                                                                                
int perform(object me, object target)                                           
{
    object ob;
    int age=me->query("age",1);
    int lv1=me->query("functions/blood/level");
    int lv=me->query_skill("superforce",1);
    int hurt_value=lv1*age/4+lv*age/8;
    if( hurt_value > 1000) hurt_value=1000;
                                                                                
        if( !target ) target = offensive_target(me);                            
                                                                                
        if( lv1 < 35  )
            return notify_fail("���[31mѪ��[0m���Ĳ������죬�޷����˳�[31m������[0m����35����\n");      
        if( me->query_skill("superforce",1) < 200 )             
            return notify_fail("����챦���ķ��Ļ����δ�㹻����200����\n");       
                                                                                
        if(!(ob=me->query_temp("weapon")))                                        
        {
            if(me->query_temp("secondary_weapon"))
            return   notify_fail("����������ϵ��������ܽ�[31m������[0m��Ϊ[31mѪ������[0m!!\n");
        }
        if(ob=me->query_temp("weapon"))                                         
        {                                                                       
 if((string)ob->query("skill_type") != "unarmed")
            return   notify_fail("������ֲ��ܽ�[31m������[0m����˫��֮��!!\n");                      
        }                                                                     
        if(me->query("force")<500)                                            
            return notify_fail("�������������\n");              
        if(me->query("kee")<180)                                      
            return notify_fail("�����������\n");                
                                                                                
        if(!me->is_fighting(target))      
        {                                                                       
            tell_object(me,"[31mѪ������[0mΨ��ս���в���ʹ�á�\n");
            return 1;
        }                                                                       
        message_vision("\tֻ��$N���Ե�[31mѪ��ɫ����[0mԽ��ԽŨ��!!\n\t֮��$N���һ��, [31m���ھ�[0m��Ȼ����˫��֮��!!\n\n",me,target);
        message_vision("$N˫��һ����������[31m��Ѫ�����ġ�[0m, �����˵�ȫ����Χ������[31m������[0m��\n",me,target);                 
                                                                                
        me->add("kee",-(hurt_value/20));
        me->add("force",-(hurt_value/4));
        if(70>random(100))
        {                                                                       
        message_vision("$n��ȫ����Χ�ص��ܲ�͸�磬��ͼ������һ��������[31m������[0m���л��ޣ��Ա��������ƣ���ʱ���ȵ�Ѫ�����$n��ȫ����\n",me,target);                                                                   
        message_vision( NOR,me);                                        
        target->receive_damage("kee",hurt_value);
        target->add("force",-hurt_value/5);
        COMBAT_D->report_status(target);                                
        }                                                                       
        else                                                                    
        {                                                                         
        message_vision("$n��ȫ���������[31mѪ������[0m���������족���顱֮�������ڶ������ֹ���$N������������ˡ�\n",me,target);
        message_vision( NOR,me);                                        
        target->receive_damage("kee",hurt_value/10);
        target->add("force",-hurt_value/12);
        COMBAT_D->report_status(target);                                
        }                                                                        
        message_vision("[31m��Ѫ�����ġ�[0mʹ����$N�����������𡢾�����˳��$N���������ڵ���Ϣ����\n",me,target); 
     me->start_busy(1);
        if(lv1 < 150) function_improved("blood",random(500));
        message_vision( NOR,me);                                                
        return 1;                                                               
}                                                                               
