#include <ansi.h>                                                               
inherit F_FUNCTION;                                                             
inherit SSERVER;
                                                                
int perform(object me, object target)                                           
{
    object ob;
    int age=me->query("age",1);
    int lv1=me->query("functions/black/level");
    int lv=me->query_skill("superforce",1);
    int hurt_value=lv1*age/4+lv*age/16;
	if(me->query("class")!="prayer")
          return notify_fail("���ְҵ�޷�ʹ�ô˼��ܡ�\n");
    if( hurt_value > 700) hurt_value=700;
                                                                                
        if( !target ) target = offensive_target(me);                            
        if( !target ) return notify_fail("���Ҳ�������!!\n");
                                                                                
        if( lv1 < 60  )
        return notify_fail("���[30m������[0m���Ĳ������죬��Ҫ������ 60 ����\n");      
        if( me->query_skill("superforce",1) < 90 )             
        return notify_fail("����챦���ķ��Ļ����δ�㹻����Ҫ90����\n");       
                                                                                
        if(!(ob=me->query_temp("weapon")))                                        
        {
            if(me->query_temp("secondary_weapon"))
            return notify_fail("�㲻�������޷�ʹ��[30m���������[0m�ģ���\n");
        }
        if(ob=me->query_temp("weapon"))                                         
        {                                                                       
            if((string)ob->query("skill_type") != "unarmed")
            return notify_fail("�㲻�������޷�ʹ��[30m���������[0m��!\n");                      
        }
        if(me->query("force")<200)                                            
            return notify_fail("�������������\n");              
        if(me->query("kee")<140)                                      
            return notify_fail("�����������\n");                
                                                                                
        if(!me->is_fighting(target))                                                  
        {                                                                       
            tell_object(me,"[30m���������[0mΨ��ս���в���ʹ�á�\n");
            return 1;
        }                                                                       
        message_vision("\t$N���ڵ����������̹ſ����һ�㣬�����Ҵܣ�\n\t�ƺ���Ҫ�������, ֻ�н���һ�������䵽���˫�Ƽ���!!\n\tֻ����˫�ֵĽ��Ⱪ��������֮��!!\n",me,target);
        message_vision("$N˫ȭ��������������ֻ�����²��죬ǿ��[30m���������[0mЮ�ź�Ȼ֮������˶�ȥ .[0m��\n",me,target);
                                                                                
        me->add("kee",-hurt_value/10);
        me->add("force",-hurt_value);
        if(80 > random(100))
        {                                                                       
        message_vision("$n��˫����[30m���������[0m�ཻ�Ͼ���ȴ�����ۻ�Ļ����ھ����˫�ۣ��ƾ�������������Ͽ����ƶǣ���\n",me,target);                                   
        message_vision( NOR,me);                                        
        target->receive_damage("kee",hurt_value);
        target->add("force",-hurt_value/10);
        COMBAT_D->report_status(target);                                
        }                                                                       
        else                                                                    
        {                                                                         
        message_vision("$n�������һԾ��������[30m���������[0m�Ŀ�ɽ�ѱ���ɱ������\n",me,target); 
        message_vision( NOR,me);                                        
        target->receive_damage("kee",hurt_value/14);
        target->add("force",-hurt_value/18);
        COMBAT_D->report_status(target);                                
        }                                                                        
        message_vision("[34m����������ơ�[0mʹ����$N���������˽�$n����������",me,target); 
        me->start_busy(1);
        if(lv1 < 100) function_improved("black",random(500));
        message_vision( NOR,me);                                                
        return 1;                                                               
}
                                                                             
