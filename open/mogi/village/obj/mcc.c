#include <ansi.h>
#include <armor.h>

object user;


inherit CLOTH;


void create()
{
         set_name( "ħǄ��" , ({ "daemon cloth","cloth" }) );
         set_weight(500);
         if( clonep() )
                 set_default_object(__FILE__);
         else {
                 set("unit", "��");
                 set("value",5000);
                 set("material", "cloth");
                 set("armor_type", "cloth");
                 set("armor_prop/armor",5);
         }
         setup();
}
void init()
{
  if (this_player()==environment(this_object()))
  {
     add_action("do_wear","wear");
     add_action("do_remove","remove");
     
     user=this_player();
 } 
}

int do_wear(string str)
{ 
  object ob,this;
  string des,des1,des2;
  if(!str) return 0;
  this=this_object();
  if( str != "all")
  {
    if( !objectp(ob = present(str, user)) )
       return notify_fail("������û������������\n");
    if(this != ob) return 0;
  }
  if( !(user->query_temp("bullet_amulet")) && user == environment(this) ) 
  {
    user->set_temp("bullet_amulet",this);
    set_heart_beat(1);
  } 
 return 0;
}


int do_remove(string str)
{
  object ob,this;
  string des,des1,des2;
  if(!str) return 0;  
  this=this_object();
  if( str != "all")
  {
   if( !objectp(ob = present(str, user)) )
      return notify_fail("������û������������\n");
   if(this != ob) return 0;
  }
  if( this==user->query_temp("bullet_amulet") )
  {
    user->delete_temp("bullet_amulet");
    set_heart_beat(0);
  }
  return 0;
}                       

void heart_beat()
{
  int max,now,fce,nfc;
  if(!query("equipped") ) return;
  if(user->query_temp("ghost")) return;
  max = user->query("max_kee")+user->query("max_gin")+user->query("max_sen");
  now = user->query("kee")+user->query("gin")+user->query("sen");
  fce = (int)user->query("max_force");
  nfc = (int)user->query("force");
  if( max > now )
  {
    user->receive_curing("kee",(max-now));
    user->receive_heal("kee",(max-now));
    max = user->query("max_gin");
    user->set("eff_gin",max);
    user->set("gin",max);
  max = user->query("max_sen");
    user->set("eff_sen",max);
  user->set("sen",max);
    max = user->max_food_capacity();
    user->set("food",max);
    max = user->max_water_capacity();
    user->set("water",max);
    user->clear_condition();
    if (nfc < fce) user->set("force",fce);
    if (user->query_temp("unconcious")==1 && random(10) < 7) user->revive();
  }
}  







