#include <weapon.h>
#include <ansi.h>

inherit ARROW;

void create()
{
set_name("��ȸ��",({"sparrow arrow","arrow"}));
        set_weight(15);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
set("value",1500);
                set("base_unit","֧");
set("material","iron");
set("value",0);

        }
        init_arrow(15);
set_amount(300);
        setup();
}
