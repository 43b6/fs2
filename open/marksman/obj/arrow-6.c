#include <weapon.h>
#include <ansi.h>

inherit ARROW;

void create()
{
set_name("�����",({"ghost arrow","arrow"}));
        set_weight(15);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
                set("base_unit","֧");
set("material","copper");

        }
init_arrow(35);
set("value",0);
set_amount(300);
        setup();
}
