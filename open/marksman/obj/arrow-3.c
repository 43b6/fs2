#include <weapon.h>
#include <ansi.h>

inherit ARROW;

void create()
{
set_name("��а��",({"violet arrow","arrow"}));
        set_weight(15);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
set("value",0);
                set("base_unit","֧");
set("material","iron");

        }
        init_arrow(25);
set_amount(300);
        setup();
}
