#include <ansi.h>
inherit NPC;
object keep_owner,who;
int my_literate,sp_rate;
void create()
{
   set_name("ring-2���ع�",({"ring-2-sp"}));
   set("short","          ");
   set("long","");
   set("age", 10);
   set("combat_exp", 100);
   set("attitude","peaceful");
   setup();
   set_heart_beat(1);
}
void invocation(object me,string str)
{   
   if(!str || !objectp(who = present( lower_case(str), environment(me) )) )
   {  
      keep_owner->delete_temp("_c_o_ring_2");
      destruct(this_object());
      return;
    }  
   keep_owner = me;
   my_literate = keep_owner->query("literate",1);
   if(my_literate > 40)
     my_literate = 40;
   sp_rate = 100 - my_literate/2;
   return;
}
void heart_beat()
{ 
  object _ob;
  int have_ring_2;
  _ob = this_object();
  if( !objectp(keep_owner) )
      destruct(_ob);
  have_ring_2 = keep_owner->query_temp("ring_2",1);
  if( !keep_owner->is_fighting() || !have_ring_2 )   
  {
     keep_owner->delete_temp("_c_o_ring_2");
     destruct(_ob);
  }
  if( random(110) > sp_rate )
  { 
    message_vision(HIC+"һ�󺮷��Ա�ѩ�����,˲���$N������!!!\n"+NOR,who);
    who->start_busy(3);
  }
  return;
}
