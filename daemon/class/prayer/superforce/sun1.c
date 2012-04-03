#include <ansi.h>                                                               
inherit F_FUNCTION;                                                             
inherit SSERVER;                                                                

int perform(object me, object target)                                           
{
    object ob;
    int age=me->query("age",1);
    int lv1=me->query("functions/goldsun/level");
    int lv=me->query_skill("superforce",1);
    int hurt_value=lv1*age/4+lv*age/12;
    if( hurt_value > 800) hurt_value=800;
                                                                                
        if( !target ) target = offensive_target(me);                            
        if( !target ) return notify_fail("���Ҳ�������!!\n");
        if( lv1 < 30  )
            return notify_fail("���[33m����[0m���Ĳ������죬�޷����˳�[33m����[0m�İ�������30����\n");      
        if( me->query_skill("superforce",1) < 150 )             
            return notify_fail("����챦���ķ��Ļ����δ�㹻����150����\n");       
                                                                                
        if(!(ob=me->query_temp("weapon")))                                        
        {
            if(me->query_temp("secondary_weapon"))
            return notify_fail("�㲻�������޷�ʹ��[33m�𽣴���[0m�ģ���\n");
        }
        if(ob=me->query_temp("weapon"))                                         
        {                                                                       
        if((string)ob->query("skill_type") != "unarmed")                       
            return notify_fail("�㲻�������޷�ʹ��[33m�𽣴���[0m��!\n");                      
        }
        if(me->query("force")<400)                                            
            return notify_fail("�������������\n");              
        if(me->query("kee")<140)                                      
            return notify_fail("�����������\n");                
                                                                                
        if(!me->is_fighting(target))    
        {                                                                       
            tell_object(me,"[33m�𽣴���[0mΨ��ս���в���ʹ�á�\n");
            return 1;
        }                                                                       
        message_vision("\t$Nȫ��[33m�������[0m���⻪��Ŀ��[33m��ɫ������[0m���������ƣ�\n\t$N�����˷��������ɸߵİ����!!��â������������!! \n\n",me,target);
        message_vision("$N����һָ��һ��ҫ�۽�⼤����������ǰ���[33m�𽣴���[0m����������������գ�������ǧ��\n",me,target);                 
                                                                                
        me->add("kee",-(hurt_value/20));
        me->add("force",-(hurt_value/4));
        if(80>random(100))
        {                                                                       
        message_vision("$n�����ֵ����Ա��Ե���[33m�����ھ�[0m���У���ʱ[33m��ⱬ��[0m�����ķ����䣡��\n",me,target); 
        message_vision( NOR,me);                                        
        target->receive_damage("kee",hurt_value);
        target->add("force",-hurt_value/4);
        COMBAT_D->report_status(target);                                
        }                                                                       
        else                                                                    
        {                                                                         
        message_vision("$n�����ֵ�����ܿ���[33m�𽣴���[0m����Ĺ�������������ȴ���Ǳ��䴩�ˡ�\n",me,target); 
        message_vision( NOR,me);                                        
                target->receive_damage("kee",hurt_value/13);
                target->add("force",-hurt_value/16);
        COMBAT_D->report_status(target);                                
        }                                                                        
        message_vision("[33m���𽣴��ơ�[0mʹ����$N��¶Ц�ݣ��ڰ����������$n",me,target); 
        me->start_busy(1);
        if(lv1 < 150) function_improved("goldsun",random(500));
        message_vision( NOR,me);                                                
        return 1;                                                               
}
                                                                             
