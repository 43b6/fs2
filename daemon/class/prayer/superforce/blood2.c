#include <ansi.h>                                                               
inherit F_FUNCTION;                                                             
inherit SSERVER;                                                                
                                                                                
int perform(object me, object target)                                           
{
    object ob;
    int age=me->query("age",1);
    int lv1=me->query("functions/blood/level");
    int lv=me->query_skill("superforce",1);
    int hurt_value=lv1*age/4+lv*age/6;
  if( hurt_value > 2000) hurt_value=2000;
                                                                                
        if( !target ) target = offensive_target(me);                            
        if(!target) return notify_fail("���Ҳ�������!!!\n");
                                                                                
        if( lv1 < 70 )
           return notify_fail("���[31mѪ��[0m���Ĳ������죬�޷����˳�[31m��Ѫ��[0m����70����\n");      
        if( me->query_skill("superforce",1) < 220 )             
           return notify_fail("����챦���ķ��Ļ����δ�㹻����220����\n");       
                                                                                
        if(!(ob=me->query_temp("weapon")))                                        
        {
            if(me->query_temp("secondary_weapon"))
            return   notify_fail("��������ô��[31m��Ѫ��[0m��������?\n");
        }
        if(ob=me->query_temp("weapon"))                                         
        {                                                                       
 if((string)ob->query("skill_type") != "unarmed")
            return   notify_fail("��������ô��[31m��Ѫ��[0m��������?\n");                      
        }                                                                     
        if(me->query("force")<500)                                            
            return notify_fail("�������������\n");              
        if(me->query("kee")<180)                                      
            return notify_fail("�����������\n");
                                                                                
        if(!me->is_fighting(target))        
        {                                                                       
            tell_object(me,"[31m��Ѫ��[0mΨ��ս���в���ʹ�á�\n");
            return 1;
        }                                                                       
        message_vision("\t\t$N����[31mѪ�������[0m�������,\n\t\tֻ��$N���Ե�[31mѪ��ɫ����[0mԽ��ԽŨ��!!\n\t\t$N���һ��,Ŭ����������������֮��, �γ���һ��\n\t\tֱ�������[31mѪ��[0m!!!\n\n",me,target);
        message_vision("$N�˾���˫�ƣ�ʹ��һ��,[31m��Ѫ��[0m�����˿񱼶�ȥ!\n",me,target);                 
                                                                                
        me->add("kee",-(hurt_value/20));
        me->add("force",-(hurt_value/4));
        if(70>random(100))
        {                                                                       
        message_vision("$nһ������Ѿ�����������������Ӳ��������[31mѪ��[0m������[31mѪ������[0m̫�ͣ����������������飬��ʱ���ȵ�Ѫ�����$n��ȫ��ѪҺ���Ʊ���������!\n",me,target);
        target->receive_damage("kee",hurt_value);
        target->add("force",-hurt_value/6);
        COMBAT_D->report_status(target);                                
        }                                                                       
        else                                                                    
        {                                                                         
        message_vision("$n��ȫ������������ǽ����[0mѪ������[0m������[��]��һ����������������������Ѫ��\n",me,target);                                                                            
        message_vision( NOR,me);                                        
        target->receive_damage("kee",hurt_value/10);
        target->add("force",-hurt_value/10);
        COMBAT_D->report_status(target);                                
        }                                                                        
        message_vision("[31m����Ѫ��[0mʹ����$N������������[36m�Ŀ�Ѩ[0m��Ȼ��ʹ��$N��Ȼ�����ڵ�\n",me,target); 
     me->start_busy(1);
        if(lv1 < 150) function_improved("blood",random(500));
        message_vision( NOR,me);                                                
        return 1;                                                               
}                                                                               
