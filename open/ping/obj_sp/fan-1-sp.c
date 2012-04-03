#include <ansi.h>
inherit NPC;
object keep_owner,who;
int my_int,my_per,my_literate,sp_rate;
void create()
{
   set_name("fan-1���ع�",({"fan-1-sp"}));
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
      keep_owner->delete_temp("_call_out_fan");
      destruct(this_object());
      return;
    }  
   keep_owner = me;
   my_int = keep_owner->query("int",1);
   my_per = keep_owner->query("per",1);
   my_literate = keep_owner->query("literate",1);
   if(my_literate > 60)
     my_literate = 60;
   sp_rate = my_int + my_per + my_literate;
   return;
}
void heart_beat()
{ 
  object _ob;
  int mob_kee,have_fan;
  _ob = this_object();
  if( !objectp(keep_owner) )
      destruct(_ob);
  have_fan = keep_owner->query_temp("fan",1);
  if( !keep_owner->is_fighting() || !have_fan )   
  {
     keep_owner->delete_temp("_call_out_fan");
     destruct(_ob);
  }
  if( sp_rate > random(200) )
  { 
    message_vision(HIB+"а�����Ȼ���һ������,����$N������!!!\n"+NOR,who);
    mob_kee = who->query("kee",1);
    mob_kee = mob_kee - my_int - my_per;
    who->set("kee",mob_kee);
  }
}
