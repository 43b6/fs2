#include <ansi.h>                                                               
inherit F_FUNCTION;                                                             
inherit SSERVER;                                                                

int perform(object me, object target)                                           
{
    object ob;
    int age=me->query("age",1);
    int lv1=me->query("functions/black/level");
    int lv=me->query_skill("superforce",1);
    int hurt_value=lv1*age/4+lv*age/18;
    if( hurt_value > 600) hurt_value=600;
                                                                                
        if( !target ) target = offensive_target(me);                            
                                                                                
        if(lv1<30)
  return notify_fail("���[30m������[0m���Ĳ������죬��Ҫ������ 30 ����\n");
        if( me->query_skill("superforce",1) < 80 )             
            return notify_fail("����챦���ķ��Ļ����δ���ң���Ҫ80����\n");                                                
        if(!(ob=me->query_temp("weapon")))                                        
        {
            if(me->query_temp("secondary_weapon"))
            return notify_fail("�㲻�������޷�ʹ�û����챬ȭ�ģ���\n");
        }
        if(ob=me->query_temp("weapon"))                                         
        {                                                                       
            if((string)ob->query("skill_type") != "unarmed")
            return notify_fail("�㲻�������޷�ʹ��[30m�����챬ȭ[0m��!\n");                      
        }
        if(me->query("force")<200)                                            
            return notify_fail("�������������\n");              
        if(me->query("kee")<140)                                      
            return notify_fail("�����������\n");                
                                                                                
        if(!me->is_fighting(target))
        {                                                                       
            tell_object(me,"[30m�����챬ȭ[0mΨ��ս���в���ʹ�á�\n");
            return 1;
        }                                                                       
        message_vision("\t$N���ڵ����������̹ſ����һ�㣬�����Ҵܣ�\n\t$N���ջ��챦�������ص������ھ�����һ�������뱾���������Ϊ֮��!!\n\t�ڹ�˲ʱ��������ʮ��!!\n",me,target);
        message_vision("$N�ھ����£�˫ȭ��������������һ��[30m�����챬ȭ[0m˲ʱ���ķ�ը�俪�� ��\n",me,target);
                                                                                
        me->add("kee",-hurt_value/10);
        me->add("force",-hurt_value);
        if(80 > random(100))
        {                                                                       
        message_vision("$n�����[30m�����챬ȭ[0m���к�$nȫ��ľ����������ھ����ˣ�ȭ��͸���������\n",me,target); 
        message_vision( NOR,me);                                        
        target->receive_damage("kee",hurt_value);
        target->add("force",-hurt_value/5);
        COMBAT_D->report_status(target);                                
        }                                                                       
        else                                                                    
        {                                                                         
        message_vision("$n���μ�ת������ȫ��������������[30m�����챬ȭ[0m�ĳ���� .��\n",me,target);
        message_vision( NOR,me);                                        
        target->receive_damage("kee",hurt_value/15);
        target->add("force",-hurt_value/20);
        COMBAT_D->report_status(target);                                
        }                                                                        
        message_vision("�������챬ȭ��ʹ����$N���̷������һԾ���Ż�����",me,target); 
        me->start_busy(1);
        if(lv1 < 100) function_improved("black",random(500));
        message_vision( NOR,me);                                                
        return 1;                                                               
}
                                                                             
