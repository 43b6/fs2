#include <weapon.h>                           
#include <ansi.h>

inherit LANCE;
void create()
{           
           seteuid(getuid());
           set_name("龙击",({"dragon hit","hit"}));
           set_weight(7500);
           if( clonep() )
                   set_default_object(__FILE__);
           else {
    set("unit","把");
           set("long","这是把由黄金甲龙身上麟片,所制成的战矛\n");
                   set("value",70000);
                   set("material", "gold");
           set("wield_msg", "$N你从长销中取出了$n,身上有一股甲龙之气灌入体内
           ,你力量提升不少。\n");
           set("unwield_msg", "$N将$n插入销中,甲龙之瞬间气消失无踪。\n");
           }
           init_lance(70);
           setup();
           }






