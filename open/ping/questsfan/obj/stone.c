//虹晶矿石------by dhk 2000.4.22
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""HIR"虹"HIC"晶"HIY"矿"HIG"石"NOR"", ({ "hon diamond stone","stone" }) );
    set_weight(100);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "这种矿石名曰‘虹晶’是当年由一代武器大师─北胜天，历经千辛万苦\n"
                  +"走片大江南北所找到的奇石。它若制成武器能百分百的传递使用者的内\n"
                  +"力，做最有效的攻击。它产于晶谷。\n");
       set("unit", "块");
       set("value", 1500000000);
       set("no_give",1);
       set("no_auc",1);
       set("no_sell",1);
       set("no_drop",1);
       
      }
    setup();
}
