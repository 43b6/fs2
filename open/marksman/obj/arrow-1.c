#include <weapon.h>
#include <ansi.h>

inherit ARROW;

void create()
{
set_name("������",({"arrow"}));
        set_weight(15);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
                set("base_unit","֧");
set("base_value",0);
set("no_sell",1);
set("no_auc",1);
set("value",0);
               set("material", "wood");

        }
        init_arrow(5);
set_amount(300);
        setup();
}
