#include <combat.h>
#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
inherit F_CLEAN_UP;
int update_condition(object me, int duration)
{
     int funlvl=me->query_function("snow-powerup");    
  if( !living(me) )
   {
     message("vision",me->name() + "������˪�����ĺ�����������ɢ��....",
     environment(me), me);
   }
  else if( duration > 9)
   {
     tell_object(me,HIW"��е������Ѩ��һ�������ž�������˪����������罭�Ӿ��ᣡ\n"NOR);
     message("vision", me->name() + 
HIW"ȫ��Ʒ���һ�����˵ĺ������·�Ҫ�����ܵĿ������ᣡ\n"NOR,
     environment(me), me);
     if((int)me->query("force")<2*(int)me->query("max_force"))
           me->add("force",100);
    }
  else if( duration > 7 )
     {
      tell_object(me, HIC"��о���֫���౻��˪�澢�ĺ��������ţ�ȫ�����³����ޱȣ�\n"NOR);
      message("vision", me->name() + HIC"��ȫ�����±�һ�ɵ���ɫ��������Χ�ţ�\n"NOR,
      environment(me), me);
       if((int)me->query("force")<2*(int)me->query("max_force"))
           me->add("force",50);
      }
    else if( duration > 5 )
     {
      tell_object(me, HIC"��Ļ��������������ϵ�ע��˫���У��о��ƺ������˾�����\n"NOR);
      message("vision", me->name() + HIC"��˫������ɢ�������˵ĺ�����\n"NOR,
      environment(me), me);
       if((int)me->query("force")<2*(int)me->query("max_force"))
           me->add("force",50);
      }
     else if( duration > 3)
     {
         tell_object(me,CYN"��е���˪�澢��������˫������������....\n"NOR);
         message("vision",me->name() + CYN"���ϵ��澢��������ɢ��ȫ��...\n"NOR,	
         environment(me),me);
         if((int)me->query("force")<2*(int)me->query("max_force"))
         me->add("force",20);	
     }
      else if( duration > 1)
      {
       tell_object(me, CYN"��е�������������ת���˾�ͨ���ޱȣ�\n"NOR);
       message("vision", me->name() + CYN"�Ļ�����������������˫��... \n"NOR,
       environment(me), me);
       if((int)me->query("force")<2*(int)me->query("max_force"))
           me->add("force",10);
      }
  if( duration < 1 )
  {      
      object weapon=me->query_temp ("weapon");
      me->set("force_factor", 10); 
      tell_object(me,HIY"���˵���˪�澢��ʼ��ɢ�ˡ�\n"NOR);
      me->delete("powerup_flag");
      return 0;
   }
        if(me->query_skill_mapped("unarmed")!= "snow-martial") 
     {
          write("������ʹ�ñ�����ѧ���������ڵ���˪�澢���ܿ�����ʹ��������\n");
//Ϊ���ⲻ����ʱ�������ʼ�����жϡ�     
          if(me->query("kee")>200)  me->add("kee",-200);
          me->apply_condition("cold",random(25) +((int)me->query_skill("snowforce", 1)/5));
          me->apply_condition("star-stial",random(30));
          duration=1;
     }
   if(me->query_skill_mapped("parry")!= "snow-kee") 
   {
     write("������ûʹ�û����������������ڵ���˪�澢���ܿ�����ʹ��������\n");
     if(me->query("kee")>300)  me->add("kee",-300);
     me->apply_condition("cold",random(30) +((int)me->query_skill("snowforce", 1)/5));
     me->apply_condition("star-stial",random(10));
     duration=1;
   }
   me->apply_condition("powerup",duration-1);
   me->add("force_factor",1);
  if(funlvl < 100)
  function_improved("snow-powerup",20*random(duration)+
  random(me->query("max_force")/20));
  return 1;
}

