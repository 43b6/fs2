#include <ansi.h>                                                               
inherit F_FUNCTION;                                                             
inherit SSERVER;                                                                

int perform(object me, object target)                                           
{
    object ob;
    int age=me->query("age",1);
    int lv1=me->query("functions/goldsun/level");
    int lv=me->query_skill("superforce",1);
    int hurt_value=lv1*age/4+lv*age/10;
	if(me->query("class")!="prayer")
          return notify_fail("���ְҵ�޷�ʹ�ô˼��ܡ�\n");
    if( hurt_value > 900) hurt_value=900;
                                                                                
        if( !target ) target = offensive_target(me);                            
        if(!target) return notify_fail("���Ҳ�������!!\n");
                                                                                
        if( lv1 < 60  )
            return notify_fail("���[33m����[0m���Ĳ������죬�޷����˳�[33m����[0m�İ�������60����\n");
        if( me->query_skill("superforce",1) < 170 )             
            return notify_fail("����챦���ķ��Ļ����δ�㹻����170����\n");
                                                                                
        if(!(ob=me->query_temp("weapon")))
        {
            if(me->query_temp("secondary_weapon"))
            return notify_fail("�㲻�������޷�ʹ��[33m˫�Ǹ���[0m�ģ���\n");
        }
        if(ob=me->query_temp("weapon"))                                         
        {                                                                       
            if((string)ob->query("skill_type") != "unarmed")
            return notify_fail("�㲻�������޷�ʹ��[33m˫�Ǹ���[0m��!\n");
        }
        if(me->query("force")<400)                                            
            return notify_fail("�������������\n");
        if(me->query("kee")<140)                                      
            return notify_fail("�����������\n");
                                                                                
        if(!me->is_fighting(target))        
        {                                                                       
            tell_object(me,"[33m˫�Ǹ���[0mΨ��ս���в���ʹ�á�\n");
            return 1;
        }                                                                       
        message_vision("\t$Nȫ��[33m�������[0m���⻪��Ŀ��[33m��ɫ������[0m���������ƣ�\n\t$N�����˷��������ɸߵİ����!!��â������������!!\n\n",me,target);
        message_vision("$N˫ȭһ�գ�����[33mҫ�۽��[0m��۳��򣬺�Х��������������˫������������Ŀ��ֱ�Ƶ���������·��\n",me,target);
                                                                                
        me->add("kee",-(hurt_value/20));
        me->add("force",-(hurt_value/4));
        if(80>random(100))
        {                                                                       
        message_vision("$n�����ֵ����Ա��������������У���ʱ�����޴棬ʬ����أ���\n",me,target); 
        message_vision( NOR,me);                                        
        target->receive_damage("kee",hurt_value);
        target->add("force",-hurt_value/4);
        COMBAT_D->report_status(target);                                
        }                                                                       
        else                                                                    
        {                                                                         
        message_vision("$n�������ܣ��ܿ���[33m˫�Ǹ���[0m����Ĺ���������[33m���[0m������潫����ը�˿�����\n",me,target);
        message_vision( NOR,me);                                        
        target->receive_damage("kee",hurt_value/12);
        target->add("force",-hurt_value/14);
        COMBAT_D->report_status(target);                                
        }                                                                        
        message_vision("[33m��˫�Ǹ��¡�[0mʹ����$N��¶Ц�ݣ��ƺ���������еĹ�������",me,target); 
        me->start_busy(1);
        if(lv1 < 150) function_improved("goldsun",random(500));
        message_vision( NOR,me);                                                
        return 1;                                                               
}
                                                                             
