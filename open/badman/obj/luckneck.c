#include <ansi.h>
#include <armor.h>
inherit NECK;
inherit F_SAVE;
inherit F_AUTOLOAD;
object user;
void create()
{
  set_name( "幸运炼条",({"lucky neck","lucky","neck"}));
  set_weight(3000);
  if( clonep() )
                set_default_object(__FILE__);
        else {
  set("long","一条泛着蓝光，看来有不可思议力量的项炼。\n");
  set("unit", "条");
  set("material","steal");
  set("value",10000);
  set("no_sell", 1);
  set("no_auc",1);
  set("no_give",1);
  set("no_drop",1);
  set("no_get",1);
  set("armor_prop/armor", 10);
 }
  
  setup();
}

void init()
{
  add_action("do_wear","wear");
  add_action("do_remove","remove");
}

int do_wear(string str)
{

     ::wear();
     if( query("equipped") )
     {
      user = this_player();
      message_vision("[1;36m一道蓝光笼罩着你，你感到将有幸运的事情发生！[0m\n",user);
      user->add("kar",5);
      user->add("max_force",-500);
     }
}

int do_remove(string str)
{
   if(str=="ruby_ring" || str=="all")
     if( query("equipped") )
     {
   message_vision("[1;37m你除掉了颈上的项炼，那种幸运的感觉已不再！[0m\n",user);
      user->add("kar",-5);
      user->add("max_force",500);
     }
}
