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
     message("vision",me->name() + "身旁凌霜气劲的寒劲渐渐的消散了....",
     environment(me), me);
   }
  else if( duration > 9)
   {
     tell_object(me,HIW"你感到周身大穴无一不充满着劲力，寒霜般的气劲有如江河决提！\n"NOR);
     message("vision", me->name() + 
HIW"全身逼发出一股摄人的寒气，仿佛要将四周的空气凝结！\n"NOR,
     environment(me), me);
     if((int)me->query("force")<2*(int)me->query("max_force"))
           me->add("force",100);
    }
  else if( duration > 7 )
     {
      tell_object(me, HIC"你感觉四肢百赅被凌霜奇劲的寒劲充塞着，全身上下畅快无比！\n"NOR);
      message("vision", me->name() + HIC"的全身上下被一股淡蓝色的气劲包围着！\n"NOR,
      environment(me), me);
       if((int)me->query("force")<2*(int)me->query("max_force"))
           me->add("force",50);
      }
    else if( duration > 5 )
     {
      tell_object(me, HIC"你的护身寒气的气劲不断地注入双手中，感觉似乎充满了劲道！\n"NOR);
      message("vision", me->name() + HIC"的双手隐隐散发出逼人的寒气！\n"NOR,
      environment(me), me);
       if((int)me->query("force")<2*(int)me->query("max_force"))
           me->add("force",50);
      }
     else if( duration > 3)
     {
         tell_object(me,CYN"你感到凌霜奇劲慢慢的由双手延流至气海....\n"NOR);
         message("vision",me->name() + CYN"手上的奇劲慢慢的扩散至全身...\n"NOR,	
         environment(me),me);
         if((int)me->query("force")<2*(int)me->query("max_force"))
         me->add("force",20);	
     }
      else if( duration > 1)
      {
       tell_object(me, CYN"你感到寒气在手上流转，运劲通畅无比！\n"NOR);
       message("vision", me->name() + CYN"的护身寒气渐渐地凝聚在双手... \n"NOR,
       environment(me), me);
       if((int)me->query("force")<2*(int)me->query("max_force"))
           me->add("force",10);
      }
  if( duration < 1 )
  {      
      object weapon=me->query_temp ("weapon");
      me->set("force_factor", 10); 
      tell_object(me,HIY"你运的凌霜奇劲开始崩散了。\n"NOR);
      me->delete("powerup_flag");
      return 0;
   }
        if(me->query_skill_mapped("unarmed")!= "snow-martial") 
     {
          write("由于你使用别派武学，导致体内的凌霜奇劲不受控制致使身受内伤\n");
//为避免不够气时会死亡故加入此判断。     
          if(me->query("kee")>200)  me->add("kee",-200);
          me->apply_condition("cold",random(25) +((int)me->query_skill("snowforce", 1)/5));
          me->apply_condition("star-stial",random(30));
          duration=1;
     }
   if(me->query_skill_mapped("parry")!= "snow-kee") 
   {
     write("由于你没使用护身气劲，导致体内的凌霜奇劲不受控制致使身受内伤\n");
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

