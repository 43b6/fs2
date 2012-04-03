#include <ansi.h>
#include <armor.h>
inherit EQUIP;
object user;
int kar;
void create()
{
set_name("[1;33m□[1;37m□[1;33m□[1;37m□[1;33m□[1;37mP[1;33m□[1;37m□[0m",({"purple neck","neck"}));
   set_weight(5000);
   if ( clonep() )
       set_default_object(__FILE__);
   else {
   set("long","这是一件由天上诸神采集先天灵气所炼造而成的仙炼。\n");
   set("unequip_msg", "$N将$n脱掉,$N身上的$n所散发的灵气随之逝去。\n");
   set("armor_prop/armor",7);
   set("armor_prop/dodge",3);
   set("unit", "条");
   set("armor_type", "neck");
   set("value", 30000);
   set("no_sell",1);
   set("no_auc",1);
   set("no_drop",1);
     }
   setup();
}
int query_autoload()
{
 return 1;
}
int init()
{
    add_action("do_wear","wear");
}
int do_wear(string str)
{
::wear();
 if( query("equipped") )
 {
   user = this_player();
message_vision("$N将[1;33m□[1;37m□[1;33m□[1;37m□[1;33m□[1;37mP[1;33m□[1;37m□[0m穿上，[1;33m□[1;31m□[1;33m□[1;31m□[1;33m□[1;31mP[1;33m□[1;31m□[0m的仙气贯注在$N身中。\n",user);
   kar=user->query("kar");
   set_heart_beat(1);
 }
}
void heart_beat()
{
  object *enemy,who;
  int i,dodge;
  if( !objectp(user) )
  { set_heart_beat(0);
     return;
  }
  if( user->is_fighting() && query("equipped") )
  {
    if( random(kar+70) > 70)  // 运气高,机率高
    {
     user->receive_curing("kee",30);
     user->receive_heal("kee",30);
message_vision(HIY"[1;33m□[1;37m□[1;33m□[1;37m□[1;33m□[1;37mP[1;33m□[1;37m□[0m"HIY"散出淡淡的仙气,$N在仙气沐浴下,$N所受的创伤恢复了.\n"NOR,user);
      }
  }
  return;
}
