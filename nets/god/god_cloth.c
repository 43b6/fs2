// Qc by Anmy 98/7/6
#include <armor.h>
#include <ansi.h>
inherit CLOTH;
object user;
void create()
{
        set_name(""HIR"□HIW"□HIR"□HIW"□HIR"□HIW"□HIR"□HIW"□NOR"",({"bird_cloth","cloth"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "件");
                set("no_put",1);
                set("no_give",1);
                set("no_sell",1);
                set("no_auc",1);
   set("no_get",1);
                set("no_drop",1);
                set("material","gem");
                set("armor_prop/armor",20);
                set("armor_prop/parry",10);
                set("armor_prop/dodge",5);
                set("armor_prop/move",5);
                
        }
        setup();
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
   message_vision("$N将"HIR"□HIW"□HIR"□HIW"□HIR"□HIW"□HIR"□HIW"□NOR"往身上一穿，"HIR"□HIW"□HIR"□HIW"□HIR"□HIW"□HIR"□HIW"□NOR"瞬时飘出团团云雾将$N笼罩。\n",user);
   set_heart_beat(1);
 }
}

void heart_beat()
{
	if( !user ) return;
 if( user->is_fighting() && query("equipped"))
{
 if( random(100) > 80)
   {
     user->receive_curing("kee",300);
     user->receive_heal("kee",300);
message_vision(HIW"羽衣所散出的云雾慢慢的将$N的伤口愈合了.\n"NOR,user);
     }
       }
return;
   }
