// white1.c                                                                   

#include <ansi.h>                                                               
inherit F_FUNCTION;                                                             
inherit SSERVER;                                                                

int age=this_player()->query("age",1);
int lv1=this_player()->query_function("white1",1);
int lv=this_player()->query_skill("superforce",1);
int hurt_value=lv1*(age/4)+lv;


int perform(object me, object target)                                           
{    
        string msg;                                                             
        object ob;                                                              
        string *name;

      if( !target ) target = offensive_target(me);                            
                                                                               
      if(query_function("white") <= 20  )                                                                
          return notify_fail("��İ׷������Ĳ������죬�޷����˳����ư�Ʈ������������������\n");      
      if( me->query_skill("superforce",1) < 50 )             
          return notify_fail("����챦���ķ��Ļ����δ�㹻��\n");       
                                                                                
      if(!(ob=me->query_temp("weapon")))                                        
        { if(me->query_temp("secondary_weapon"))                                
                 return notify_fail("�㲻�������޷�ʹ��[37;40m�����Ƶ�[0m�ģ���\n");}                       
        if(ob=me->query_temp("weapon"))                                         
        {                                                                       
         if((string)ob->query("skill_type") != "unarmed")                       
                  return notify_fail("�㲻�������޷�ʹ��[37;40m�����Ƶ�[0m��!\n");                      
         }
          if(me->query("force")<150)                                            
                           return notify_fail("�������������\n");              
                  if(me->query("kee")<100)                                      
                           return notify_fail("�����������\n");                
                                                                                
        if(!me->is_fighting())                                                  
        {                                                                       
                tell_object(me,"[37;40m�����Ƶ�[0mΨ��ս���в���ʹ�á�\n");              

                return 0;                                                       
        }                                                                       
        message_vision("\t\t$N���ϵ����ﱻ���͵���ͬ����һ�㣬������ͬ�����ƣ�$N��������û��\n
                ��Ʈ��������֮��!!��������!! \n\n",me,target);

        message_vision("\t\t$N��ȭ�ҽ�ָ������ǿ�������Ϯ�����£�[37;40m�����Ƶ�[0mӦ��������\n",me,target);                 
                                                                                
            me->add("kee",-(hurt_value/10));                                                 
            me->add("force",-(hurt_value/2));
        if(random(me->query_skill("superforce")+20)>random(target->query_skill("dodge")))                                                                          
        {                                                                       
                message_vision("\t\t$n���۾���ǿ��ε��Ų�������[36m����֮��[0mֻ���յ�ȫ�գ���Ѫ�������˺����ۣ���\n",me,target);                                                                   
                message_vision( NOR,me);                                        
                target->receive_damage("kee",hurt_value);
                COMBAT_D->report_status(target);                                
        }                                                                       
        else                                                                    
      {                                                                         
                message_vision("$n�������㣬��ܿ���[37;40m�����Ƶ�[0mǿ��Ĺ���������ȴ��ʱ�޷��ָ�������\n",me,target);
                message_vision( NOR,me);                                        
                target->start_busy(3);
                COMBAT_D->report_status(target);                                
       }                                                                        
        message_vision("[37;40m�������Ƶء�[0mʹ����$N���ƴ���������֮�ھ����಻��",me,target); 
        me->start_busy(1);                                                      
        function_improved("white1",random(me->query("force")/25));          
        message_vision( NOR,me);                                                
        return 1;                                                               
  }                                                                             
                                                                             
