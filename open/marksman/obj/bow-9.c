#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

set_name("�㺮��",({"cold bow","bow"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long","һ������������еĹ���\n");
 
set("material","steel");
        }
init_bow(60);
set("value",0);
setup();
}
