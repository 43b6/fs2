#include <ansi.h>                                                               
inherit F_FUNCTION;                                                             
inherit SSERVER;                                                                
                                                                                
int perform(object me, object target)                                           
{
    object ob;
    int age=me->query("age",1);
    int lv1=me->query("functions/blood/level");
    int lv=me->query_skill("superforce",1);
    int hurt_value=lv1*age/4+lv*age/4;
	if(me->query("class")!="prayer")
          return notify_fail("���ְҵ�޷�ʹ�ô˼��ܡ�\n");
 if( hurt_value > 3000) hurt_value=3000;
                                                                                
        if( !target ) target = offensive_target(me);                            
      if(!target) return notify_fail("���Ҳ�������!!\n");
                                                                                
        if( lv1 < 105  )
            return notify_fail("���[31mѪ��[0m���Ĳ������죬�޷�ʹ��[31m���޻�[0m����105����\n");      
        if( me->query_skill("superforce",1) < 250 )             
            return notify_fail("����챦���ķ��Ļ����δ�㹻����250����\n");       
                                                                                
        if(!(ob=me->query_temp("weapon")))                                        
        { if(me->query_temp("secondary_weapon"))                                
            return notify_fail("ʹ��[31m���޻�[0m�ǲ���Ҫ������!!\n");}                       
        if(ob=me->query_temp("weapon"))                                         
        {                                                                       
 if((string)ob->query("skill_type") != "unarmed")
            return   notify_fail("ʹ��[31m���޻�[0m����Ҫȭ�Ź����!!\n");                      
        }                                                                     
        if(me->query("force")<500)                                            
            return notify_fail("�������������\n");              
        if(me->query("kee")<180)                                      
            return notify_fail("�����������\n");                
                                                                                
        if(!me->is_fighting(target))         
        {                                                                       
            tell_object(me,"[31m���޻�[0mΨ��ս���в���ʹ�á�\n");
            return 1;
        }                                                                       

        message_vision("\t$Nε������տ�ʼ���Ѫ��ɫ, ��Բʮ��֮����ͬ����[31m�����޵���[0m��!!\n\t$N���Ʒ��؆��Ż��챦���������ھ�, �����[31mѪ������[0mԽ��ԽŨ��!!\n\t[31mѪ�����[0mӦ��������!!\n\n",me,target);
        message_vision("$N���:�������ʹ�� [31m���޻�[0m��!!ȥ��������!!\n\n",me,target);
        me->add("kee",-(hurt_value/20));
        me->add("force",-(hurt_value/4));
        if(70>random(100))
        {                                                                       
        message_vision("$n���޿ɱܣ���ʱ�����ٶ�����[31mѪ�����[0m���һ�ţ�������������ʹ������˺���ѷΣ�\n",me,target);                                                                   
        message_vision( NOR,me);                                        
  target->receive_damage("kee",hurt_value);
        target->add("force",-hurt_value/2);
        COMBAT_D->report_status(target);                                
        }                                                                       
        else                                                                    
        {                                                                         
        message_vision("$n�˹���������Ȼ���ɱ�[31mѪ�����[0m������룬����$n���ڹ���Ϊ����, ������Ȼ�Ǽ��һ��С��!!��\n",me,target);  
        target->receive_damage("kee",hurt_value/10);
        target->add("force",-hurt_value/10);
        COMBAT_D->report_status(target);                                
        }                                                                        
        message_vision("[31m�����޻ڡ�[0mʹ����$N���������[36m����Ѩ[0m��Ȼ��ʹ����Ȼ���ڵ�\n",me,target); 
   me->start_busy(1);
        if(lv1 < 150) function_improved("blood",random(500));
        message_vision( NOR,me);                                                
        return 1;                                                               
}                                                                               

